#ifndef GXDLMSPRIMENBOFDMPLCAPPLICATIONSIDENTIFICATION_H
#define GXDLMSPRIMENBOFDMPLCAPPLICATIONSIDENTIFICATION_H

#include "GXIgnore.h"

#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_APPLICATIONS_IDENTIFICATION
#include "GXDLMSObject.h"

/*
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSPrimeNbOfdmPlcApplicationsIdentification
*/
class CGXDLMSPrimeNbOfdmPlcApplicationsIdentification : public CGXDLMSObject
{
    /*
     * Textual description of the firmware version running on the device.
     */
    std::string m_FirmwareVersion;

    /*
     * Unique vendor identifier assigned by PRIME Alliance.
     */
    unsigned short m_VendorId;

    /*
     * Vendor assigned unique identifier for specific product.
     */
    unsigned short m_ProductId;
public:
    //Constructor.
    CGXDLMSPrimeNbOfdmPlcApplicationsIdentification();

    //SN Constructor.
    CGXDLMSPrimeNbOfdmPlcApplicationsIdentification(std::string ln, unsigned short sn);

    //LN Constructor.
    CGXDLMSPrimeNbOfdmPlcApplicationsIdentification(std::string ln);

    /*
    * Returns Textual description of the firmware version running on the
    *         device.
    */
    std::string& GetFirmwareVersion();

    /*
     * value: Textual description of the firmware version running on the device.
     */
    void SetFirmwareVersion(std::string& value);

    /*
     * Returns Unique vendor identifier assigned by PRIME Alliance.
     */
    unsigned short GetVendorId();

    /*
     * value: Unique vendor identifier assigned by PRIME Alliance.
     */
    void SetVendorId(unsigned short value);

    /*
     * Returns Vendor assigned unique identifier for specific product.
     */
    unsigned short GetProductId();

    /*
     * value: Vendor assigned unique identifier for specific product.
     */
    void SetProductId(unsigned short value);

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
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_APPLICATIONS_IDENTIFICATION
#endif //GXDLMSPRIMENBOFDMPLCAPPLICATIONSIDENTIFICATION_H