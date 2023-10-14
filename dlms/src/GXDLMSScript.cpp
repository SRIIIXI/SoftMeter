#include "GXDLMSScript.h"

CGXDLMSScript::CGXDLMSScript()
{
}

CGXDLMSScript::~CGXDLMSScript()
{
    for (std::vector<CGXDLMSScriptAction*>::iterator it = m_Actions.begin(); it != m_Actions.end(); ++it)
    {
        delete *it;
    }
    m_Actions.clear();
}

int CGXDLMSScript::GetID()
{
    return m_ID;
}

void CGXDLMSScript::SetID(int value)
{
    m_ID = value;
}

std::vector<CGXDLMSScriptAction*>& CGXDLMSScript::GetActions()
{
    return m_Actions;
}