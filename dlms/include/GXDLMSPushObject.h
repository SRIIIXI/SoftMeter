#ifndef GXDLMSPUSHOBJECT_H
#define GXDLMSPUSHOBJECT_H

#include <string>
#include "GXEnums.h"

class CGXDLMSPushObject
{
private:
    DLMS_OBJECT_TYPE m_Type;
    std::string m_LogicalName;
    int m_AttributeIndex;
    int m_DataIndex;

public:
    DLMS_OBJECT_TYPE GetType();
    void SetType(DLMS_OBJECT_TYPE value);

    std::string GetLogicalName();
    void SetLogicalName(std::string value);

    int GetAttributeIndex();
    void SetAttributeIndex(int value);

    int GetDataIndex();
    void SetDataIndex(int value);

    std::string ToString();
};
#endif //GXDLMSPUSHOBJECT_H
