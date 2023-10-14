#include "GXDLMSVariant.h"
#include "GXDLMSClient.h"
#include "GXDLMSEmergencyProfile.h"
#include <sstream>

int CGXDLMSEmergencyProfile::GetID()
{
    return m_ID;
}
void CGXDLMSEmergencyProfile::SetID(int value)
{
    m_ID = value;
}
CGXDateTime& CGXDLMSEmergencyProfile::GetActivationTime()
{
    return m_ActivationTime;
}
void CGXDLMSEmergencyProfile::SetActivationTime(CGXDateTime value)
{
    m_ActivationTime = value;
}
int CGXDLMSEmergencyProfile::GetDuration()
{
    return m_Duration;
}
void CGXDLMSEmergencyProfile::SetDuration(int value)
{
    m_Duration = value;
}

std::string CGXDLMSEmergencyProfile::ToString()
{
    std::stringstream sb;
    sb << m_ID;
    sb << " ";
    sb << m_ActivationTime.ToString().c_str();
    sb << " ";
    sb << m_Duration;
    return sb.str();
}