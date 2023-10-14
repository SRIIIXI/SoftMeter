#include "GXDLMSScriptAction.h"
#include <sstream>

/**
 Defines which action to be applied to the referenced object.
*/
SCRIPT_ACTION_TYPE CGXDLMSScriptAction::GetType()
{
    return m_Type;
}
void CGXDLMSScriptAction::SetType(SCRIPT_ACTION_TYPE value)
{
    m_Type = value;
}

/**
 Executed object type.
*/
DLMS_OBJECT_TYPE CGXDLMSScriptAction::GetObjectType()
{
    return m_ObjectType;
}
void CGXDLMSScriptAction::SetObjectType(DLMS_OBJECT_TYPE value)
{
    m_ObjectType = value;
}

/**
 Logical name of executed object.
*/
std::string CGXDLMSScriptAction::GetLogicalName()
{
    return m_LogicalName;
}
void CGXDLMSScriptAction::SetLogicalName(std::string value)
{
    m_LogicalName = value;
}

/**
 defines which attribute of the selected object is affected; or
 * which specific method is to be executed.
*/
int CGXDLMSScriptAction::GetIndex()
{
    return m_Index;
}
void CGXDLMSScriptAction::SetIndex(int value)
{
    m_Index = value;
}

/**
 Parameter is service spesific.
*/
CGXDLMSVariant CGXDLMSScriptAction::GetParameter()
{
    return m_Parameter;
}
void CGXDLMSScriptAction::SetParameter(CGXDLMSVariant value)
{
    m_Parameter = value;
}

std::string CGXDLMSScriptAction::ToString()
{
    std::stringstream sb;
    sb << m_Type;
    sb << " ";
    sb << m_ObjectType;
    sb << " ";
    sb << m_LogicalName.c_str();
    sb << " ";
    sb << m_Index;
    sb << " ";
    sb << m_Parameter.ToString().c_str();
    return sb.str();
}