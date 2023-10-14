#include "GXDLMSVariant.h"
#include "GXDLMSClient.h"
#include "GXDLMSDayProfileAction.h"
#include <sstream>

/**
 Constructor.
*/
CGXDLMSDayProfileAction::CGXDLMSDayProfileAction()
{
    m_ScriptSelector = 0;
}

/**
 Constructor.
*/
CGXDLMSDayProfileAction::CGXDLMSDayProfileAction(CGXTime& startTime, std::string scriptLogicalName, int scriptSelector)
{
    SetStartTime(startTime);
    SetScriptLogicalName(scriptLogicalName);
    SetScriptSelector(scriptSelector);
}

/**
 Defines the time when the script is to be executed.
*/
CGXTime& CGXDLMSDayProfileAction::GetStartTime()
{
    return m_StartTime;
}
void CGXDLMSDayProfileAction::SetStartTime(CGXTime& value)
{
    m_StartTime = value;
}

/**
 Defines the logical name of the "Script table" object;
*/
std::string& CGXDLMSDayProfileAction::GetScriptLogicalName()
{
    return m_ScriptLogicalName;
}
void CGXDLMSDayProfileAction::SetScriptLogicalName(std::string& value)
{
    m_ScriptLogicalName = value;
}

/**
 Defines the script_identifier of the script to be executed.
*/
int CGXDLMSDayProfileAction::GetScriptSelector()
{
    return m_ScriptSelector;
}
void CGXDLMSDayProfileAction::SetScriptSelector(int value)
{
    m_ScriptSelector = value;
}

std::string CGXDLMSDayProfileAction::ToString()
{
    std::stringstream sb;
    sb << m_StartTime.ToString().c_str();
    sb << " ";
    sb << m_ScriptLogicalName.c_str();
    return sb.str();

}
