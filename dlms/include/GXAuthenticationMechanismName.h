#ifndef GXAUTHENTICATIONMECHANISMNAME_H
#define GXAUTHENTICATIONMECHANISMNAME_H

#include "GXEnums.h"
#include <string>

class CGXAuthenticationMechanismName
{
private:
    int m_JointIsoCtt;
    int m_Country;
    int m_CountryName;
    int m_IdentifiedOrganization;
    int m_DlmsUA;
    int m_AuthenticationMechanismName;
    DLMS_AUTHENTICATION m_MechanismId;

public:
    /*
     * Constructor.
     */
    CGXAuthenticationMechanismName();

    int GetJointIsoCtt();
    void SetJointIsoCtt(int value);

    int GetCountry();
    void SetCountry(int value);

    int GetCountryName();
    void SetCountryName(int value);

    int GetIdentifiedOrganization();
    void SetIdentifiedOrganization(int value);

    int GetDlmsUA();
    void SetDlmsUA(int value);

    int GetAuthenticationMechanismName();
    void SetAuthenticationMechanismName(int value);

    DLMS_AUTHENTICATION GetMechanismId();
    void SetMechanismId(DLMS_AUTHENTICATION value);

    std::string ToString();
};
#endif //GXAUTHENTICATIONMECHANISMNAME_H
