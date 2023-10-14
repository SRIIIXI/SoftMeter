#include "GXDLMSObjectDefinition.h"
#include <sstream>
#include "GXDLMSConverter.h"

CGXDLMSObjectDefinition::CGXDLMSObjectDefinition()
{
    m_ObjectType = DLMS_OBJECT_TYPE_NONE;
}

/*
 * Constructor
 */
CGXDLMSObjectDefinition::CGXDLMSObjectDefinition(DLMS_OBJECT_TYPE classId, std::string logicalName)
{
    m_ObjectType = classId;
    m_LogicalName = logicalName;
}

std::string CGXDLMSObjectDefinition::ToString()
{
    std::stringstream sb;
    sb << CGXDLMSConverter::ToString(m_ObjectType);
    sb << " ";
    sb << m_LogicalName.c_str();
    return sb.str();
}

DLMS_OBJECT_TYPE CGXDLMSObjectDefinition::GetObjectType()
{
    return m_ObjectType;
}

void CGXDLMSObjectDefinition::SetObjectType(DLMS_OBJECT_TYPE value)
{
    m_ObjectType = value;
}

std::string CGXDLMSObjectDefinition::GetLogicalName()
{
    return m_LogicalName;
}
void CGXDLMSObjectDefinition::SetLogicalName(std::string value)
{
    m_LogicalName = value;
}
