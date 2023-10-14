#ifndef GXDLMSOBJECTDEFINITION_H
#define GXDLMSOBJECTDEFINITION_H

#include <string>
#include "GXEnums.h"

class CGXDLMSObjectDefinition
{
private:
    DLMS_OBJECT_TYPE m_ObjectType;
    std::string m_LogicalName;

public:
    DLMS_OBJECT_TYPE GetObjectType();
    void SetObjectType(DLMS_OBJECT_TYPE value);

    std::string GetLogicalName();
    void SetLogicalName(std::string value);

    /*
     * Constructor
     */
    CGXDLMSObjectDefinition();

    /*
     * Constructor
     */
    CGXDLMSObjectDefinition(DLMS_OBJECT_TYPE classId, std::string logicalName);

    std::string ToString();
};
#endif //GXDLMSOBJECTDEFINITION_H
