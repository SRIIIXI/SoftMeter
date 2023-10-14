#include "GXDLMSPushObject.h"
#include <sstream>

DLMS_OBJECT_TYPE CGXDLMSPushObject::GetType()
{
    return m_Type;
}
void CGXDLMSPushObject::SetType(DLMS_OBJECT_TYPE value)
{
    m_Type = value;
}

std::string CGXDLMSPushObject::GetLogicalName()
{
    return m_LogicalName;
}
void CGXDLMSPushObject::SetLogicalName(std::string value)
{
    m_LogicalName = value;
}


int CGXDLMSPushObject::GetAttributeIndex()
{
    return m_AttributeIndex;
}
void CGXDLMSPushObject::SetAttributeIndex(int value)
{
    m_AttributeIndex = value;
}

int CGXDLMSPushObject::GetDataIndex()
{
    return m_DataIndex;
}
void CGXDLMSPushObject::SetDataIndex(int value)
{
    m_DataIndex = value;
}

std::string CGXDLMSPushObject::ToString()
{
    std::stringstream sb;
    sb << m_Type;
    sb << " ";
    sb << m_LogicalName.c_str();
    sb << " ";
    sb << m_AttributeIndex;
    sb << " ";
    sb << m_DataIndex;
    return sb.str();
}