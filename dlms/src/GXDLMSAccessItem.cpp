#include "GXDLMSAccessItem.h"

CGXDLMSObject* CGXDLMSAccessItem::GetTarget()
{
    return m_Target;
}

void CGXDLMSAccessItem::SetTarget(CGXDLMSObject* value)
{
    m_Target = value;
}

DLMS_ACCESS_SERVICE_COMMAND_TYPE CGXDLMSAccessItem::GetCommand()
{
    return m_Command;
}

void CGXDLMSAccessItem::SetCommand(DLMS_ACCESS_SERVICE_COMMAND_TYPE value)
{
    m_Command = value;
}

unsigned char CGXDLMSAccessItem::GetIndex()
{
    return m_Index;
}

/**
 * value: Attribute index.
 */
void CGXDLMSAccessItem::SetIndex(unsigned char value)
{
    m_Index = value;
}

void CGXDLMSAccessItem::SetError(DLMS_ERROR_CODE value)
{
    m_Error = value;
}

DLMS_ERROR_CODE CGXDLMSAccessItem::GetError()
{
    return m_Error;
}

void CGXDLMSAccessItem::SetValue(CGXDLMSVariant& value)
{
    m_Value = value;
}

CGXDLMSVariant& CGXDLMSAccessItem::GetValue()
{
    return m_Value;
}

CGXDLMSAccessItem::CGXDLMSAccessItem()
{
    m_Error = DLMS_ERROR_CODE_OK;
}

CGXDLMSAccessItem::CGXDLMSAccessItem(DLMS_ACCESS_SERVICE_COMMAND_TYPE command,
    CGXDLMSObject* target,
    unsigned char attributeIndex)
{
    m_Error = DLMS_ERROR_CODE_OK;
    m_Command = command;
    m_Target = target;
    m_Index = attributeIndex;
}