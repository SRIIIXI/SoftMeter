#ifndef GXDLMSSHA1_H
#define GXDLMSSHA1_H

#include "GXByteBuffer.h"

//This class is used to handle SHA-1.
class CGXDLMSSha1
{
private:
    static void Transform(unsigned long *block, unsigned int *digest, unsigned int *transforms);
    static void Update(CGXByteBuffer& data, unsigned int *digest, unsigned int *transforms);
    static int Final(CGXByteBuffer& data, unsigned int *digest, unsigned int *transforms, CGXByteBuffer& reply);

public:
    static int Encrypt(CGXByteBuffer& data, CGXByteBuffer& crypted);
};
#endif //GXDLMSSHA1_H
