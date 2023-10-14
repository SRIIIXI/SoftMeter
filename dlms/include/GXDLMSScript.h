#ifndef GXDLMSSCRIPT_H
#define GXDLMSSCRIPT_H

#include "GXDLMSScriptAction.h"

class CGXDLMSScript
{
    /**
     * Script identifier.
     */
    int m_ID;

    /**
     * Script actions.
     */
    std::vector<CGXDLMSScriptAction*> m_Actions;

public:
    /**
     * Constructor.
     */
    CGXDLMSScript();

    /**
    * Destructor.
    */
    ~CGXDLMSScript();

    /**
     * @return Script identifier.
     */
    int GetID();

    /**
     * @param value
     *            Script identifier.
     */
    void SetID(int value);

    /**
     * @return Script actions.
     */
    std::vector<CGXDLMSScriptAction*>& GetActions();
};
#endif //GXDLMSSCRIPT_H