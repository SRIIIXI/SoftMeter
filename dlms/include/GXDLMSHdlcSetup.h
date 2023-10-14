#ifndef GXDLMSIECHDLCSETUP_H
#define GXDLMSIECHDLCSETUP_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_IEC_HDLC_SETUP
#include "GXDLMSObject.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSIecHdlcSetup
*/
class CGXDLMSIecHdlcSetup : public CGXDLMSObject
{
    int m_InactivityTimeout;
    int m_DeviceAddress;
    int m_MaximumInfoLengthTransmit;
    DLMS_BAUD_RATE m_CommunicationSpeed;
    int m_WindowSizeTransmit;
    int m_WindowSizeReceive;
    int m_InterCharachterTimeout;
    int m_MaximumInfoLengthReceive;

public:
    //Constructor.
    CGXDLMSIecHdlcSetup();

    //SN Constructor.
    CGXDLMSIecHdlcSetup(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSIecHdlcSetup(std::string ln);

    DLMS_BAUD_RATE GetCommunicationSpeed();

    void SetCommunicationSpeed(DLMS_BAUD_RATE value);

    int GetWindowSizeTransmit();
    void SetWindowSizeTransmit(int value);

    int GetWindowSizeReceive();
    void SetWindowSizeReceive(int value);
    int GetMaximumInfoLengthTransmit();
    void SetMaximumInfoLengthTransmit(int value);
    int GetMaximumInfoLengthReceive();
    void SetMaximumInfoLengthReceive(int value);

    int GetInterCharachterTimeout();
    void SetInterCharachterTimeout(int value);


    int GetInactivityTimeout();
    void SetInactivityTimeout(int value);

    int GetDeviceAddress();
    void SetDeviceAddress(int value);

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
#endif //DLMS_IGNORE_IEC_HDLC_SETUP
#endif //GXDLMSIECHDLCSETUP_H