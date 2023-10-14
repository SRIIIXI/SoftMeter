#ifndef GXAPPLICATIONCONTEXTNAME_H
#define GXAPPLICATIONCONTEXTNAME_H

#include <string>
#include "GXEnums.h"

class CGXApplicationContextName
{
private:
    std::string m_LogicalName;
    unsigned char m_JointIsoCtt;
    unsigned char m_Country;
    unsigned short m_CountryName;
    unsigned char m_IdentifiedOrganization;
    unsigned char m_DlmsUA;
    unsigned char m_ApplicationContext;
    DLMS_APPLICATION_CONTEXT_NAME m_ContextId;
public:
    // Constructor
    CGXApplicationContextName();

    unsigned char GetJointIsoCtt();
    void SetJointIsoCtt(unsigned char value);

    unsigned char GetCountry();
    void SetCountry(unsigned char value);

    unsigned short GetCountryName();
    void SetCountryName(unsigned short value);

    unsigned char GetIdentifiedOrganization();
    void SetIdentifiedOrganization(unsigned char value);

    unsigned char GetDlmsUA();
    void SetDlmsUA(unsigned char value);

    unsigned char GetApplicationContext();
    void SetApplicationContext(unsigned char value);

    DLMS_APPLICATION_CONTEXT_NAME GetContextId();
    void SetContextId(DLMS_APPLICATION_CONTEXT_NAME value);

    std::string ToString();
};
#endif //GXAPPLICATIONCONTEXTNAME_H
