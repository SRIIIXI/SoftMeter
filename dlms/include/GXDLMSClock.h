#ifndef GXDLMSCLOCK_H
#define GXDLMSCLOCK_H

#include "GXIgnore.h"
#include "GXDLMSObject.h"

#ifndef DLMS_IGNORE_CLOCK
/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSClock
*/
class CGXDLMSClock : public CGXDLMSObject
{
    DLMS_CLOCK_BASE m_ClockBase;
    char m_Deviation;
    bool m_Enabled;
    CGXDateTime m_End;
    DLMS_CLOCK_STATUS m_Status;
    CGXDateTime m_Begin;
    short m_TimeZone;
    CGXDateTime m_Time;

public:
    /**
     Constructor.
    */
    CGXDLMSClock();

    /**
     Constructor.
     @param ln Logical Name of the object.
    */
    CGXDLMSClock(std::string ln);

    /**
     Constructor.
     @param ln Logical Name of the object.
     @param sn Short Name of the object.
    */
    CGXDLMSClock(std::string ln, unsigned short sn);

    /**
     Time of COSEM Clock object.
    */
    CGXDateTime& GetTime();

    void SetTime(CGXDateTime& value);

    /**
     TimeZone of COSEM Clock object.
    */
    short GetTimeZone();
    void SetTimeZone(short value);

    /**
     Status of COSEM Clock object.
    */
    DLMS_CLOCK_STATUS GetStatus();
    void SetStatus(DLMS_CLOCK_STATUS value);

    CGXDateTime& GetBegin();
    void SetBegin(CGXDateTime& value);

    CGXDateTime& GetEnd();
    void SetEnd(CGXDateTime& value);

    char GetDeviation();
    void SetDeviation(char value);

    bool GetEnabled();
    void SetEnabled(bool value);

    /**
     Clock base of COSEM Clock object.
    */
    DLMS_CLOCK_BASE GetClockBase();
    void SetClockBase(DLMS_CLOCK_BASE value);

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

    int GetUIDataType(int index, DLMS_DATA_TYPE& type);
    int GetDataType(int index, DLMS_DATA_TYPE& type);

    /*
     * Returns value of given attribute.
     */
    int GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);

    /*
     * Set value of given attribute.
     */
    int SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
};
#endif //DLMS_IGNORE_CLOCK
#endif //GXDLMSCLOCK_H
