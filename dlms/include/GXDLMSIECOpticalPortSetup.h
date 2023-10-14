#ifndef GXDLMSIECOPTICALPORTSETUP_H
#define GXDLMSIECOPTICALPORTSETUP_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_IEC_LOCAL_PORT_SETUP
#include "GXDLMSObject.h"

/**
Online help:
https://www.gurux.fi/Gurux.DLMS.Objects.CGXDLMSIECLocalPortSetup
*/
class CGXDLMSIECLocalPortSetup : public CGXDLMSObject
{
    std::string m_Password1;
    std::string m_Password2;
    std::string m_Password5;
    DLMS_OPTICAL_PROTOCOL_MODE m_DefaultMode;
    DLMS_BAUD_RATE m_DefaultBaudrate;
    DLMS_BAUD_RATE m_ProposedBaudrate;
    DLMS_LOCAL_PORT_RESPONSE_TIME m_ResponseTime;
    std::string m_DeviceAddress;

    void Init();

public:
    //Constructor.
    CGXDLMSIECLocalPortSetup();
    //SN Constructor.
    CGXDLMSIECLocalPortSetup(std::string ln, unsigned short sn);
    //LN Constructor.
    CGXDLMSIECLocalPortSetup(std::string ln);

    DLMS_OPTICAL_PROTOCOL_MODE GetDefaultMode();
    void SetDefaultMode(DLMS_OPTICAL_PROTOCOL_MODE value);

    DLMS_BAUD_RATE GetDefaultBaudrate();
    void SetDefaultBaudrate(DLMS_BAUD_RATE value);

    DLMS_BAUD_RATE GetProposedBaudrate();
    void SetProposedBaudrate(DLMS_BAUD_RATE value);

    DLMS_LOCAL_PORT_RESPONSE_TIME GetResponseTime();
    void SetResponseTime(DLMS_LOCAL_PORT_RESPONSE_TIME value);

    std::string GetDeviceAddress();
    void SetDeviceAddress(std::string value);

    std::string GetPassword1();
    void SetPassword1(std::string value);

    std::string GetPassword2();
    void SetPassword2(std::string value);

    std::string GetPassword5();
    void SetPassword5(std::string value);

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

// This class is Obsolete. Use CGXDLMSIECLocalPortSetup instead.
class CGXDLMSIECOpticalPortSetup : public CGXDLMSIECLocalPortSetup
{
};
#endif //DLMS_IGNORE_IEC_LOCAL_PORT_SETUP
#endif //GXDLMSIECOPTICALPORTSETUP_H