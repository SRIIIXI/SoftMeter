#include "GXDLMSPppSetupLcpOption.h"
#include <sstream>

PPP_SETUP_LCP_OPTION_TYPE CGXDLMSPppSetupLcpOption::GetType()
{
    return m_Type;
}
void CGXDLMSPppSetupLcpOption::SetType(PPP_SETUP_LCP_OPTION_TYPE value)
{
    m_Type = value;
}

int CGXDLMSPppSetupLcpOption::GetLength()
{
    return m_Length;
}

void CGXDLMSPppSetupLcpOption::SetLength(int value)
{
    m_Length = value;
}

CGXDLMSVariant& CGXDLMSPppSetupLcpOption::GetData()
{
    return m_Data;
}

void CGXDLMSPppSetupLcpOption::SetData(CGXDLMSVariant& value)
{
    m_Data = value;
}

std::string CGXDLMSPppSetupLcpOption::ToString()
{
    std::stringstream sb;
    sb << m_Type;
    sb << " ";
    sb << m_Length;
    return sb.str();
}