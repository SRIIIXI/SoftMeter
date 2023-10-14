#ifndef GXDLMSVALUEEVENT_COLLECTION_H
#define GXDLMSVALUEEVENT_COLLECTION_H

#include "GXDLMSValueEventArg.h"


class CGXDLMSValueEventCollection : public std::vector<CGXDLMSValueEventArg*>
{
public:
    /**
    * Destructor.
    */
    ~CGXDLMSValueEventCollection()
    {
        for(std::vector<CGXDLMSValueEventArg*>::iterator it = begin(); it != end(); ++it)
        {
            delete *it;
        }
        clear();
    }
};
#endif //GXDLMSVALUEEVENT_COLLECTION_H
