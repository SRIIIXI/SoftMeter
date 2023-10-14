#ifndef DLMS_SERVER
#define DLMS_SERVER

#include "PlatformDefinitions.h"
#include "GXEnums.h"
#include "GXDLMSServerLN.h"

typedef enum MediaType
{
    RS232 = 'R',
    BLEUART = 'B',
    TCPSOCKET = 'T'
}MediaType;

extern MediaType ActiveMedia;

int init_dlms(const char* path);
void start_ble(const char* path);
void start_rs232(const char* path,const char* device);
void start_tcp(const char* path, int port);
std::string bytes_to_hex(unsigned char* pBytes, int count, char addSpaces);

extern CGXDLMSServerLN* LNServer;

#endif
