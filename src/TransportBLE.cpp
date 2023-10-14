#include "PlatformDefinitions.h"
#include "SoftMeter.h"
#include "TransportBLE.h"

TransportBLE::TransportBLE() : Transport()
{

}

TransportBLE::~TransportBLE()
{

}

bool TransportBLE::Initialize(const char* args...)
{
    return false;
}

bool TransportBLE::Open()
{
    return false;
}

bool TransportBLE::Close()
{
    return false;
}

int TransportBLE::Write()
{
    return 0;
}

int TransportBLE::Read()
{
    return 0;
}

