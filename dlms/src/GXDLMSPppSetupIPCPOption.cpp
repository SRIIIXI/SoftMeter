#include "GXDLMSPppSetupIPCPOption.h"
#include <sstream>

PPP_SETUP_IPCP_OPTION_TYPE CGXDLMSPppSetupIPCPOption::GetType()
{
    return m_Type;
}
void CGXDLMSPppSetupIPCPOption::SetType(PPP_SETUP_IPCP_OPTION_TYPE value)
{
    m_Type = value;
}

int CGXDLMSPppSetupIPCPOption::GetLength()
{
    return m_Length;
}
void CGXDLMSPppSetupIPCPOption::SetLength(int value)
{
    m_Length = value;
}

CGXDLMSVariant& CGXDLMSPppSetupIPCPOption::GetData()
{
    return m_Data;
}
void CGXDLMSPppSetupIPCPOption::SetData(CGXDLMSVariant& value)
{
    m_Data = value;
}

std::string CGXDLMSPppSetupIPCPOption::ToString()
{
    std::stringstream sb;
    sb << m_Type;
    sb << " ";
    sb << m_Length;
    return sb.str();
}