#ifndef GXDLMSPRIMENBOFDMPLCMACNETWORKADMINISTRATIONDATA_H
#define GXDLMSPRIMENBOFDMPLCMACNETWORKADMINISTRATIONDATA_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_NETWORK_ADMINISTRATION_DATA
#include "GXDLMSObject.h"
#include "GXMacMulticastEntry.h"
#include "GXMacDirectTable.h"
#include "GXMacAvailableSwitch.h"
#include "GXMacPhyCommunication.h"

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSPrimeNbOfdmPlcMacNetworkAdministrationData
*/
class CGXDLMSPrimeNbOfdmPlcMacNetworkAdministrationData : public CGXDLMSObject
{
    /**
     * List of entries in multicast switching table.
     */
    std::vector<CGXMacMulticastEntry*> m_MulticastEntries;
    /**
     * Switch table.
     */
    std::vector<short> m_SwitchTable;

    /**
     * List of entries in multicast switching table.
     */
    std::vector<CGXMacDirectTable*> m_DirectTable;
    /**
     * List of available switches.
     */
    std::vector<CGXMacAvailableSwitch*> m_AvailableSwitches;
    /**
     * List of PHY communication parameters.
     */
    std::vector<CGXMacPhyCommunication*> m_Communications;

    int Invoke(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);

    int GetMulticastEntries(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
    int GetSwitchTable(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
    int GetDirectTable(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
    int GetAvailableSwitches(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
    int GetCommunications(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);


    int SetMulticastEntry(std::vector<CGXDLMSVariant>& list);
    int SetSwitchTable(std::vector<CGXDLMSVariant>& list);
    int SetDirectTable(std::vector<CGXDLMSVariant>& list);
    int SetAvailableSwitches(std::vector<CGXDLMSVariant>& list);
    int SetCommunications(std::vector<CGXDLMSVariant>& list);
public:
    //Constructor.
    CGXDLMSPrimeNbOfdmPlcMacNetworkAdministrationData();

    //SN Constructor.
    CGXDLMSPrimeNbOfdmPlcMacNetworkAdministrationData(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSPrimeNbOfdmPlcMacNetworkAdministrationData(std::string ln);

    //Destructor.
    ~CGXDLMSPrimeNbOfdmPlcMacNetworkAdministrationData();

    /**
    * Returns List of entries in multicast switching table.
    */
    std::vector<CGXMacMulticastEntry*>& GetMulticastEntries();

    /**
     * Returns Switch table.
     */
    std::vector<short>& GetSwitchTable();

    /**
     * Returns List of entries in multicast switching table.
     */
    std::vector<CGXMacDirectTable*>& GetDirectTable();


    /**
     * Returns List of available switches.
     */
    std::vector<CGXMacAvailableSwitch*>& GetAvailableSwitches();

    /**
     * Returns List of PHY communication parameters.
     */
    std::vector<CGXMacPhyCommunication*>& GetCommunications();

    int Reset(CGXDLMSClient* client, std::vector<CGXByteBuffer>& reply);

    void ClearMulticastEntry();

    void ClearDirectTable();

    void ClearAvailableSwitches();

    void ClearCommunications();

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
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_NETWORK_ADMINISTRATION_DATA
#endif //GXDLMSPRIMENBOFDMPLCMACNETWORKADMINISTRATIONDATA_H