#ifndef GXDLMSACTIONSCHEDULE_H
#define GXDLMSACTIONSCHEDULE_H

#include "GXIgnore.h"

#ifndef DLMS_IGNORE_ACTION_SCHEDULE
#include "GXDLMSObject.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSActionSchedule
*/
class CGXDLMSActionSchedule : public CGXDLMSObject
{
    std::string m_ExecutedScriptLogicalName;
    int m_ExecutedScriptSelector;
    DLMS_SINGLE_ACTION_SCHEDULE_TYPE m_Type;
    std::vector<CGXDateTime> m_ExecutionTime;

public:

    /**
     Constructor.
    */
    CGXDLMSActionSchedule();

    /**
     Constructor.

     @param ln Logical Name of the object.
    */
    CGXDLMSActionSchedule(std::string ln);

    /**
     Constructor.

     @param ln Logical Name of the object.
     @param sn Short Name of the object.
    */
    CGXDLMSActionSchedule(std::string ln, unsigned short sn);

    std::string& GetExecutedScriptLogicalName();
    void SetExecutedScriptLogicalName(std::string value);

    int GetExecutedScriptSelector();
    void SetExecutedScriptSelector(int value);

    DLMS_SINGLE_ACTION_SCHEDULE_TYPE GetType();
    void SetType(DLMS_SINGLE_ACTION_SCHEDULE_TYPE value);

    std::vector<CGXDateTime>& GetExecutionTime();
    void SetExecutionTime(std::vector<CGXDateTime>& value);

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
#endif //DLMS_IGNORE_ACTION_SCHEDULE
#endif //GXDLMSACTIONSCHEDULE_H