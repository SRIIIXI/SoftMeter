#ifndef GXDLMSSHA256_H
#define GXDLMSSHA256_H

#include "GXByteBuffer.h"

//This class is used to handle SHA-256.
class CGXDLMSSha256
{
private:
    static void Transform(unsigned int *h, const unsigned char *message, unsigned int block_nb);
    static int Final(unsigned int *h, unsigned char *block, unsigned char *digest, unsigned int len, unsigned int totalLen);
    static int Update(unsigned int *h, unsigned char *block, CGXByteBuffer&  data, unsigned int *len, unsigned int *totalLen);
public:
    static int Encrypt(CGXByteBuffer& data, CGXByteBuffer& crypted);
};
#endif //GXDLMSSHA256_H
