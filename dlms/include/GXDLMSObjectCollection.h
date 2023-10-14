#ifndef GXDLMSOBJECTCOLLECTION_H
#define GXDLMSOBJECTCOLLECTION_H

#include <vector>
#include "GXDLMSObject.h"
#include "GXXmlWriterSettings.h"

class CGXDLMSObjectCollection : public std::vector<CGXDLMSObject*>
{
public:
    ~CGXDLMSObjectCollection();

    CGXDLMSObject* FindByLN(DLMS_OBJECT_TYPE type, std::string& ln);

    CGXDLMSObject* FindByLN(DLMS_OBJECT_TYPE type, unsigned char ln[6]);

    CGXDLMSObject* FindBySN(unsigned short sn);

    void GetObjects(DLMS_OBJECT_TYPE type, CGXDLMSObjectCollection& items);

    void push_back(
        CGXDLMSObject* item);

    void Free();

    std::string ToString();

    /**
    * Save COSEM objects to the file.
    *
    * fileName: File name.
    */
    int Save(
        const char* fileName);

    /**
    * Save COSEM objects to the file.
    *
    * fileName: File name.
    * settings: XML write settings.
    */
    int Save(
        const char* fileName,
        CGXXmlWriterSettings& settings);

    /**
    * Load COSEM objects from the file.
    *
    * fileName XML file name.
    */
    int Load(
        const char* fileName);
};

#endif //GXDLMSOBJECTCOLLECTION_H
