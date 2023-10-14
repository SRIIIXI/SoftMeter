#ifndef GXMBUSCLIENTDATA_H
#define GXMBUSCLIENTDATA_H

#include "GXByteBuffer.h"
#include "GXDLMSVariant.h"

/**
*  M-Bus data definition element.
*/
class CGXMBusClientData
{
    /**
      * Data information block.
      */
    CGXByteBuffer m_DataInformation;
    /**
     * Value information block.
     */
    CGXByteBuffer m_ValueInformation;

    /**
     * Data.
     */
    CGXDLMSVariant m_Data;
public:
    /**
     * Returns Data information block.
     */
    CGXByteBuffer& GetDataInformation()
    {
        return m_DataInformation;
    }

    /**
     * @param value
     *            Data information block.
     */
    void SetDataInformation(CGXByteBuffer& value)
    {
        m_DataInformation = value;
    }

    /**
     * Returns Value information block.
     */
    CGXByteBuffer& GetValueInformation()
    {
        return m_ValueInformation;
    }

    /**
     * @param value
     *            Value information block.
     */
    void SetValueInformation(CGXByteBuffer& value)
    {
        m_ValueInformation = value;
    }

    /**
     * Returns Data.
     */
    CGXDLMSVariant& GetData()
    {
        return m_Data;
    }

    /**
     * @param value
     *            Data.
     */
    void SetData(CGXDLMSVariant& value)
    {
        m_Data = value;
    }
};
#endif //GXMBUSCLIENTDATA_H
