#ifndef GXDLMSSCHEDULE_H
#define GXDLMSSCHEDULE_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_SCHEDULE
#include "GXDLMSObject.h"
#include "GXDLMSScheduleEntry.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSSchedule
*/
class CGXDLMSSchedule : public CGXDLMSObject
{
    std::vector<CGXDLMSScheduleEntry*> m_Entries;
    int RemoveEntry(unsigned short index);
    int Invoke(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
public:
    //Constructor.
    CGXDLMSSchedule();

    //SN Constructor.
    CGXDLMSSchedule(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSSchedule(std::string ln);

    //Destructor.
    ~CGXDLMSSchedule();

    //
    // Add entry to entries list.
    //
    // client: DLMS client.
    // entry: Schedule entry.
    // reply: Action bytes.
    int Insert(CGXDLMSClient* client, CGXDLMSScheduleEntry* entry, std::vector<CGXByteBuffer>& reply);

    //
    // Remove entry from entries list.
    //
    // client: DLMS client.
    // entry: Schedule entry.
    // reply: Action bytes.
    int Delete(CGXDLMSClient* client, CGXDLMSScheduleEntry* entry, std::vector<CGXByteBuffer>& reply);

    //
    // Enable entry from entries list.
    //
    // client: DLMS client.
    // entry: Schedule entry.
    // reply: Action bytes.
    int Enable(CGXDLMSClient* client, CGXDLMSScheduleEntry* entry, std::vector<CGXByteBuffer>& reply);

    //
    // Disable entry from entries list.
    //
    // client: DLMS client.
    // entry: Schedule entries.
    // reply: Action bytes.
    int Disable(CGXDLMSClient* client, CGXDLMSScheduleEntry* entry, std::vector<CGXByteBuffer>& reply);

    // Get value of COSEM Data object.
    std::vector<CGXDLMSScheduleEntry*>& GetEntries();

    // Set value of COSEM Data object.
    void SetEntries(std::vector<CGXDLMSScheduleEntry*>& value);

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
#endif //DLMS_IGNORE_SCHEDULE
#endif //GXDLMSSCHEDULE_H