#ifndef GXDLMSPLCMETERINFO_H
#define GXDLMSPLCMETERINFO_H

#include "GXEnums.h"
#include "GXByteBuffer.h"

//Information from the discovered PLC meter(s).
class CGXDLMSPlcMeterInfo
{
private:
    /**
     * Source Address.
     */
    uint16_t m_SourceAddress;

    /**
     * Destination Address.
     */
    uint16_t m_DestinationAddress;
    /**
     * System title.
     */
    CGXByteBuffer m_SystemTitle;
    /**
     * Alarm descriptor.
     */
    short m_AlarmDescriptor;

public:

    uint16_t GetSourceAddress()
    {
        return m_SourceAddress;
    }

    void SetSourceAddress(uint16_t value)
    {
        m_SourceAddress = value;
    }

    /**
     * Destination Address.
     */
    uint16_t GetDestinationAddress()
    {
        return m_DestinationAddress;
    }

    void SetDestinationAddress(uint16_t value)
    {
        m_DestinationAddress = value;
    }

    /**
     * System title.
     */
    CGXByteBuffer& GetSystemTitle()
    {
        return m_SystemTitle;
    }

    void SetSystemTitle(CGXByteBuffer& value)
    {
        m_SystemTitle = value;
    }

    /**
     * Alarm descriptor.
     */
    short GetAlarmDescriptor()
    {
        return m_AlarmDescriptor;
    }

    void SetAlarmDescriptor(short value)
    {
        m_AlarmDescriptor = value;
    }
};

#endif //GXDLMSPLCMETERINFO_H
