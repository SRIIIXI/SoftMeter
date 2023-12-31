#ifndef GXDLMSDATA_H
#define GXDLMSDATA_H

#include "GXIgnore.h"
#include "GXDLMSObject.h"
#ifndef DLMS_IGNORE_DATA

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSData
*/
class CGXDLMSData : public CGXDLMSObject
{
    CGXDLMSVariant m_Value;
public:
    //Constructor.
    CGXDLMSData();

    //SN Constructor.
    CGXDLMSData(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSData(std::string ln);

    // Get value of COSEM Data object.
    CGXDLMSVariant& GetValue();

    // Set value of COSEM Data object.
    void SetValue(CGXDLMSVariant& value);

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
#endif //DLMS_IGNORE_DATA
#endif //GXDLMSDATA_H