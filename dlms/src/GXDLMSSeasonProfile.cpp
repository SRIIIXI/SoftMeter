#include "GXDLMSSeasonProfile.h"
#include <sstream>

/**
 Constructor.
*/
CGXDLMSSeasonProfile::CGXDLMSSeasonProfile()
{

}

/**
 Constructor.
*/
CGXDLMSSeasonProfile::CGXDLMSSeasonProfile(std::string name, CGXDateTime& start, std::string weekName)
{
    m_Name.AddString(name);
    SetStart(start);
    m_WeekName.AddString(weekName);
}

/**
 Constructor.
*/
CGXDLMSSeasonProfile::CGXDLMSSeasonProfile(CGXByteBuffer& name, CGXDateTime& start, CGXByteBuffer weekName)
{
    m_Name.Set(&name);
    SetStart(start);
    m_WeekName.Set(&weekName);
}

/**
 Name of season profile.
*/
CGXByteBuffer& CGXDLMSSeasonProfile::GetName()
{
    return m_Name;
}
void CGXDLMSSeasonProfile::SetName(CGXByteBuffer& value)
{
    m_Name = value;
}

/**
 Season Profile start time.
*/
CGXDateTime& CGXDLMSSeasonProfile::GetStart()
{
    return m_Start;
}
void CGXDLMSSeasonProfile::SetStart(CGXDateTime value)
{
    m_Start = value;
}

/**
 Week name of season profile.
*/
CGXByteBuffer& CGXDLMSSeasonProfile::GetWeekName()
{
    return m_WeekName;
}
void CGXDLMSSeasonProfile::SetWeekName(CGXByteBuffer& value)
{
    m_WeekName = value;
}

std::string CGXDLMSSeasonProfile::ToString()
{
    std::stringstream sb;
    if (m_Name.IsAsciiString())
    {
        sb << m_Name.ToString();
    }
    else
    {
        sb << m_Name.ToHexString();
    }
    sb << " ";
    sb << m_Start.ToString().c_str();
    return sb.str();
}
