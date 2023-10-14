#ifndef GXDLMSMBUSMASTERPORTSETUP_H
#define GXDLMSMBUSMASTERPORTSETUP_H

#include "GXIgnore.h"

#ifndef DLMS_IGNORE_MBUS_MASTER_PORT_SETUP
#include "GXDLMSObject.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSMBusMasterPortSetup
*/
class CGXDLMSMBusMasterPortSetup : public CGXDLMSObject
{
    DLMS_BAUD_RATE m_CommSpeed;
public:
    //Constructor.
    CGXDLMSMBusMasterPortSetup();

    //SN Constructor.
    CGXDLMSMBusMasterPortSetup(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSMBusMasterPortSetup(std::string ln);

    // The communication speed supported by the port.
    DLMS_BAUD_RATE GetCommSpeed();
    void SetCommSpeed(DLMS_BAUD_RATE value);

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
#endif //DLMS_IGNORE_MBUS_MASTER_PORT_SETUP
#endif //GXDLMSMBUSMASTERPORTSETUP_H