#ifndef GXDLMSCONTEXTTYPE_H
#define GXDLMSCONTEXTTYPE_H

#include <string>
#include "GXByteBuffer.h"

class CGXDLMSContextType
{
private:
    DLMS_CONFORMANCE m_Conformance;
    int m_MaxReceivePduSize;
    int m_MaxSendPduSize;
    int m_DlmsVersionNumber;
    int m_QualityOfService;
    CGXByteBuffer m_CypheringInfo;

public:
    /*Constructor.*/
    CGXDLMSContextType();
    /**
    * Server will tell what functionality is available for the client.
    * @return Available functionality.
    */
    DLMS_CONFORMANCE GetConformance();

    /**
    * Server will tell what functionality is available for the client.
    *
    * @param value
    *            Available functionality.
    */
    void SetConformance(DLMS_CONFORMANCE value);

    int GetMaxReceivePduSize();
    void SetMaxReceivePduSize(int value);

    int GetMaxSendPduSize();
    void SetMaxSendPduSize(int value);

    int GetDlmsVersionNumber();
    void SetDlmsVersionNumber(int value);

    int GetQualityOfService();
    void SetQualityOfService(int value);

    CGXByteBuffer& GetCypheringInfo();
    void SetCypheringInfo(CGXByteBuffer& value);

    std::string ToString();
};
#endif //GXDLMSCONTEXTTYPE_H
