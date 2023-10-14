#include "GXAuthenticationMechanismName.h"
#include "GXDLMSVariant.h"
#include <sstream>

CGXAuthenticationMechanismName::CGXAuthenticationMechanismName()
{
    m_JointIsoCtt = 2;
    m_Country = 16;
    m_CountryName = 756;
    m_IdentifiedOrganization = 5;
    m_DlmsUA = 8;
    m_AuthenticationMechanismName = 2;
    m_MechanismId = DLMS_AUTHENTICATION_NONE;
}

int CGXAuthenticationMechanismName::GetJointIsoCtt()
{
    return m_JointIsoCtt;
}
void CGXAuthenticationMechanismName::SetJointIsoCtt(int value)
{
    m_JointIsoCtt = value;
}

int CGXAuthenticationMechanismName::GetCountry()
{
    return m_Country;
}
void CGXAuthenticationMechanismName::SetCountry(int value)
{
    m_Country = value;
}

int CGXAuthenticationMechanismName::GetCountryName()
{
    return m_CountryName;
}
void CGXAuthenticationMechanismName::SetCountryName(int value)
{
    m_CountryName = value;
}
int CGXAuthenticationMechanismName::GetIdentifiedOrganization()
{
    return m_IdentifiedOrganization;
}
void CGXAuthenticationMechanismName::SetIdentifiedOrganization(int value)
{
    m_IdentifiedOrganization = value;
}

int CGXAuthenticationMechanismName::GetDlmsUA()
{
    return m_DlmsUA;
}
void CGXAuthenticationMechanismName::SetDlmsUA(int value)
{
    m_DlmsUA = value;
}
int CGXAuthenticationMechanismName::GetAuthenticationMechanismName()
{
    return m_AuthenticationMechanismName;
}
void CGXAuthenticationMechanismName::SetAuthenticationMechanismName(int value)
{
    m_AuthenticationMechanismName = value;
}

DLMS_AUTHENTICATION CGXAuthenticationMechanismName::GetMechanismId()
{
    return m_MechanismId;
}
void CGXAuthenticationMechanismName::SetMechanismId(DLMS_AUTHENTICATION value)
{
    m_MechanismId = value;
}


std::string CGXAuthenticationMechanismName::ToString()
{
    std::stringstream sb;
    sb << CGXDLMSVariant(m_JointIsoCtt).ToString().c_str();
    sb << " ";
    sb << CGXDLMSVariant(m_Country).ToString().c_str();
    sb << " ";
    sb << CGXDLMSVariant(m_CountryName).ToString().c_str();
    sb << " ";
    sb << CGXDLMSVariant(m_IdentifiedOrganization).ToString().c_str();
    sb << " ";
    sb << CGXDLMSVariant(m_DlmsUA).ToString().c_str();
    sb << " ";
    sb << CGXDLMSVariant(m_AuthenticationMechanismName).ToString().c_str();
    sb << " ";
    sb << CGXDLMSVariant(m_MechanismId).ToString().c_str();
    return sb.str();
}