#ifndef GXDLMSLLCSSCSSETUP_H
#define GXDLMSLLCSSCSSETUP_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_LLC_SSCS_SETUP
#include "GXDLMSObject.h"

/*
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSLlcSscsSetup
*/
class CGXDLMSLlcSscsSetup : public CGXDLMSObject
{
    unsigned short m_ServiceNodeAddress;
    unsigned short m_BaseNodeAddress;
    int Invoke(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
public:
    //Constructor.
    CGXDLMSLlcSscsSetup();

    //SN Constructor.
    CGXDLMSLlcSscsSetup(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSLlcSscsSetup(std::string ln);

    /*
    * Returns address assigned to the service node during its registration by
    *         the base node.
    */
    unsigned short GetServiceNodeAddress();

    /*
    * value: Address assigned to the service node during its registration
    *            by the base node.
    */
    void SetServiceNodeAddress(unsigned short value);


    /*
    * Returns base node address to which the service node is registered.
    */
    unsigned short GetBaseNodeAddress();

    /*
    * value: Base node address to which the service node is registered.
    */
    void SetBaseNodeAddress(unsigned short value);

    //Reset the values.
    int Reset(CGXDLMSClient* client, std::vector<CGXByteBuffer>& reply);

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
#endif //DLMS_IGNORE_LLC_SSCS_SETUP
#endif //GXDLMSLLCSSCSSETUP_H