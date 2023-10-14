#include "GXDLMSIp4SetupIpOption.h"
#include <sstream>

IP_OPTION_TYPE CGXDLMSIp4SetupIpOption::GetType()
{
    return m_Type;
}
void CGXDLMSIp4SetupIpOption::SetType(IP_OPTION_TYPE value)
{
    m_Type = value;
}

short CGXDLMSIp4SetupIpOption::GetLength()
{
    return m_Length;
}
void CGXDLMSIp4SetupIpOption::SetLength(short value)
{
    m_Length = value;
}

CGXByteBuffer& CGXDLMSIp4SetupIpOption::GetData()
{
    return m_Data;
}

void CGXDLMSIp4SetupIpOption::SetData(CGXByteBuffer& value)
{
    m_Data = value;
}

std::string CGXDLMSIp4SetupIpOption::ToString()
{
    std::stringstream sb;
    sb << m_Type;
    return sb.str();
}
