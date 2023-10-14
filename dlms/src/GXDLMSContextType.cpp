#include "GXDLMSContextType.h"
#include "GXDLMSVariant.h"
#include "GXHelpers.h"

CGXDLMSContextType::CGXDLMSContextType()
{
    m_Conformance = (DLMS_CONFORMANCE)0;
    m_MaxReceivePduSize = 0;
    m_MaxSendPduSize = 0;
    m_DlmsVersionNumber = 6;
    m_QualityOfService = 0;
}

DLMS_CONFORMANCE CGXDLMSContextType::GetConformance()
{
    return m_Conformance;
}
void CGXDLMSContextType::SetConformance(DLMS_CONFORMANCE value)
{
    m_Conformance = value;
}

int CGXDLMSContextType::GetMaxReceivePduSize()
{
    return m_MaxReceivePduSize;
}
void CGXDLMSContextType::SetMaxReceivePduSize(int value)
{
    m_MaxReceivePduSize = value;
}

int CGXDLMSContextType::GetMaxSendPduSize()
{
    return m_MaxSendPduSize;
}
void CGXDLMSContextType::SetMaxSendPduSize(int value)
{
    m_MaxSendPduSize = value;
}

int CGXDLMSContextType::GetDlmsVersionNumber()
{
    return m_DlmsVersionNumber;
}
void CGXDLMSContextType::SetDlmsVersionNumber(int value)
{
    m_DlmsVersionNumber = value;
}
int CGXDLMSContextType::GetQualityOfService()
{
    return m_QualityOfService;
}
void CGXDLMSContextType::SetQualityOfService(int value)
{
    m_QualityOfService = value;
}

CGXByteBuffer& CGXDLMSContextType::GetCypheringInfo()
{
    return m_CypheringInfo;
}

void CGXDLMSContextType::SetCypheringInfo(CGXByteBuffer& value)
{
    m_CypheringInfo = value;
}

std::string CGXDLMSContextType::ToString()
{
    CGXByteBuffer bb;
    bb.AddIntAsString(m_Conformance);
    bb.SetInt8(' ');
    bb.AddIntAsString(m_MaxReceivePduSize);
    bb.SetInt8(' ');
    bb.AddIntAsString(m_MaxSendPduSize);
    bb.SetInt8(' ');
    bb.AddIntAsString(m_DlmsVersionNumber);
    bb.SetInt8(' ');
    bb.AddIntAsString(m_QualityOfService);
    bb.SetInt8(' ');
    bb.Set(&m_CypheringInfo, 0, -1);
    return bb.ToString();
}