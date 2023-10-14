#include "GXDLMSGSMCellInfo.h"
#include <sstream>

CGXDLMSGSMCellInfo::CGXDLMSGSMCellInfo()
{
    m_CellId = 0;
    m_LocationId = 0;
    m_SignalQuality = 0;
    m_Ber = 0;
    m_MobileCountryCode = 0;
    m_MobileNetworkCode = 0;
    m_ChannelNumber = 0;
}

unsigned int CGXDLMSGSMCellInfo::GetCellId()
{
    return m_CellId;
}

void CGXDLMSGSMCellInfo::SetCellId(unsigned int value)
{
    m_CellId = value;
}

unsigned short CGXDLMSGSMCellInfo::GetLocationId()
{
    return m_LocationId;
}

void CGXDLMSGSMCellInfo::SetLocationId(unsigned short value)
{
    m_LocationId = value;
}

unsigned char CGXDLMSGSMCellInfo::GetSignalQuality()
{
    return m_SignalQuality;
}

void CGXDLMSGSMCellInfo::SetSignalQuality(unsigned char value)
{
    m_SignalQuality = value;
}

unsigned char CGXDLMSGSMCellInfo::GetBer()
{
    return m_Ber;
}

void CGXDLMSGSMCellInfo::SetBer(unsigned char value)
{
    m_Ber = value;
}

unsigned short CGXDLMSGSMCellInfo::GetMobileCountryCode()
{
    return m_MobileCountryCode;
}

void CGXDLMSGSMCellInfo::SetMobileCountryCode(unsigned short value)
{
    m_MobileCountryCode = value;
}

unsigned short CGXDLMSGSMCellInfo::GetMobileNetworkCode() 
{
    return m_MobileNetworkCode;
}

void CGXDLMSGSMCellInfo::SetMobileNetworkCode(unsigned short value)
{
    m_MobileNetworkCode = value;
}

unsigned long CGXDLMSGSMCellInfo::GetChannelNumber()
{
    return m_ChannelNumber;
}

void CGXDLMSGSMCellInfo::SetChannelNumber(unsigned long value)
{
    m_ChannelNumber = value;
}

std::string CGXDLMSGSMCellInfo::ToString()
{
    std::stringstream sb;
    sb << m_CellId;
    sb << ", ";
    sb << m_LocationId;
    sb << ", ";
    sb << (int)m_SignalQuality;
    sb << ", ";
    sb << (int)m_Ber;
    return sb.str();
}