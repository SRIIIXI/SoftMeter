#ifndef GXDLMSSPECIALDAYSTABLE_H
#define GXDLMSSPECIALDAYSTABLE_H

#include "GXIgnore.h"

#ifndef DLMS_IGNORE_SPECIAL_DAYS_TABLE
#include "GXDLMSObject.h"
#include "GXDLMSSpecialDay.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSSpecialDaysTable
*/
class CGXDLMSSpecialDaysTable : public CGXDLMSObject
{
    std::vector<CGXDLMSSpecialDay*> m_Entries;
public:
    //Constructor.
    CGXDLMSSpecialDaysTable();

    //SN Constructor.
    CGXDLMSSpecialDaysTable(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSSpecialDaysTable(std::string ln);

    ~CGXDLMSSpecialDaysTable();

    std::vector<CGXDLMSSpecialDay*>& GetEntries();

    // Returns amount of attributes.
    int GetAttributeCount();

    // Returns amount of methods.
    int GetMethodCount();

    //Get attribute values of object.
    void GetValues(std::vector<std::string>& values);

    // Inserts a new entry in the table.
    // If a special day with the same index or with the same date as an already
    // defined day is inserted, the old entry will be overwritten.
    int Insert(CGXDLMSClient* client, CGXDLMSSpecialDay* entry, std::vector<CGXByteBuffer>& reply);

    // Deletes an entry from the table.
    int Delete(CGXDLMSClient* client, CGXDLMSSpecialDay* entry, std::vector<CGXByteBuffer>& reply);


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
#endif //DLMS_IGNORE_SPECIAL_DAYS_TABLE
#endif //GXDLMSSPECIALDAYSTABLE_H