#ifndef GXDLMSIMAGEACTIVATEINFO_H
#define GXDLMSIMAGEACTIVATEINFO_H

#include "GXByteBuffer.h"

class CGXDLMSImageActivateInfo
{
    long m_Size;
    CGXByteBuffer m_Identification;
    CGXByteBuffer m_Signature;
public:
    /**
     * Constructor.
     */
    CGXDLMSImageActivateInfo();

    /**
     * Constructor.
     */
    CGXDLMSImageActivateInfo(long size, CGXByteBuffer& identification, CGXByteBuffer& signature);

    /**
     *  Image_size is the size of the Image(s) to be activated.
     *  Expressed in octets;
    */
    long GetSize();
    void SetSize(long value);

    /**
     * Image identification is the identification of the Image(s)
     * to be activated, and may contain information like
     * manufacturer, device type, version information, etc.
    */
    CGXByteBuffer& GetIdentification();
    void SetIdentification(CGXByteBuffer& value);

    /**
     * Image signature is the signature of the Image(s) to be activated.
    */
    CGXByteBuffer& GetSignature();
    void SetSignature(CGXByteBuffer& value);

    std::string ToString();
};
#endif //GXDLMSIMAGEACTIVATEINFO_H
