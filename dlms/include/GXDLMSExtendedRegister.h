#ifndef GXDLMSEXTENDEDREGISTER_H
#define GXDLMSEXTENDEDREGISTER_H

#include <math.h>
#include "GXDLMSRegister.h"
#ifndef DLMS_IGNORE_EXTENDED_REGISTER

class CGXDLMSExtendedRegister : public CGXDLMSRegister
{
private:
    CGXDateTime m_CaptureTime;
    CGXDLMSVariant m_Status;

protected:
    bool IsRead(int index);
public:
    //Constructor.
    CGXDLMSExtendedRegister(void);

    //SN Constructor.
    CGXDLMSExtendedRegister(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSExtendedRegister(std::string ln);

    // Get value of COSEM Data object.
    CGXDLMSVariant& GetValue();

    // Set value of COSEM Data object.
    void SetValue(CGXDLMSVariant& value);

    /**
     Status of COSEM Extended Register object.
    */
    CGXDLMSVariant& GetStatus();

    void SetStatus(CGXDLMSVariant& value);

    /**
     Capture time of COSEM Extended Register object.
    */
    CGXDateTime& GetCaptureTime();

    void SetCaptureTime(CGXDateTime& value);

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

    int Invoke(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);

    int GetDataType(int index, DLMS_DATA_TYPE& type);

    int GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);

    int SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);

    int GetUIDataType(int index, DLMS_DATA_TYPE& type);
};
#endif //DLMS_IGNORE_EXTENDED_REGISTER
#endif //GXDLMSEXTENDEDREGISTER_H