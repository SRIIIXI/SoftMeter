#ifndef GXDLMSCAPTUREOBJECT_H
#define GXDLMSCAPTUREOBJECT_H

class CGXDLMSCaptureObject
{
private:
    int m_AttributeIndex;
    int m_DataIndex;

public:
    /*
     * Constructor.
     */
    CGXDLMSCaptureObject();
    /*
     * Constructor.
     */
    CGXDLMSCaptureObject(int attributeIndex, int dataIndex);

    /**
     Index of DLMS object in the profile generic table
    */
    int GetAttributeIndex();
    void SetAttributeIndex(int value);

    /**
     Data index of DLMS object in the profile generic table.
    */
    int GetDataIndex();
    void SetDataIndex(int value);
};
#endif //GXDLMSCAPTUREOBJECT_H