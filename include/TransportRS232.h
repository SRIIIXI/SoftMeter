#ifndef TRANSPORT_RS232_
#define TRANSPORT_RS232_

#include "Transport.h"

class TransportRS232 : public Transport
{
public:
    TransportRS232();

    virtual ~TransportRS232();

    bool Initialize() override;

    bool Open() override;

    bool Close() override;

    int Write() override;

    int Read() override;
};

#endif

