#include "GXDLMSTarget.h"

CGXDLMSTarget::CGXDLMSTarget() : m_Target(NULL), m_AttributeIndex(0), m_DataIndex(0)
{
};

CGXDLMSTarget::~CGXDLMSTarget()
{
    Clear();
};

void CGXDLMSTarget::Clear()
{
    m_Target = NULL;
    m_AttributeIndex = 0;
    m_DataIndex = 0;
}

CGXDLMSObject* CGXDLMSTarget::GetTarget()
{
    return m_Target;
}

void CGXDLMSTarget::SetTarget(CGXDLMSObject* value)
{
    m_Target = value;
}

unsigned char CGXDLMSTarget::GetAttributeIndex()
{
    return m_AttributeIndex;
}

void CGXDLMSTarget::SetAttributeIndex(unsigned char value)
{
    m_AttributeIndex = value;
}

unsigned char CGXDLMSTarget::GetDataIndex()
{
    return m_DataIndex;
}

void CGXDLMSTarget::SetDataIndex(unsigned char value)
{
    m_DataIndex = value;
}

CGXDLMSVariant& CGXDLMSTarget::GetValue() {
    return m_Value;
}

void CGXDLMSTarget::SetValue(CGXDLMSVariant& value) {
    m_Value = value;
}

std::string CGXDLMSTarget::ToString()
{
    if (m_Target == NULL)
    {
        return "";
    }
    std::string ln;
    std::string str = GXHelpers::IntToString(m_Target->GetObjectType());
    str.append(" ");
    m_Target->GetLogicalName(ln);
    str.append(ln);
    str.append(" ");
    str.append(GXHelpers::IntToString(m_AttributeIndex));
    str.append(" ");
    str.append(GXHelpers::IntToString(m_DataIndex));
    str.append(" ");
    str.append(m_Value.ToString());
    return str;
}