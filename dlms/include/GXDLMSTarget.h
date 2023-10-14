#ifndef GXDLMSTARGET_H
#define GXDLMSTARGET_H

#include "GXDLMSObject.h"

/**
*/
class CGXDLMSTarget
{
    friend class CGXDLMSParameterMonitor;
    /**
   * Target COSEM object.
   */
    CGXDLMSObject* m_Target;

    /**
     * Attribute Index of COSEM object.
     */
    unsigned char m_AttributeIndex;

    /**
     * Data index of COSEM object. All targets don't use this.
     */
    unsigned char m_DataIndex;

    /**
     * Data value of COSEM object. All targets don't use this.
     */
    CGXDLMSVariant m_Value;
public:
    // Constructor.
    CGXDLMSTarget();

    // Destructor.
    ~CGXDLMSTarget();

    void Clear();

    CGXDLMSObject* GetTarget();

    void SetTarget(CGXDLMSObject* value);

    /**
     * @return Attribute Index of COSEM object.
     */
    unsigned char GetAttributeIndex();

    /**
     * @param value
     *            Attribute Index of COSEM object.
     */
    void SetAttributeIndex(unsigned char value);

    /**
     * @return Data index of COSEM object. All targets don't use this.
     */
    unsigned char GetDataIndex();

    /**
     * @param value
     *            Data index of COSEM object. All targets don't use this.
     */
    void SetDataIndex(unsigned char value);

    /**
     * @return Data value of COSEM object. All targets don't use this.
     */
    CGXDLMSVariant& GetValue();

    /**
     * @param value
     *            Data value of COSEM object. All targets don't use this.
     */
    void SetValue(CGXDLMSVariant& value);

    std::string ToString();
};
#endif //GXDLMSTARGET_H