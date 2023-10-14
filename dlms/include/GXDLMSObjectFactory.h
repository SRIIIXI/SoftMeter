#ifndef GXDLMSOBJECTFACTORY_H
#define GXDLMSOBJECTFACTORY_H

#include "GXDLMSObject.h"

class CGXDLMSObjectFactory
{
public:
    static CGXDLMSObject* CreateObject(DLMS_OBJECT_TYPE type);
    static CGXDLMSObject* CreateObject(DLMS_OBJECT_TYPE type, std::string ln);
};
#endif //GXDLMSOBJECTFACTORY_H