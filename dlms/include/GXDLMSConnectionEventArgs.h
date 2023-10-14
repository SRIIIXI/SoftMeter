#ifndef GXDLMSCONNECTIONEVENTARGS_H
#define GXDLMSCONNECTIONEVENTARGS_H

class CGXDLMSConnectionEventArgs
{
private:
    // Server ID that client try to use to make connection.
    int m_ServerAddress;
public:
    /**
    * Constructor.
    */
    CGXDLMSConnectionEventArgs()
    {
        m_ServerAddress = 0;
    }

    int GetServerAddress()
    {
        return m_ServerAddress;
    }
    void SetServerAddress(int value)
    {
        m_ServerAddress = value;
    }
};

#endif //GXDLMSCONNECTIONEVENTARGS_H
