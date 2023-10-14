#ifndef GXDLMSMODEMINITIALISATION_H
#define GXDLMSMODEMINITIALISATION_H

#include <string>

class CGXDLMSModemInitialisation
{
    std::string m_Request;
    std::string m_Response;
    int m_Delay;

public:
    CGXDLMSModemInitialisation();
    std::string GetRequest();
    void SetRequest(std::string value);
    std::string GetResponse();
    void SetResponse(std::string value);
    int GetDelay();
    void SetDelay(int value);

    std::string ToString();
};
#endif //GXDLMSMODEMINITIALISATION_H