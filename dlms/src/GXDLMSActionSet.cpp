#include "GXDLMSActionSet.h"
#include <sstream>

CGXDLMSActionSet::CGXDLMSActionSet()
{
}

CGXDLMSActionItem& CGXDLMSActionSet::GetActionUp()
{
    return m_ActionUp;
}

CGXDLMSActionItem& CGXDLMSActionSet::GetActionDown()
{
    return m_ActionDown;
}

std::string CGXDLMSActionSet::ToString()
{
    std::stringstream sb;
    sb << m_ActionUp.ToString().c_str();
    sb << " ";
    sb << m_ActionDown.ToString().c_str();
    return sb.str();
}