#ifndef GXDLMSACTIONSET_H
#define GXDLMSACTIONSET_H

#include "GXDLMSActionItem.h"

class CGXDLMSActionSet
{
    CGXDLMSActionItem m_ActionUp;
    CGXDLMSActionItem m_ActionDown;
public:
    /**
     Constructor.
    */
    CGXDLMSActionSet();

    /**
     Destructor.
    */
    ~CGXDLMSActionSet()
    {
    }

    CGXDLMSActionItem& GetActionUp();

    CGXDLMSActionItem& GetActionDown();

    std::string ToString();
};

#endif //GXDLMSACTIONSET_H