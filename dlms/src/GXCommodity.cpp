#include <string.h>
#include "GXCommodity.h"
#include "GXHelpers.h"

CGXCommodity::CGXCommodity()
{
    m_Type = DLMS_OBJECT_TYPE_NONE;
    memset(m_LogicalName, 0, 6);
    m_Index = 0;
}

DLMS_OBJECT_TYPE CGXCommodity::GetType()
{
    return m_Type;
}

void CGXCommodity::SetType(DLMS_OBJECT_TYPE value)
{
    m_Type = value;
}

unsigned char* CGXCommodity::GetLogicalName()
{
    return m_LogicalName;
}

void CGXCommodity::SetLogicalName(unsigned char* value)
{
    memcpy(m_LogicalName, value, 6);
}

unsigned char CGXCommodity::GetIndex()
{
    return m_Index;
}

void CGXCommodity::SetIndex(unsigned char value)
{
    m_Index = value;
}

std::string CGXCommodity::ToString()
{
    std::string ln;
    std::string str = GXHelpers::IntToString(m_Type);
    str.append(" ");
    GXHelpers::GetLogicalName(m_LogicalName, ln);
    str.append(ln);
    str.append(" ");
    str = GXHelpers::IntToString(m_Index);
    return str;
}