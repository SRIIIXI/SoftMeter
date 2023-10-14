#include "GXDLMSSpecialDay.h"
#include <sstream>

int CGXDLMSSpecialDay::GetIndex()
{
    return m_Index;
}
void CGXDLMSSpecialDay::SetIndex(int value)
{
    m_Index = value;
}

CGXDate& CGXDLMSSpecialDay::GetDate()
{
    return m_Date;
}

void CGXDLMSSpecialDay::SetDate(CGXDate& value)
{
    m_Date = value;
}

void CGXDLMSSpecialDay::SetDate(CGXDateTime& value)
{
    m_Date = value;
}

int CGXDLMSSpecialDay::GetDayId()
{
    return m_DayId;
}
void CGXDLMSSpecialDay::SetDayId(int value)
{
    m_DayId = value;
}

std::string CGXDLMSSpecialDay::ToString()
{
    std::stringstream sb;
    sb << m_Index;
    sb << " ";
    sb << m_Date.ToString().c_str();
    sb << " ";
    sb << m_DayId;
    return sb.str();
}