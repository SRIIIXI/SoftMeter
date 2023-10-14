#include "GXDLMSMonitoredValue.h"
#include "GXDLMSConverter.h"

CGXDLMSMonitoredValue::CGXDLMSMonitoredValue()
{
    m_ObjectType = DLMS_OBJECT_TYPE_NONE;
    m_AttributeIndex = 0;
}

void CGXDLMSMonitoredValue::Update(CGXDLMSObject* pObj, int attributeIndex)
{
    m_ObjectType = pObj->GetObjectType();
    pObj->GetLogicalName(m_LogicalName);
    m_AttributeIndex = attributeIndex;
}

DLMS_OBJECT_TYPE CGXDLMSMonitoredValue::GetObjectType()
{
    return m_ObjectType;
}
void CGXDLMSMonitoredValue::SetObjectType(DLMS_OBJECT_TYPE value)
{
    m_ObjectType = value;
}

std::string CGXDLMSMonitoredValue::GetLogicalName()
{
    return m_LogicalName;
}
void CGXDLMSMonitoredValue::SetLogicalName(std::string value)
{
    m_LogicalName = value;
}

int CGXDLMSMonitoredValue::GetAttributeIndex()
{
    return m_AttributeIndex;
}
void CGXDLMSMonitoredValue::SetAttributeIndex(int value)
{
    m_AttributeIndex = value;
}

std::string CGXDLMSMonitoredValue::ToString()
{
    if (m_ObjectType == DLMS_OBJECT_TYPE_NONE)
    {
        return "";
    }
    std::stringstream sb;
    sb << CGXDLMSConverter::ToString(m_ObjectType);
    sb << " ";
    sb << m_LogicalName.c_str();
    sb << " ";
    sb << m_AttributeIndex;
    return sb.str();

}