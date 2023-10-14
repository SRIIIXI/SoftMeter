#ifndef GXDLMSREGISTERACTIVATION_H
#define GXDLMSREGISTERACTIVATION_H

#include "IGXDLMSBase.h"

#ifndef DLMS_IGNORE_REGISTER_ACTIVATION
#include "GXIgnore.h"
#include "GXDLMSObject.h"
#include "GXHelpers.h"
#include "GXDLMSObjectDefinition.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSRegisterActivation
*/
class CGXDLMSRegisterActivation : public CGXDLMSObject
{
    std::vector<CGXDLMSObjectDefinition> m_RegisterAssignment;
    std::vector<std::pair<CGXByteBuffer, CGXByteBuffer > > m_MaskList;
    CGXByteBuffer m_ActiveMask;

public:
    //Constructor.
    CGXDLMSRegisterActivation();

    //SN Constructor.
    CGXDLMSRegisterActivation(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSRegisterActivation(std::string ln);

    std::vector<CGXDLMSObjectDefinition>& GetRegisterAssignment();

    std::vector<std::pair<CGXByteBuffer, CGXByteBuffer > >& GetMaskList();

    CGXByteBuffer& GetActiveMask();

    // Returns amount of attributes.
    int GetAttributeCount();

    // Returns amount of methods.
    int GetMethodCount();

    void GetValues(std::vector<std::string>& attributes);

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
#endif //DLMS_IGNORE_REGISTER_ACTIVATION
#endif //GXDLMSREGISTERACTIVATION_H