#include "GXDLMSModemInitialisation.h"
#include <sstream>

CGXDLMSModemInitialisation::CGXDLMSModemInitialisation()
{
    m_Delay = 0;
}

std::string CGXDLMSModemInitialisation::GetRequest()
{
    return m_Request;
}
void CGXDLMSModemInitialisation::SetRequest(std::string value)
{
    m_Request = value;
}

std::string CGXDLMSModemInitialisation::GetResponse()
{
    return m_Response;
}
void CGXDLMSModemInitialisation::SetResponse(std::string value)
{
    m_Response = value;
}

int CGXDLMSModemInitialisation::GetDelay()
{
    return m_Delay;
}

void CGXDLMSModemInitialisation::SetDelay(int value)
{
    m_Delay = value;
}

std::string CGXDLMSModemInitialisation::ToString()
{
    std::stringstream sb;
    sb << m_Request.c_str();
    sb << " ";
    sb << m_Response.c_str();
    sb << " ";
    sb << m_Delay;
    return sb.str();
}