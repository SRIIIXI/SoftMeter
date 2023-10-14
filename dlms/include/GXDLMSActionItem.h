#ifndef GXDLMSACTIONITEM_H
#define GXDLMSACTIONITEM_H

#include <string>
#include "GXEnums.h"

class CGXDLMSActionItem
{
    friend class CGXDLMSActionSet;
    std::string m_LogicalName;
    int m_ScriptSelector;
public:
    //Constructor.
    CGXDLMSActionItem();

    //Destructor.
    ~CGXDLMSActionItem()
    {
        m_LogicalName.clear();
    }
    std::string& GetLogicalName();

    void SetLogicalName(std::string& value);

    int GetScriptSelector();

    void SetScriptSelector(int value);

    std::string ToString();
};
#endif //GXDLMSACTIONITEM_H
