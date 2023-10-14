#ifndef GXDLMSSCRIPTTABLE_H
#define GXDLMSSCRIPTTABLE_H

#include "GXIgnore.h"

#ifndef DLMS_IGNORE_SCRIPT_TABLE
#include "GXDLMSObject.h"
#include "GXDLMSScript.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSScriptTable
*/
class CGXDLMSScriptTable : public CGXDLMSObject
{
    std::vector<CGXDLMSScript*> m_Scripts;

public:
    //Constructor.
    CGXDLMSScriptTable();

    //SN Constructor.
    CGXDLMSScriptTable(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSScriptTable(std::string ln);

    //Destructor.
    ~CGXDLMSScriptTable();

    std::vector<CGXDLMSScript*>& GetScripts();

    //Executes selected script.
    int Execute(CGXDLMSClient* client, CGXDLMSScript* script, std::vector<CGXByteBuffer>& reply);

    //Executes selected script by ID.
    int Execute(CGXDLMSClient* client, unsigned short scriptId, std::vector<CGXByteBuffer>& reply);

    // Returns amount of attributes.
    int GetAttributeCount();

    // Returns amount of methods.
    int GetMethodCount();

    //Get attribute values of object.
    void GetValues(std::vector<std::string>& values);

    /////////////////////////////////////////////////////////////////////////
    // Returns collection of attributes to read.
    //
    // If attribute is static and already read or device is returned
    // HW error it is not returned.
    //
    // all: All items are returned even if they are read already.
    // attributes: Collection of attributes to read.
    void GetAttributeIndexToRead(bool all, std::vector<int>& attributes);

    int GetDataType(int index, DLMS_DATA_TYPE& type);

    // Returns value of given attribute.
    int GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);

    // Set value of given attribute.
    int SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
};
#endif //DLMS_IGNORE_SCRIPT_TABLE
#endif //GXDLMSSCRIPTTABLE_H