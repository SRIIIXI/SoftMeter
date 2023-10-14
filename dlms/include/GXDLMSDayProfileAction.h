#ifndef GXDLMSDAYPROFILEACTION_H
#define GXDLMSDAYPROFILEACTION_H

#include "GXTime.h"

//Activity Calendar's Day Profile Action is defined on the standard.
class CGXDLMSDayProfileAction
{
    CGXTime m_StartTime;
    std::string m_ScriptLogicalName;
    int m_ScriptSelector;
public:
    /**
     Constructor.
    */
    CGXDLMSDayProfileAction();

    /**
     Constructor.
    */
    CGXDLMSDayProfileAction(CGXTime& startTime, std::string scriptLogicalName, int scriptSelector);

    /**
     Defines the time when the script is to be executed.
    */
    CGXTime& GetStartTime();
    void SetStartTime(CGXTime& value);

    /**
     Defines the logical name of the "Script table" object;
    */
    std::string& GetScriptLogicalName();
    void SetScriptLogicalName(std::string& value);

    /**
     Defines the script_identifier of the script to be executed.
    */
    int GetScriptSelector();
    void SetScriptSelector(int value);

    std::string ToString();
};
#endif //GXDLMSDAYPROFILEACTION_H
