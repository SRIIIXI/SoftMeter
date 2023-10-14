#ifndef GXDLMSPLCREGISTER_H
#define GXDLMSPLCREGISTER_H

#include "GXEnums.h"

class CGXDLMSPlcRegister
{
private:
    unsigned char m_ResponseProbability;
    uint16_t m_AllowedTimeSlots;
    unsigned char m_DiscoverReportInitialCredit;
    unsigned char m_IcEqualCredit;

public:
    unsigned char GetResponseProbability()
    {
        return m_ResponseProbability;
    }

    void SetResponseProbability(unsigned char value)
    {
        m_ResponseProbability = value;
    }

    uint16_t GetAllowedTimeSlots()
    {
        return m_AllowedTimeSlots;
    }

    void SetAllowedTimeSlots(uint16_t value)
    {
        m_AllowedTimeSlots = value;
    }

    unsigned char GetDiscoverReportInitialCredit()
    {
        return m_DiscoverReportInitialCredit;
    }

    void SetDiscoverReportInitialCredit(unsigned char value)
    {
        m_DiscoverReportInitialCredit = value;
    }

    unsigned char GetICEqualCredit()
    {
        return m_IcEqualCredit;
    }

    void SetICEqualCredit(unsigned char value)
    {
        m_IcEqualCredit = value;
    }
};

#endif //GXDLMSPLCREGISTER_H
