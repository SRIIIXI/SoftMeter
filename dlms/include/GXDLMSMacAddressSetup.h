#ifndef GXDLMSMACADDRESSSETUP_H
#define GXDLMSMACADDRESSSETUP_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_MAC_ADDRESS_SETUP
#include "GXDLMSObject.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSMacAddressSetup
*/
class CGXDLMSMacAddressSetup : public CGXDLMSObject
{
    std::string m_MacAddress;
public:
    /**
     Constructor.
    */
    CGXDLMSMacAddressSetup();
    /**
     Constructor.

     @param ln Logical Name of the object.
    */
    CGXDLMSMacAddressSetup(std::string ln);

    /**
     Constructor.

     @param ln Logical Name of the object.
     @param sn Short Name of the object.
    */
    CGXDLMSMacAddressSetup(std::string ln, unsigned short sn);

    /**
     Value of COSEM Data object.
    */
    std::string GetMacAddress();
    void SetMacAddress(std::string value);

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
#endif //DLMS_IGNORE_MAC_ADDRESS_SETUP
#endif //GXDLMSMACADDRESSSETUP_H