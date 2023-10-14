#ifndef TRANSPORT_BLE_
#define TRANSPORT_BLE_

#include "Transport.h"

class TransportBLE : public Transport
{
public:
    TransportBLE();

    virtual ~TransportBLE();

    bool Initialize(const char* args...) override;

    bool Open() override;

    bool Close() override;

    int Write() override;

    int Read() override;
};

#endif

