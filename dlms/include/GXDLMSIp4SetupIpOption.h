#ifndef GXDLMSIP4SETUPIPOPTION_H
#define GXDLMSIP4SETUPIPOPTION_H

#include "GXIgnore.h"
#include "GXDLMSObject.h"

class CGXDLMSIp4SetupIpOption
{
    IP_OPTION_TYPE m_Type;
    short m_Length;
    CGXByteBuffer m_Data;
public:
    IP_OPTION_TYPE GetType();
    void SetType(IP_OPTION_TYPE value);

    short GetLength();
    void SetLength(short value);
    CGXByteBuffer& GetData();
    void SetData(CGXByteBuffer& value);

    std::string ToString();
};
#endif //GXDLMSIP4SETUPIPOPTION_H