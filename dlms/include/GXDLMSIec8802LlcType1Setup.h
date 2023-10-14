#ifndef GXDLMSIEC8802LLCTYPE1SETUP_H
#define GXDLMSIEC8802LLCTYPE1SETUP_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_IEC_8802_LLC_TYPE1_SETUP
#include "GXDLMSObject.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSIec8802LlcType1Setup
*/
class CGXDLMSIec8802LlcType1Setup : public CGXDLMSObject
{
    /**
    * Maximum number of octets in a UI PDU.
    */
    uint16_t m_MaximumOctetsUiPdu;

public:
    //Constructor.
    CGXDLMSIec8802LlcType1Setup();

    //SN Constructor.
    CGXDLMSIec8802LlcType1Setup(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSIec8802LlcType1Setup(std::string ln);

    /**
    * Maximum number of octets in a UI PDU.
    */
    uint16_t GetMaximumOctetsUiPdu();
    void SetMaximumOctetsUiPdu(uint16_t value);

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
#endif //DLMS_IGNORE_IEC_8802_LLC_TYPE1_SETUP
#endif //GXDLMSIEC8802LLCTYPE1SETUP_H