#ifndef GXDLMSSECURESERVER_H
#define GXDLMSSECURESERVER_H

#include "GXDLMSServer.h"

class CGXDLMSSecureServer : public CGXDLMSServer
{
private:
    CGXCipher m_Cipher;
public:
    /////////////////////////////////////////////////////////////////////////////
    //Constructor
    /////////////////////////////////////////////////////////////////////////////
    CGXDLMSSecureServer(
        bool UseLogicalNameReferencing = true,
        DLMS_INTERFACE_TYPE intefaceType = DLMS_INTERFACE_TYPE_HDLC, const char* systemTitle = NULL);

#ifndef DLMS_IGNORE_ASSOCIATION_LOGICAL_NAME
    /**
    * Constructor.
    *
    * @param ln
    *           Logical name settings..
    * @param hdlc
    *            HDLC settings.
    */
    CGXDLMSSecureServer(
        CGXDLMSAssociationLogicalName* ln, CGXDLMSIecHdlcSetup* hdlc, const char* systemTitle);

    /**
    * Constructor.
    *
    * @param ln
    *           Logical name settings..
    * @param wrapper
    *            WRAPPER settings.
    */
    CGXDLMSSecureServer(
        CGXDLMSAssociationLogicalName* ln, CGXDLMSTcpUdpSetup* wrapper, const char* systemTitle);

#endif //DLMS_IGNORE_ASSOCIATION_LOGICAL_NAME
#ifndef DLMS_IGNORE_ASSOCIATION_SHORT_NAME
    /**
    * Constructor.
    *
    * @param sn
    *           Short name settings..
    * @param hdlc
    *            HDLC settings.
    */
    CGXDLMSSecureServer(
        CGXDLMSAssociationShortName* sn, CGXDLMSIecHdlcSetup* hdlc, const char* systemTitle);

    /**
    * Constructor.
    *
    * @param sn
    *           Short name settings..
    * @param wrapper
    *            WRAPPER settings.
    */
    CGXDLMSSecureServer(
        CGXDLMSAssociationShortName* sn, CGXDLMSTcpUdpSetup* wrapper, const char* systemTitle);

#endif //DLMS_IGNORE_ASSOCIATION_SHORT_NAME
    /////////////////////////////////////////////////////////////////////////////
    //Destructor.
    /////////////////////////////////////////////////////////////////////////////
    ~CGXDLMSSecureServer();

    /**
     * @return Ciphering settings.
     */
    CGXCipher* GetCiphering();


    /////////////////////////////////////////////////////////////////////////////
    // Returns Key Encrypting Key, also known as Master key.
    /////////////////////////////////////////////////////////////////////////////
    CGXByteBuffer& GetKek();

    /////////////////////////////////////////////////////////////////////////////
    // value: Key Encrypting Key, also known as Master key.
    /////////////////////////////////////////////////////////////////////////////
    int SetKek(CGXByteBuffer& value);
};
#endif //GXDLMSSECURESERVER_H
