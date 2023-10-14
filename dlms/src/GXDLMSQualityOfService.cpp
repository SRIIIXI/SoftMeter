#include <sstream>
#include "GXDLMSQualityOfService.h"

int CGXDLMSQualityOfService::GetPrecedence()
{
    return m_Precedence;
}
void CGXDLMSQualityOfService::SetPrecedence(int value)
{
    m_Precedence = value;
}

int CGXDLMSQualityOfService::GetDelay()
{
    return m_Delay;
}
void CGXDLMSQualityOfService::SetDelay(int value)
{
    m_Delay = value;
}

int CGXDLMSQualityOfService::GetReliability()
{
    return m_Reliability;
}
void CGXDLMSQualityOfService::SetReliability(int value)
{
    m_Reliability = value;
}

int CGXDLMSQualityOfService::GetPeakThroughput()
{
    return m_PeakThroughput;
}
void CGXDLMSQualityOfService::SetPeakThroughput(int value)
{
    m_PeakThroughput = value;
}

int CGXDLMSQualityOfService::GetMeanThroughput()
{
    return m_MeanThroughput;
}
void CGXDLMSQualityOfService::SetMeanThroughput(int value)
{
    m_MeanThroughput = value;
}


std::string CGXDLMSQualityOfService::ToString()
{
    std::stringstream sb;
    sb << m_Precedence;
    sb << " ";
    sb << m_Delay;
    sb << " ";
    sb << m_Reliability;
    sb << " ";
    sb << m_PeakThroughput;
    sb << " ";
    sb << m_MeanThroughput;
    return sb.str();
}