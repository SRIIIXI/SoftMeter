#include "GXDLMSVariant.h"
#include "GXDLMSClient.h"
#include "GXDLMSCaptureObject.h"

// Constructor.
CGXDLMSCaptureObject::CGXDLMSCaptureObject()
{

}

// Constructor.
CGXDLMSCaptureObject::CGXDLMSCaptureObject(int attributeIndex, int dataIndex)
{
    m_AttributeIndex = attributeIndex;
    m_DataIndex = dataIndex;
}

// Index of DLMS object in the profile generic table
int CGXDLMSCaptureObject::GetAttributeIndex()
{
    return m_AttributeIndex;
}
void CGXDLMSCaptureObject::SetAttributeIndex(int value)
{
    m_AttributeIndex = value;
}

// Data index of DLMS object in the profile generic table.
int CGXDLMSCaptureObject::GetDataIndex()
{
    return m_DataIndex;
}
void CGXDLMSCaptureObject::SetDataIndex(int value)
{
    m_DataIndex = value;
}