#ifndef IGXDLMSBASE_H
#define IGXDLMSBASE_H

#include "GXDLMSVariant.h"
#include "GXDLMSValueEventArg.h"

class CGXDLMSSettings;

struct IGXDLMSBase
{
public:
    // Returns amount of attributes.
    virtual int GetAttributeCount() = 0;

    // Returns amount of methods.
    virtual int GetMethodCount() = 0;

    // Returns value of given attribute.
    virtual int GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e) = 0;

    // Set value of given attribute.
    virtual int SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e) = 0;

    // Invokes method.
    virtual int Invoke(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e) = 0;

//	virtual DLMS_DATA_TYPE GetUIDataType(int index) = 0;
};
#endif //IGXDLMSBASE_H