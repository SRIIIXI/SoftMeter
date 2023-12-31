#ifndef GXDLMSMBUSCLIENT_H
#define GXDLMSMBUSCLIENT_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_MBUS_CLIENT
#include "GXDLMSObject.h"
#include "GXMBusClientData.h"

typedef enum
{
    DLMS_MBUS_ENCRYPTION_KEY_STATUS_NO_ENCRYPTION_KEY = 0,
    DLMS_MBUS_ENCRYPTION_KEY_STATUS_ENCRYPTION_KEY_SET,
    DLMS_MBUS_ENCRYPTION_KEY_STATUS_ENCRYPTION_KEY_TRANSFERRED,
    DLMS_MBUS_ENCRYPTION_KEY_STATUS_ENCRYPTION_KEY_SET_AND_TRANSFERRED,
    DLMS_MBUS_ENCRYPTION_KEY_STATUS_ENCRYPTION_KEY_INUSE
}DLMS_MBUS_ENCRYPTION_KEY_STATUS;

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSMBusClient
*/
class CGXDLMSMBusClient : public CGXDLMSObject
{
    long m_CapturePeriod;
    int m_PrimaryAddress;
    std::string m_MBusPortReference;
    std::vector<std::pair<std::string, std::string> > m_CaptureDefinition;
    long m_IdentificationNumber;
    int m_ManufacturerID;
    int m_DataHeaderVersion;
    int m_DeviceType;
    int m_AccessNumber;
    int m_Status;
    int m_Alarm;
    unsigned short m_Configuration;
    DLMS_MBUS_ENCRYPTION_KEY_STATUS m_EncryptionKeyStatus;
public:
    //Constructor.
    CGXDLMSMBusClient();

    //SN Constructor.
    CGXDLMSMBusClient(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSMBusClient(std::string ln);

    /**
    Provides reference to an "M-Bus master port setup" object, used to configure
    an M-Bus port, each interface allowing to exchange data with one or more
    M-Bus slave devices
    */
    std::string GetMBusPortReference();
    void SetMBusPortReference(std::string value);

    std::vector<std::pair<std::string, std::string> >& GetCaptureDefinition();

    long GetCapturePeriod();
    void SetCapturePeriod(long value);

    int GetPrimaryAddress();
    void SetPrimaryAddress(int value);

    long GetIdentificationNumber();
    void SetIdentificationNumber(long value);

    int GetManufacturerID();
    void SetManufacturerID(int value);

    /*
     * Carries the Version element of the data header as specified in EN
     * 13757-3 sub-clause 5.6.
     */
    int GetDataHeaderVersion();
    void SetDataHeaderVersion(int value);

    int GetDeviceType();
    void SetDeviceType(int value);

    int GetAccessNumber();
    void SetAccessNumber(int value);

    int GetStatus();
    void SetStatus(int value);

    int GetAlarm();
    void SetAlarm(int value);

    unsigned short GetConfiguration();
    void SetConfiguration(unsigned short value);

    DLMS_MBUS_ENCRYPTION_KEY_STATUS GetEncryptionKeyStatus();
    void SetEncryptionKeyStatus(DLMS_MBUS_ENCRYPTION_KEY_STATUS value);

    // Returns amount of attributes.
    int GetAttributeCount();

    // Returns amount of methods.
    int GetMethodCount();

    //Get attribute values of object.
    void GetValues(std::vector<std::string>& values);

    /////////////////////////////////////////////////////////////////////////
    // Returns collection of attributes to read.
    //
    // If attribute is static and already read or device is returned
    // HW error it is not returned.
    //
    // all: All items are returned even if they are read already.
    // attributes: Collection of attributes to read.
    void GetAttributeIndexToRead(bool all, std::vector<int>& attributes);

    int GetDataType(int index, DLMS_DATA_TYPE& type);

    // Returns value of given attribute.
    int GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);

    // Set value of given attribute.
    int SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);

    //Installs a slave device.
    int SlaveInstall(
        CGXDLMSClient* client,
        std::vector<CGXByteBuffer>& reply);

    //De-installs a slave device.
    int SlaveDeInstall(
        CGXDLMSClient* client,
        std::vector<CGXByteBuffer>& reply);

    //Captures values.
    int Capture(
        CGXDLMSClient* client,
        std::vector<CGXByteBuffer>& reply);

    //Resets alarm state of the M-Bus slave device.
    int ResetAlarm(
        CGXDLMSClient* client,
        std::vector<CGXByteBuffer>& reply);

    //Synchronize the clock.
    int SynchronizeClock(
        CGXDLMSClient* client,
        std::vector<CGXByteBuffer>& reply);

    // Sends data to the M-Bus slave device.
    // client: DLMS client settings.
    // data: data to send
    // Returns Generated DLMS data.
    int SendData(
        CGXDLMSClient* client,
        std::vector<CGXMBusClientData>& data,
        std::vector<CGXByteBuffer>& reply);

    // Sets the encryption key in the M-Bus client and enables encrypted communication
    // with the M-Bus slave device.
    // client: DLMS client settings.
    // encryptionKey: encryption key
    // Returns Generated DLMS data.
    int SetEncryptionKey(
        CGXDLMSClient* client,
        CGXByteBuffer& encryptionKey,
        std::vector<CGXByteBuffer>& reply);

    // Transfers an encryption key to the M-Bus slave device.
    // client: DLMS client settings.
    // encryptionKey: encryption key
    // Returns Generated DLMS data.
    int TransferKey(
        CGXDLMSClient* client,
        CGXByteBuffer& encryptionKey,
        std::vector<CGXByteBuffer>& reply);
};
#endif //DLMS_IGNORE_MBUS_CLIENT
#endif //GXDLMSMBUSCLIENT_H