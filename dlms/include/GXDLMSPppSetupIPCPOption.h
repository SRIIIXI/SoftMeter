#ifndef GXDLMSPPPSETUPIPCPOPTION_H
#define GXDLMSPPPSETUPIPCPOPTION_H

#include "IGXDLMSBase.h"
#include "GXDLMSObject.h"
#include "GXHelpers.h"

enum PPP_SETUP_IPCP_OPTION_TYPE
{
    PPP_SETUP_IPCP_OPTION_TYPE_IPCOMPRESSIONPROTOCOL = 2,
    PPP_SETUP_IPCP_OPTION_TYPE_PREFLOCALIP = 3,
    PPP_SETUP_IPCP_OPTION_TYPE_PREFPEERIP = 20,
    PPP_SETUP_IPCP_OPTION_TYPE_GAO = 21,
    PPP_SETUP_IPCP_OPTION_TYPE_USIP = 22
};

class CGXDLMSPppSetupIPCPOption
{
	friend class CGXDLMSPppSetup;
    PPP_SETUP_IPCP_OPTION_TYPE m_Type;
    int m_Length;
    CGXDLMSVariant m_Data;
public:

    PPP_SETUP_IPCP_OPTION_TYPE GetType();
    void SetType(PPP_SETUP_IPCP_OPTION_TYPE value);

    int GetLength();
    void SetLength(int value);

    CGXDLMSVariant& GetData();
    void SetData(CGXDLMSVariant& value);

    std::string ToString();
};
#endif //GXDLMSPPPSETUPIPCPOPTION_H
