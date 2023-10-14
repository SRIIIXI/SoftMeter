#include "GXDLMSCertificateInfo.h"

CGXDLMSCertificateInfo::CGXDLMSCertificateInfo()
{
    m_Entity = DLMS_CERTIFICATE_ENTITY_SERVER;
    m_Type = DLMS_CERTIFICATE_TYPE_DIGITAL_SIGNATURE;
}

DLMS_CERTIFICATE_ENTITY CGXDLMSCertificateInfo::GetEntity() {
    return m_Entity;
}

void CGXDLMSCertificateInfo::SetEntity(DLMS_CERTIFICATE_ENTITY value) {
    m_Entity = value;
}

DLMS_CERTIFICATE_TYPE CGXDLMSCertificateInfo::GetType() {
    return m_Type;
}

void CGXDLMSCertificateInfo::SetType(DLMS_CERTIFICATE_TYPE value) {
    m_Type = value;
}

std::string CGXDLMSCertificateInfo::GetSerialNumber() {
    return m_SerialNumber;
}

void CGXDLMSCertificateInfo::SetSerialNumber(std::string& value) {
    m_SerialNumber = value;
}

std::string CGXDLMSCertificateInfo::GetIssuer() {
    return m_Issuer;
}

void CGXDLMSCertificateInfo::SetIssuer(std::string& value) {
    m_Issuer = value;
}

std::string CGXDLMSCertificateInfo::GetSubject() {
    return m_Subject;
}

void CGXDLMSCertificateInfo::SetSubject(std::string& value) {
    m_Subject = value;
}

std::string CGXDLMSCertificateInfo::GetSubjectAltName() {
    return m_SubjectAltName;
}

void CGXDLMSCertificateInfo::SetSubjectAltName(std::string& value) {
    m_SubjectAltName = value;
}