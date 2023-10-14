#include <sstream>
#include "GXDLMSActionItem.h"

//Constructor.
CGXDLMSActionItem::CGXDLMSActionItem()
{
    m_ScriptSelector = 0;
}

std::string& CGXDLMSActionItem::GetLogicalName()
{
    return m_LogicalName;
}
void CGXDLMSActionItem::SetLogicalName(std::string& value)
{
    m_LogicalName = value;
}

int CGXDLMSActionItem::GetScriptSelector()
{
    return m_ScriptSelector;
}
void CGXDLMSActionItem::SetScriptSelector(int value)
{
    m_ScriptSelector = value;
}

std::string CGXDLMSActionItem::ToString()
{
    std::stringstream sb;
    sb << m_LogicalName.c_str();
    sb << " ";
    sb << m_ScriptSelector;
    return sb.str();
}