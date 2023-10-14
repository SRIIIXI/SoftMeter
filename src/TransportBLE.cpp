#include "PlatformDefinitions.h"
#include "DlmsServer.h"

#pragma comment(lib, "windowsapp")

#include "winrt/Windows.Devices.Bluetooth.Advertisement.h"
#include "winrt/Windows.Devices.Bluetooth.GenericAttributeProfile.h"
#include "winrt/Windows.Devices.Bluetooth.Background.h"
#include "winrt/Windows.Devices.Bluetooth.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Storage.Streams.h"
#include "winrt/base.h"
#include "winrt/Windows.Foundation.Collections.h"

using namespace winrt::Windows::Storage::Streams;
using namespace winrt::Windows::Devices::Bluetooth;
using namespace winrt::Windows::Devices::Bluetooth::GenericAttributeProfile;
using namespace winrt::Windows::Devices::Bluetooth::Advertisement;
using namespace winrt::Windows::Devices::Bluetooth::Background;
using namespace winrt::Windows::Foundation;

#define SCAN_TIMEOUT_MS 5000
#define EDMI_UART_SERVICE	"MDTK0001-C889-5D66-AE38-A7A01230635A"
#define EDMI_UART_CHAR_RX	"MDTK0002-C889-5D66-AE38-A7A01230635A"
#define EDMI_UART_CHAR_TX	"MDTK0003-C889-5D66-AE38-A7A01230635A"

GUID output;
std::mutex queuelock;
std::queue<CGXByteBuffer> dlmsqueue;

winrt::guid uuid_to_guid(const std::string& uuid);

void start_ble(const char* path)
{
    winrt::init_apartment();

    BluetoothAdapter localAdapter = BluetoothAdapter::GetDefaultAsync().get();

    if (localAdapter.IsPeripheralRoleSupported() != true)
    {
        return;
    }

    winrt::guid svrid;
    winrt::guid txid;
    winrt::guid rxid;

    svrid = uuid_to_guid(EDMI_UART_SERVICE);
    txid = uuid_to_guid(EDMI_UART_CHAR_TX);
    rxid = uuid_to_guid(EDMI_UART_CHAR_RX);

    auto resService = GattServiceProvider::CreateAsync(svrid);

    while (true)
    {
        if (resService.Status() == AsyncStatus::Completed)
        {
            break;
        }

        ::Sleep(1000);
    }

    GattServiceProvider uartService = resService.GetResults().ServiceProvider();

    uartService.AdvertisementStatusChanged(
        [=](GattServiceProvider sender, GattServiceProviderAdvertisementStatusChangedEventArgs args)
        {
        });

    GattLocalCharacteristicParameters receiveParams;
    receiveParams.ReadProtectionLevel(GenericAttributeProfile::GattProtectionLevel::Plain);
    receiveParams.CharacteristicProperties(GenericAttributeProfile::GattCharacteristicProperties::WriteWithoutResponse);
    winrt::hstring writedesc(L"Request");
    receiveParams.UserDescription(writedesc);
    auto resReceive = uartService.Service().CreateCharacteristicAsync(rxid, receiveParams);

    while (true)
    {
        if (resReceive.Status() == AsyncStatus::Completed)
        {
            break;
        }

        ::Sleep(1000);
    }

    GattLocalCharacteristic receiveCharacteristics = resReceive.GetResults().Characteristic();

    receiveCharacteristics.WriteRequested(
        [=](GattLocalCharacteristic notifyingCharacteristic, GattWriteRequestedEventArgs args)
        {
            auto deferral = args.GetDeferral();

            auto res = args.GetRequestAsync();

            while (true)
            {
                if (res.Status() == AsyncStatus::Completed)
                {
                    break;
                }

                ::Sleep(1000);
            }

            GattWriteRequest request = res.GetResults();

            if (request == nullptr)
            {
                return;
            }
            else
            {
                DataReader reader = DataReader::FromBuffer(request.Value());
                reader.ByteOrder(ByteOrder::LittleEndian);
                auto val = reader.ReadBuffer(request.Value().Length());

                CGXByteBuffer buffer;
                buffer.Set(val.data(), val.Length());

                std::unique_lock<std::mutex> lock(queuelock);
                dlmsqueue.push(buffer);
                lock.unlock();

                if (request.Option() == GattWriteOption::WriteWithResponse)
                {
                    request.Respond();
                }
            }

            deferral.Complete();
        });

    receiveCharacteristics.SubscribedClientsChanged(
        [=](GattLocalCharacteristic sender, IInspectable args)
        {
        });

    GattLocalCharacteristicParameters transmitParams;
    transmitParams.ReadProtectionLevel(GenericAttributeProfile::GattProtectionLevel::Plain);
    transmitParams.CharacteristicProperties(GenericAttributeProfile::GattCharacteristicProperties::Notify);
    winrt::hstring readdesc(L"Response");
    transmitParams.UserDescription(writedesc);
    auto resTransmit = uartService.Service().CreateCharacteristicAsync(txid, transmitParams);

    while (true)
    {
        if (resTransmit.Status() == AsyncStatus::Completed)
        {
            break;
        }

        ::Sleep(1000);
    }

    GattLocalCharacteristic transmitCharacteristics = resTransmit.GetResults().Characteristic();

    transmitCharacteristics.SubscribedClientsChanged(
        [=](GattLocalCharacteristic sender, IInspectable args)
        {
        });

    GattServiceProviderAdvertisingParameters advParameters;
    advParameters.IsConnectable(true);
    advParameters.IsDiscoverable(true);

    uartService.StartAdvertising(advParameters);

    init_dlms(path);

    std::cout << "DLMS Simulator over BLE started" << std::endl;
    std::cout << "###" << std::endl;
    std::cout << "MDTK_UART_SERVICE MDTK0001-C889-5D66-AE38-A7A01230635A" << std::endl;
    std::cout << "MDTK_UART_CHAR_RX MDTK0002-C889-5D66-AE38-A7A01230635A" << std::endl;
    std::cout << "MDTK_UART_CHAR_TX MDTK0003-C889-5D66-AE38-A7A01230635A" << std::endl;


    while (true)
    {
        ::Sleep(100);

        CGXByteBuffer requestbuffer, replybuffer;
        bool needreply = false;

        std::unique_lock<std::mutex> lock(queuelock);

        if (dlmsqueue.size() > 0)
        {
            requestbuffer = dlmsqueue.front();
            dlmsqueue.pop();
            needreply = true;
        }

        lock.unlock();

        if (needreply)
        {
            std::string recbuff = bytes_to_hex(requestbuffer.GetData(), requestbuffer.GetSize(), ' ');
            std::cout << "RX: [" << requestbuffer.GetSize() << " bytes] " << recbuff << std::endl;

            LNServer->HandleRequest(requestbuffer, replybuffer);

            DataWriter writer;

            std::vector<byte> origbuffer;

            int sz = replybuffer.GetSize();

            if (sz > 0)
            {
                for (int idx = 0; idx < sz; idx++)
                {
                    BYTE ch = replybuffer.GetData()[idx];
                    printf("%X ", ch);
                    origbuffer.push_back(ch);
                }

                winrt::array_view<byte const> fromConstVector{ origbuffer };

                writer.WriteBytes(fromConstVector);
                auto resRx = transmitCharacteristics.NotifyValueAsync(writer.DetachBuffer());

                while (true)
                {
                    if (resRx.Status() == AsyncStatus::Completed)
                    {
                        break;
                    }

                    ::Sleep(1000);
                }

                std::string trsbuff = bytes_to_hex(replybuffer.GetData(), replybuffer.GetSize(), ' ');
                std::cout << "TX: [" << replybuffer.GetSize() << " bytes] " << trsbuff << std::endl;
            }
            else
            {
                std::cout << "Invalid request" << std::endl;
            }
        }
    }

    return;
}

winrt::guid uuid_to_guid(const std::string& uuid)
{
    // TODO: Add proper cleanup / validation
    std::stringstream helper;
    for (int i = 0; i < uuid.length(); i++)
    {
        if (uuid[i] != '-') {
            helper << uuid[i];
        }
    }
    std::string clean_uuid = helper.str();
    winrt::guid guid;
    uint64_t* data4_ptr = (uint64_t*)guid.Data4;

    guid.Data1 = std::strtoul(clean_uuid.substr(0, 8).c_str(), nullptr, 16);
    guid.Data2 = std::strtoul(clean_uuid.substr(8, 4).c_str(), nullptr, 16);
    guid.Data3 = std::strtoul(clean_uuid.substr(12, 4).c_str(), nullptr, 16);
    //*data4_ptr = _byteswap_uint64(std::strtoull(clean_uuid.substr(16, 16).c_str(), nullptr, 16));
    *data4_ptr = _byteswap_uint64(strtoull(clean_uuid.substr(16, 16).c_str(), nullptr, 16));

    return guid;
}

