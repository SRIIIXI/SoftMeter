#ifndef TRANSPORT_TCP_
#define TRANSPORT_TCP_

#include "Transport.h"

class TransportTCP : public Transport
{
public:
    TransportTCP();

    virtual ~TransportTCP();

    bool Initialize(const char* args...) override;

    bool Open() override;

    bool Close() override;

    int Write() override;

    int Read() override;
};

#endif
