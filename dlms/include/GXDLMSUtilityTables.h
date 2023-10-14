#ifndef GXDLMSUtilityTables_H
#define GXDLMSUtilityTables_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_UTILITY_TABLES
#include "GXDLMSObject.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSUtilityTables
*/
class CGXDLMSUtilityTables : public CGXDLMSObject
{
    unsigned short m_TableId;
    CGXByteBuffer m_Buffer;
public:
    //Constructor.
    CGXDLMSUtilityTables();

    //SN Constructor.
    CGXDLMSUtilityTables(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSUtilityTables(std::string ln);

    // Get table id.
    unsigned short GetTableId();

    // Set table id.
    void SetTableId(unsigned short value);

    //Get byte buffer.
    CGXByteBuffer& GetBuffer();

    //Set byte buffer.
    void SetBuffer(CGXByteBuffer& value);

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
#endif //DLMS_IGNORE_UTILITY_TABLES
#endif //GXDLMSUtilityTables_H