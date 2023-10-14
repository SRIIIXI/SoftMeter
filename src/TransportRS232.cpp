#include "PlatformDefinitions.h"
#include "DlmsServer.h"

HANDLE			m_hComPort;
OVERLAPPED		m_osWrite;
OVERLAPPED		m_osReader;
uint16_t        m_WaitTime;

static const unsigned int RECEIVE_BUFFER_SIZE = 4096;
unsigned char   m_Receivebuff[RECEIVE_BUFFER_SIZE];

bool rs232_initialize();
bool rs232_open(const char* devicename, unsigned short baudRate, unsigned char parity, unsigned char stopBits, unsigned char dataBits);
bool rs232_transmit_buffer(CGXByteBuffer& buffer);
bool rs232_receive_buffer(CGXByteBuffer& buffer);
bool rs232_close();
bool rs232_set_comm_state(HANDLE hWnd, LPDCB DCB);
bool rs232_get_comm_state(HANDLE hWnd, LPDCB DCB);

DWORD lastcommerror = 0;

void start_rs232(const char* path, const char* device)
{
    if (!rs232_initialize())
    {
        return;
    }

    if (!rs232_open(device, 9600, EVENPARITY, 1, 8))
    {
        return;
    }

    init_dlms(path);

    std::cout << "DLMS Simulator over RS232 " << device << " started" << std::endl << std::flush;
    std::cout << "Baud rate: 9600, Parity:Even, Stopbits:1, Databits:8" << std::endl << std::flush;
    std::cout << "###" << std::endl << std::flush;

    while (true)
    {
        CGXByteBuffer requestbuffer, replybuffer;

        rs232_receive_buffer(requestbuffer);

        std::string recbuff = bytes_to_hex(requestbuffer.GetData(), requestbuffer.GetSize(), ' ');
        std::cout << "RX: [" << requestbuffer.GetSize() << " bytes] " << recbuff << std::endl;

        LNServer->HandleRequest(requestbuffer, replybuffer);

        if (replybuffer.GetSize() > 0)
        {
            rs232_transmit_buffer(replybuffer);

            std::string trsbuff = bytes_to_hex(replybuffer.GetData(), replybuffer.GetSize(), ' ');
            std::cout << "TX: [" << replybuffer.GetSize() << " bytes] " << trsbuff << std::endl;
        }
        else
        {
            std::cout << "Invalid request" << std::endl;
        }
    }
}

bool rs232_initialize()
{
    ZeroMemory(&m_osReader, sizeof(OVERLAPPED));
    ZeroMemory(&m_osWrite, sizeof(OVERLAPPED));
    m_osReader.hEvent = CreateEvent(NULL, TRUE, FALSE, NULL);
    m_osWrite.hEvent = CreateEvent(NULL, TRUE, FALSE, NULL);
    m_hComPort = INVALID_HANDLE_VALUE;
    m_WaitTime = 500;
    return true;
}

bool rs232_get_comm_state(HANDLE hWnd, LPDCB dcb)
{
    ZeroMemory(dcb, sizeof(DCB));
    dcb->DCBlength = sizeof(DCB);
    if (!GetCommState(hWnd, dcb))
    {
        DWORD err = GetLastError(); //Save occured error.
        if (err == 995)
        {
            COMSTAT comstat;
            unsigned long RecieveErrors;
            if (!ClearCommError(hWnd, &RecieveErrors, &comstat))
            {
                lastcommerror = GetLastError();
                return false;
            }
            if (!GetCommState(hWnd, dcb))
            {
                lastcommerror = GetLastError(); //Save occured error.
                return false;
            }
        }
        else
        {
            //If USB to serial port converters do not implement this.
            if (err != ERROR_INVALID_FUNCTION)
            {
                return false;
            }
        }
    }

    return true;
}

bool rs232_set_comm_state(HANDLE hWnd, LPDCB DCB)
{
    if (!SetCommState(hWnd, DCB))
    {
        DWORD err = GetLastError(); //Save occured error.
        if (err == 995)
        {
            COMSTAT comstat;
            unsigned long RecieveErrors;
            if (!ClearCommError(hWnd, &RecieveErrors, &comstat))
            {
                lastcommerror = GetLastError();
                return false;
            }
            if (!SetCommState(hWnd, DCB))
            {
                lastcommerror = GetLastError();
                return false;
            }
        }
        else
        {
            //If USB to serial port converters do not implement this.
            if (err != ERROR_INVALID_FUNCTION)
            {
                return false;
            }
        }
    }
    return true;
}

bool rs232_open(const char* devicename, unsigned short baudRate, unsigned char parity, unsigned char stopBits, unsigned char dataBits)
{
    rs232_close();

    char buff[50] = {0};

    DCB dcb = { 0 };

    sprintf_s(buff, 50, "\\\\.\\%s", devicename);

    //Open serial port for read / write. Port can't share.
    m_hComPort = CreateFileA(buff, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, NULL);

    if (m_hComPort == INVALID_HANDLE_VALUE)
    {
        lastcommerror = WSAGetLastError();
        printf("Failed to open serial port: \"%s\"\n", devicename);
        return false;
    }

    dcb.DCBlength = sizeof(DCB);

    if (!rs232_get_comm_state(m_hComPort, &dcb))
    {
        return false;
    }

    dcb.fBinary = 1;
    dcb.fOutX = dcb.fInX = 0;
    //Abort all reads and writes on Error.
    dcb.fAbortOnError = 1;
    dcb.BaudRate = baudRate;
    dcb.ByteSize = dataBits;
    dcb.StopBits = stopBits;
    dcb.Parity = parity;

    if (!rs232_set_comm_state(m_hComPort, &dcb))
    {
        return false;
    }

    return true;
}

bool rs232_transmit_buffer(CGXByteBuffer& buffer)
{
    if (m_hComPort != INVALID_HANDLE_VALUE)
    {
        int len = buffer.GetSize();

        DWORD sendSize = 0;
        BOOL bRes = ::WriteFile(m_hComPort, buffer.GetData(), len, &sendSize, &m_osWrite);

        if (!bRes)
        {
            COMSTAT comstat;
            unsigned long RecieveErrors;
            lastcommerror = GetLastError();

            //If error occurs...
            if (lastcommerror != ERROR_IO_PENDING)
            {
                lastcommerror = WSAGetLastError();
                return false;
            }

            //Wait until data is actually sent
            lastcommerror = WaitForSingleObject(m_osWrite.hEvent, m_WaitTime);
            if (lastcommerror != 0)
            {
                lastcommerror = WSAGetLastError();
                return false;
            }

            //Read bytes in output buffer. Some USB converts require this.
            if (!ClearCommError(m_hComPort, &RecieveErrors, &comstat))
            {
                lastcommerror = WSAGetLastError();
                return false;
            }
        }

        return true;
    }

    return false;
}

bool rs232_receive_buffer(CGXByteBuffer& buffer)
{
    unsigned char eop = 0x7E;
    unsigned long RecieveErrors;
    COMSTAT comstat;
    DWORD bytesRead = 0;
    DWORD total = 0;

    unsigned long cnt = 1;
    bool bFound = false;

    //int lastReadIndex = reply.GetPosition();

    do
    {
        //We do not want to read byte at the time.
        if (!ClearCommError(m_hComPort, &RecieveErrors, &comstat))
        {
            lastcommerror = GetLastError();
            return false;
        }
        bytesRead = 0;
        cnt = 1;
        //Try to read at least one byte.
        if (comstat.cbInQue > 0)
        {
            cnt = comstat.cbInQue;
        }
        //If there is more data than can fit to buffer.
        if (cnt > RECEIVE_BUFFER_SIZE)
        {
            cnt = RECEIVE_BUFFER_SIZE;
        }
        if (!ReadFile(m_hComPort, &m_Receivebuff[total], cnt, &bytesRead, &m_osReader))
        {
            lastcommerror = GetLastError();
            if (lastcommerror != ERROR_IO_PENDING)
            {
                lastcommerror = GetLastError();
                return false;
            }

            //Wait until data is actually read
            if (::WaitForSingleObject(m_osReader.hEvent, INFINITE) != WAIT_OBJECT_0)
            {
                return false;
            }

            if (!GetOverlappedResult(m_hComPort, &m_osReader, &bytesRead, TRUE))
            {
                lastcommerror = GetLastError();
                return false;
            }
        }

        total = total + bytesRead;

        //reply.Set(m_Receivebuff, bytesRead);

        //Note! Some USB converters can return true for ReadFile and Zero as bytesRead.
        //In that case wait for a while and read again.
        if (bytesRead == 0)
        {
            Sleep(100);
            continue;
        }
        else
        {
            if (total > 1)
            {
                if (m_Receivebuff[total - 1] == eop)
                {
                    buffer.Set(m_Receivebuff, total);
                    bFound = true;
                    break;
                }
            }
        }

    } while (!bFound);

    return true;
}

bool rs232_close()
{
    if (m_hComPort != INVALID_HANDLE_VALUE)
    {
        CloseHandle(m_hComPort);
        CloseHandle(m_osReader.hEvent);
        CloseHandle(m_osWrite.hEvent);
        m_hComPort = INVALID_HANDLE_VALUE;
    }

    return true;
}
