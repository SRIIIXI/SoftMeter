#ifndef GXDLMSPPPSETUP_H
#define GXDLMSPPPSETUP_H


#include "GXIgnore.h"
#ifndef DLMS_IGNORE_PPP_SETUP

#include "GXDLMSPppSetupIPCPOption.h"
#include "GXDLMSPppSetupLcpOption.h"
/**
PPP Authentication Type
 */
enum PPP_AUTHENTICATION_TYPE
{
    /**
     No authentication.
    */
    PPP_AUTHENTICATION_TYPE_NONE = 0,
    /**
     PAP Login
    */
    PPP_AUTHENTICATION_TYPE_PAP = 1,
    /**
     CHAP-algorithm
    */
    PPP_AUTHENTICATION_TYPE_CHAP = 2
};

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSPppSetup
*/
class CGXDLMSPppSetup : public CGXDLMSObject
{
    std::vector<CGXDLMSPppSetupIPCPOption> m_IPCPOptions;
    std::string m_PHYReference;
    std::vector<CGXDLMSPppSetupLcpOption> m_LCPOptions;
    CGXByteBuffer m_UserName;
    CGXByteBuffer m_Password;
    PPP_AUTHENTICATION_TYPE m_Authentication;

public:
    //Constructor.
    CGXDLMSPppSetup();

    //SN Constructor.
    CGXDLMSPppSetup(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSPppSetup(std::string ln);

    PPP_AUTHENTICATION_TYPE GetAuthentication();
    void SetAuthentication(PPP_AUTHENTICATION_TYPE value);

#ifdef UNICODE
    //This fixes UNICODE for Windows.
    /**
    PPP authentication procedure user name.
    */
    CGXByteBuffer& GetUserNameW();
#endif
    /**
    PPP authentication procedure user name.
    */
    CGXByteBuffer& GetUserNamePPP();
    void SetUserNamePPP(CGXByteBuffer& value);

    /**
     PPP authentication procedure password.
    */
    CGXByteBuffer& GetPasswordPPP();
    void SetPasswordPPP(CGXByteBuffer value);

    std::string GetPHYReference();
    void SetPHYReference(std::string value);

    std::vector<CGXDLMSPppSetupLcpOption>& GetLCPOptions();
    std::vector<CGXDLMSPppSetupIPCPOption>& GetIPCPOptions();

    // Returns amount of attributes.
    int GetAttributeCount();
    // Returns amount of methods.
    int GetMethodCount();

    //Get attribute values of object.
    void GetValues(std::vector<std::string>& values);

    /////////////////////////////////////////////////////////////////////////
    // Returns collection of attributes to read.
    //
    // If attribute is static and already read or device is returned
    // HW error it is not returned.
    //
    // all: All items are returned even if they are read already.
    // attributes: Collection of attributes to read.
    void GetAttributeIndexToRead(bool all, std::vector<int>& attributes);

    int GetDataType(int index, DLMS_DATA_TYPE& type);

    // Returns value of given attribute.
    int GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);

    // Set value of given attribute.
    int SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
};
#endif //DLMS_IGNORE_PPP_SETUP
#endif //GXDLMSPPPSETUP_H
