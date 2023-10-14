#ifndef GXDLMSMONITOREDVALUE_H
#define GXDLMSMONITOREDVALUE_H

#include "GXIgnore.h"
#include "GXDLMSObject.h"

class CGXDLMSMonitoredValue
{
    DLMS_OBJECT_TYPE m_ObjectType;
    std::string m_LogicalName;
    int m_AttributeIndex;
public:

    CGXDLMSMonitoredValue();
    void Update(CGXDLMSObject* pObj, int attributeIndex);

    DLMS_OBJECT_TYPE GetObjectType();
    void SetObjectType(DLMS_OBJECT_TYPE value);

    std::string GetLogicalName();
    void SetLogicalName(std::string value);

    int GetAttributeIndex();
    void SetAttributeIndex(int value);

    std::string ToString();
};

#endif //GXDLMSMONITOREDVALUE_H