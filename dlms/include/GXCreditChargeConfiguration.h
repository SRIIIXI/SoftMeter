#ifndef GXCREDIT_CHARGE_CONFIGURATION_H
#define GXCREDIT_CHARGE_CONFIGURATION_H

#include "GXEnums.h"
#include <string>

/**
*
*/
class CGXCreditChargeConfiguration
{
    /**
* Credit reference.<br>
* Online help:<br>
* http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
*/
    std::string m_CreditReference;

    /**
     * Charge reference.<br>
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     */
    std::string m_ChargeReference;

    /**
     * Collection configuration.<br>
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     */
    DLMS_CREDIT_COLLECTION_CONFIGURATION m_CollectionConfiguration;
public:

    // Constructor.
    CGXCreditChargeConfiguration();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     *
     * @return Credit reference.
     */
    std::string& GetCreditReference();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     *
     * @param value
     *            Credit reference.
     */
    void SetCreditReference(std::string& value);

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     *
     * @return Charge reference.
     */
    std::string& GetChargeReference();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     *
     * @param value
     *            Charge reference.
     */
    void SetChargeReference(std::string& value);

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     *
     * @return Collection configuration.
     */
    DLMS_CREDIT_COLLECTION_CONFIGURATION GetCollectionConfiguration();

    /**
     * Online help:<br>
     * http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAccount
     *
     * @param value
     *            Collection configuration.
     */
    void SetCollectionConfiguration(DLMS_CREDIT_COLLECTION_CONFIGURATION value);

    std::string ToString();
};
#endif //GXCREDIT_CHARGE_CONFIGURATION_H
