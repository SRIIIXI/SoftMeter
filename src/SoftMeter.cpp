#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "PlatformDefinitions.h"
#include "GXDLMSServerLN.h"
#include "GXDLMSBase.h"
#include "SoftMeter.h"
#include "GXDLMSAssociationLogicalName.h"
#include "GXDLMSAssociationShortName.h"
#include "GXDLMSTranslator.h"

// Default is TCP socket
MediaType ActiveMedia = BLEUART;

CGXDLMSServerLN* LNServer = nullptr;

int main(int argc, char* argv[])
{
    if (argc == 1)
    {
        ActiveMedia = BLEUART;
    }

    if (argc == 2)
    {
        if (strcmp(argv[1], "BLE") == 0)
        {
            ActiveMedia = BLEUART;
        }
    }
    
    if (argc == 3)
    {
        if (strcmp(argv[1], "RS232") == 0)
        {
            ActiveMedia = RS232;
        }
    }

    if (argc == 3)
    {
        if (strcmp(argv[1], "TCP") == 0)
        {
            ActiveMedia = TCPSOCKET;
        }
    }

    switch(ActiveMedia)
    {
        case BLEUART:
        {
            start_ble(argv[0]);
            break;
        }
        case RS232:
        {
            start_rs232(argv[0], argv[2]);
            break;
        }
        case TCPSOCKET:
        {
            if (argc < 3 || argc < 2)
            {
                start_tcp(argv[0], 4059);
            }
            else
            {
                start_tcp(argv[0], atoi(argv[2]));
            }
            break;
        }
        default:
        {
            printf("Please provide a valid transport type with paramteres");
            return -1;
        }
    }
}

int init_dlms(const char* path)
{
    strcpy(DATAFILE, path);
    char* p = strrchr(DATAFILE, '\\');
    *p = '\0';
    strcpy(IMAGEFILE, DATAFILE);
    strcat(IMAGEFILE, "\\empty.bin");
    strcat(DATAFILE, "\\data.csv");

    int ret = 0;
    
    char hostname[65] = { 0 };
    unsigned long hlen = 64;
    gethostname(hostname, sizeof(hostname));
    hostname[8] = 0;

    LNServer = new CGXDLMSServerLN(new CGXDLMSAssociationLogicalName(), new CGXDLMSIecHdlcSetup(), hostname);

    if ((ret = LNServer->Init()) != 0)
    {
        return ret;
    }

    std::cout << "----------------------------" << std::endl << std::flush;
    std::cout << "System Title (Hex)         : " << LNServer->GetCiphering()->GetSystemTitle().ToHexString() << std::endl << std::flush;
    std::cout << "System Title (String)      : " << LNServer->GetCiphering()->GetSystemTitle().ToString() << std::endl << std::flush;
    std::cout << "Authentication key (GAK)   : " << LNServer->GetCiphering()->GetAuthenticationKey().ToHexString() << std::endl << std::flush;
    std::cout << "Block cipher key (GUEK)    : " << LNServer->GetCiphering()->GetBlockCipherKey().ToHexString() << std::endl << std::flush;
    std::cout << "Master key (KEK) title     : " << LNServer->GetKek().ToHexString() << std::endl << std::flush;
    std::cout << "Password                   : " << LNServer->GetSettings().GetPassword().ToHexString() << std::endl << std::flush;
    std::cout << "----------------------------" << std::endl << std::flush;
    std::cout << "Press Ctrl + C to close application" << std::endl << std::flush;

    return 0;
}

std::string bytes_to_hex(unsigned char* pBytes, int count, char addSpaces)
{
    const char hexArray[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    std::string hexChars(addSpaces ? 3 * count : 2 * count, 0);
    int tmp;
    int index = 0;
    for (int pos = 0; pos != count; ++pos)
    {
        tmp = pBytes[pos] & 0xFF;
        hexChars[index++] = hexArray[tmp >> 4];
        hexChars[index++] = hexArray[tmp & 0x0F];
        if (addSpaces)
        {
            hexChars[index++] = ' ';
        }
    }
    //Remove last separator.
    if (addSpaces && count != 0)
    {
        hexChars.resize(hexChars.size() - 1);
    }

    return hexChars;
}
