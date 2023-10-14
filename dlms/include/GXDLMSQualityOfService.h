#ifndef GXDLMSQUALITYOFSERVICE_H
#define GXDLMSQUALITYOFSERVICE_H

#include <string>
#include "GXEnums.h"

class CGXDLMSQualityOfService
{
private:
    int m_Precedence;
    int m_Delay;
    int m_Reliability;
    int m_PeakThroughput;
    int m_MeanThroughput;

public:
    int GetPrecedence();
    void SetPrecedence(int value);

    int GetDelay();
    void SetDelay(int value);

    int GetReliability();
    void SetReliability(int value);

    int GetPeakThroughput();
    void SetPeakThroughput(int value);

    int GetMeanThroughput();
    void SetMeanThroughput(int value);

    std::string ToString();
};
#endif //GXDLMSQUALITYOFSERVICE_H
