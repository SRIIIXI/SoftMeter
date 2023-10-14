#include "GXDLMSDayProfile.h"
#include <sstream>

/**
 Constructor.
*/
CGXDLMSDayProfile::CGXDLMSDayProfile()
{
    m_DayId = 0;
}

/**
 Constructor.
*/
CGXDLMSDayProfile::CGXDLMSDayProfile(short dayId, std::vector<CGXDLMSDayProfileAction*>& schedules)
{
    SetDayId(dayId);
    SetDaySchedules(schedules);
}

CGXDLMSDayProfile::~CGXDLMSDayProfile()
{
    for (std::vector<CGXDLMSDayProfileAction*>::iterator it = m_DaySchedules.begin(); it != m_DaySchedules.end(); ++it)
    {
        delete *it;
    }
    m_DaySchedules.clear();
}

/**
 User defined identifier, identifying the currentday_profile.
*/
short CGXDLMSDayProfile::GetDayId()
{
    return m_DayId;
}
void CGXDLMSDayProfile::SetDayId(short value)
{
    m_DayId = value;
}

std::vector<CGXDLMSDayProfileAction*>& CGXDLMSDayProfile::GetDaySchedules()
{
    return m_DaySchedules;
}
void CGXDLMSDayProfile::SetDaySchedules(std::vector<CGXDLMSDayProfileAction*>& value)
{
    m_DaySchedules = value;
}

std::string CGXDLMSDayProfile::ToString()
{
    std::stringstream sb;
    sb << m_DayId;
    for (std::vector<CGXDLMSDayProfileAction*>::iterator it = m_DaySchedules.begin(); it != m_DaySchedules.end(); ++it)
    {
        sb << " ";
        sb << (*it)->ToString().c_str();
    }
    return sb.str();

}
