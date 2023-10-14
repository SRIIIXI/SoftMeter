#ifndef TRANSPORT_
#define TRANSPORT_

class TransportCallback
{
public:
    TransportCallback()
    {
    }

    virtual ~TransportCallback()
    {
    }

    virtual void OnRemoteConnected() = 0;

    virtual void OnRemoteDisconnected() = 0;

    virtual void OnDataReceived() = 0;

    virtual void OnError(int errorcode, const char* errorstring) = 0;
};

class Transport
{
public:
    Transport()
    {
        refCallback = nullptr;
    }

    virtual ~Transport()
    {
    }

    virtual bool Initialize(const char* args...) = 0;

    virtual bool Open() = 0;

    virtual bool Close() = 0;

    virtual int Write() = 0;

    virtual int Read() = 0;

    void SetCallback(TransportCallback* callbackPtr)
    {
        refCallback = callbackPtr;
    }

private:
    TransportCallback* refCallback;
};

#endif
