#include "GXApplicationContextName.h"
#include "GXDLMSVariant.h"

/// <summary>
/// Constructor
/// </summary>
CGXApplicationContextName::CGXApplicationContextName()
{
    m_JointIsoCtt = 2;
    m_Country = 16;
    m_CountryName = 756;
    m_IdentifiedOrganization = 5;
    m_DlmsUA = 8;
    m_ApplicationContext = 1;
    m_ContextId = DLMS_APPLICATION_CONTEXT_NAME_LOGICAL_NAME;
}

unsigned char CGXApplicationContextName::GetJointIsoCtt()
{
    return m_JointIsoCtt;
}
void CGXApplicationContextName::SetJointIsoCtt(unsigned char value)
{
    m_JointIsoCtt = value;
}

unsigned char CGXApplicationContextName::GetCountry()
{
    return m_Country;
}
void CGXApplicationContextName::SetCountry(unsigned char value)
{
    m_Country = value;
}

unsigned short CGXApplicationContextName::GetCountryName()
{
    return m_CountryName;
}
void CGXApplicationContextName::SetCountryName(unsigned short value)
{
    m_CountryName = value;
}

unsigned char CGXApplicationContextName::GetIdentifiedOrganization()
{
    return m_IdentifiedOrganization;
}
void CGXApplicationContextName::SetIdentifiedOrganization(unsigned char value)
{
    m_IdentifiedOrganization = value;
}

unsigned char CGXApplicationContextName::GetDlmsUA()
{
    return m_DlmsUA;
}
void CGXApplicationContextName::SetDlmsUA(unsigned char value)
{
    m_DlmsUA = value;
}

unsigned char CGXApplicationContextName::GetApplicationContext()
{
    return m_ApplicationContext;
}
void CGXApplicationContextName::SetApplicationContext(unsigned char value)
{
    m_ApplicationContext = value;
}

DLMS_APPLICATION_CONTEXT_NAME CGXApplicationContextName::GetContextId()
{
    return m_ContextId;
}
void CGXApplicationContextName::SetContextId(DLMS_APPLICATION_CONTEXT_NAME value)
{
    m_ContextId = value;
}

std::string CGXApplicationContextName::ToString()
{
    CGXByteBuffer bb;
    bb.AddString(m_LogicalName.c_str());
    bb.SetUInt8(' ');
    bb.AddIntAsString(m_JointIsoCtt);
    bb.SetUInt8(' ');
    bb.AddIntAsString(m_Country);
    bb.SetUInt8(' ');
    bb.AddIntAsString(m_CountryName);
    bb.SetUInt8(' ');
    bb.AddIntAsString(m_IdentifiedOrganization);
    bb.SetUInt8(' ');
    bb.AddIntAsString(m_DlmsUA);
    bb.SetUInt8(' ');
    bb.AddIntAsString(m_ApplicationContext);
    bb.SetUInt8(' ');
    bb.AddIntAsString(m_ContextId);
    return bb.ToString();
}
