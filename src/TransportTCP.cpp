#include "PlatformDefinitions.h"
#include "DlmsServer.h"

#define DEFAULT_BUFLEN 4096
#define DEFAULT_PORT "4059"

WSADATA wsaData;
int iResult;

SOCKET ListenSocket = INVALID_SOCKET;
SOCKET ClientSocket = INVALID_SOCKET;

struct addrinfo *result = NULL;
struct addrinfo hints;

int iSendResult;
char recvbuf[DEFAULT_BUFLEN];
int recvbuflen = DEFAULT_BUFLEN;

void tcp_run_client_loop();

bool tcp_transmit_buffer(CGXByteBuffer& buffer);
bool tcp_receive_buffer(CGXByteBuffer& buffer);

void start_tcp(const char *path, int port)
{
    // Initialize Winsock
    iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
    if (iResult != 0)
    {
        printf("WSAStartup failed with error: %d\n", iResult);
        return;
    }

    ZeroMemory(&hints, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;
    hints.ai_flags = AI_PASSIVE;

    // Resolve the server address and port
    iResult = getaddrinfo(NULL, DEFAULT_PORT, &hints, &result);

    if ( iResult != 0 )
    {
        printf("getaddrinfo failed with error: %d\n", iResult);
        WSACleanup();
        return;
    }

    // Create a SOCKET for the server to listen for client connections.
    ListenSocket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);

    if (ListenSocket == INVALID_SOCKET)
    {
        printf("socket failed with error: %d\n", WSAGetLastError());
        freeaddrinfo(result);
        WSACleanup();
        return;
    }

    // Setup the TCP listening socket
    iResult = bind( ListenSocket, result->ai_addr, (int)result->ai_addrlen);

    if (iResult == SOCKET_ERROR)
    {
        printf("bind failed with error: %d\n", WSAGetLastError());
        freeaddrinfo(result);
        closesocket(ListenSocket);
        WSACleanup();
        return;
    }

    freeaddrinfo(result);

    iResult = listen(ListenSocket, SOMAXCONN);
    if (iResult == SOCKET_ERROR)
    {
        printf("listen failed with error: %d\n", WSAGetLastError());
        closesocket(ListenSocket);
        WSACleanup();
        return;
    }

    init_dlms(path);

    std::cout << "DLMS Simulator over TCP port " << port << " started" << std::endl << std::flush;
    std::cout << "###" << std::endl << std::flush;

    while(true)
    {
        // Accept a client socket
        ClientSocket = accept(ListenSocket, NULL, NULL);
        if (ClientSocket == INVALID_SOCKET)
        {
            printf("accept failed with error: %d\n", WSAGetLastError());
            closesocket(ListenSocket);
            WSACleanup();
            return;
        }
        else
        {
            system("cls");
            printf("TCP client connected\n");
            tcp_run_client_loop();
        }
    }

    // No longer need server socket
    closesocket(ListenSocket);
    WSACleanup();

    return;
}

void tcp_run_client_loop()
{
    bool loop_continue = true;

    while(true)
    {
        CGXByteBuffer requestbuffer, replybuffer;

        loop_continue = tcp_receive_buffer(requestbuffer);

        if(!loop_continue)
        {
            break;
        }

        std::string recbuff = bytes_to_hex(requestbuffer.GetData(), requestbuffer.GetSize(), ' ');
        std::cout << "RX: [" << requestbuffer.GetSize() << " bytes] " << recbuff << std::endl;

        LNServer->HandleRequest(requestbuffer, replybuffer);

        if (replybuffer.GetSize() > 0)
        {
            loop_continue = tcp_transmit_buffer(replybuffer);

            if(!loop_continue)
            {
                break;
            }

            std::string trsbuff = bytes_to_hex(replybuffer.GetData(), replybuffer.GetSize(), ' ');
            std::cout << "TX: [" << replybuffer.GetSize() << " bytes] " << trsbuff << std::endl;
        }
        else
        {
            std::cout << "Invalid request" << std::endl;
        }

        fflush(stdout);
    }

    closesocket(ClientSocket);

    ClientSocket = INVALID_SOCKET;
    printf("TCP client disconnected\n");

    return;
}

bool tcp_transmit_buffer(CGXByteBuffer& buffer)
{
    if(ClientSocket == INVALID_SOCKET)
    {
        return false;
    }

    char* ptr = (char*)calloc(1,buffer.GetSize());
    memcpy(ptr, buffer.GetData(), buffer.GetSize());

    DWORD ret = send(ClientSocket, (const char*)buffer.GetData(), buffer.GetSize(), 0);

    free(ptr);

    return bool(ret);
}

bool tcp_receive_buffer(CGXByteBuffer& buffer)
{
    if(ClientSocket == INVALID_SOCKET)
    {
        return false;
    }

    char eop = 0x7E;

    int ctr = 0;
    ZeroMemory(recvbuf, sizeof(recvbuf));

    //while(true)
    //{
    //    char ch = 0;
    //    DWORD ret = recv(ClientSocket, &ch, 1, 0);
    //    if(ret == SOCKET_ERROR || ret == 0)
    //    {
    //        return false;
    //    }

    //    recvbuf[ctr] = ch;
    //    ctr++;
    //    if(ch == eop && ctr > 1)
    //    {
    //        break;
    //    }
    //}

    DWORD ret = recv(ClientSocket, recvbuf, int(DEFAULT_BUFLEN), 0);
    if (ret == SOCKET_ERROR || ret == 0)
    {
        return false;
    }

    buffer.Set(recvbuf, ret);

    return true;
}
