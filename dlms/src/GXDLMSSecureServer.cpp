#include "GXDLMSSecureServer.h"

CGXDLMSSecureServer::CGXDLMSSecureServer(bool UseLogicalNameReferencing,
    DLMS_INTERFACE_TYPE intefaceType, const char* systemTitle) :
    CGXDLMSServer(
        UseLogicalNameReferencing,
        intefaceType), m_Cipher(systemTitle)
{
    m_Settings.SetCipher(&m_Cipher);
}

#ifndef DLMS_IGNORE_ASSOCIATION_LOGICAL_NAME
CGXDLMSSecureServer::CGXDLMSSecureServer(
    CGXDLMSAssociationLogicalName* ln,
    CGXDLMSIecHdlcSetup* hdlc, const char* systemTitle) :
    CGXDLMSServer(
        ln,
        hdlc), m_Cipher(systemTitle)
{
    m_Settings.SetCipher(&m_Cipher);
}

CGXDLMSSecureServer::CGXDLMSSecureServer(
    CGXDLMSAssociationLogicalName* ln,
    CGXDLMSTcpUdpSetup* wrapper, const char* systemTitle) :
    CGXDLMSServer(
        ln,
        wrapper), m_Cipher(systemTitle)
{
    m_Settings.SetCipher(&m_Cipher);
}
#endif //DLMS_IGNORE_ASSOCIATION_LOGICAL_NAME

#ifndef DLMS_IGNORE_ASSOCIATION_SHORT_NAME
CGXDLMSSecureServer::CGXDLMSSecureServer(
    CGXDLMSAssociationShortName* sn,
    CGXDLMSIecHdlcSetup* hdlc, const char* systemTitle) :
    CGXDLMSServer(
        sn,
        hdlc), m_Cipher(systemTitle)
{
    m_Settings.SetCipher(&m_Cipher);
}

CGXDLMSSecureServer::CGXDLMSSecureServer(
    CGXDLMSAssociationShortName* sn,
    CGXDLMSTcpUdpSetup* wrapper, const char* systemTitle) :
    CGXDLMSServer(
        sn,
        wrapper), m_Cipher(systemTitle)
{
    m_Settings.SetCipher(&m_Cipher);
}

#endif //DLMS_IGNORE_ASSOCIATION_SHORT_NAME

CGXDLMSSecureServer::~CGXDLMSSecureServer()
{
}

CGXCipher* CGXDLMSSecureServer::GetCiphering()
{
    return m_Settings.GetCipher();
}

CGXByteBuffer& CGXDLMSSecureServer::GetKek() {
    return GetSettings().GetKek();
}

int CGXDLMSSecureServer::SetKek(CGXByteBuffer& value) {
    GetSettings().SetKek(value);
    return 0;
}