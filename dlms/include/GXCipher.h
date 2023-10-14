#ifndef GXCIPHER_H
#define GXCIPHER_H

#include "GXByteBuffer.h"

class CGXCipher
{
private:
    DLMS_SECURITY m_Security;
    /**
    * System title.
    */
    CGXByteBuffer m_SystemTitle;

    /**
    * Is data encrypted.
    */
    bool m_Encrypt;

    /**
    *  Block cipher key.
    */
    CGXByteBuffer m_BlockCipherKey;
    /**
    *  Block Authentication key.
    */
    CGXByteBuffer m_AuthenticationKey;

    // Dedicated key.
    CGXByteBuffer m_DedicatedKey;

    /**
     * Frame counter. AKA Invocation counter.
     */
    unsigned long m_FrameCounter;

    DLMS_SECURITY_SUITE m_SecuritySuite;


    static int GetAuthenticatedData(
        DLMS_SECURITY security,
        CGXByteBuffer& authenticationKey,
        CGXByteBuffer& plainText,
        CGXByteBuffer& result);

    void Init(
        unsigned char* systemTitle,
        unsigned char count);

    static int Int(uint32_t* rk,
        const unsigned char* cipherKey,
        unsigned short keyBits);

    /*
    * Make xor for 128 bits.
    */
    static void Xor(
        unsigned char* dst,
        const unsigned char* src);

    static void shift_right_block(unsigned char* v);

    static void MultiplyH(
        const unsigned char* x,
        const unsigned char* y,
        unsigned char* z);

    /*
    * Count GHash.
    */
    static void GetGHash(
        const unsigned char* h,
        const unsigned char* x,
        int xlen,
        unsigned char* y);

    static void Init_j0(
        const unsigned char* iv,
        unsigned char len,
        const unsigned char* H,
        unsigned char* J0);

    static void Inc32(unsigned char* block);

    static void Gctr(
        unsigned int* aes,
        const unsigned char* icb,
        unsigned char* in,
        int len,
        unsigned char* out);

    static void AesGcmGctr(
        unsigned int* aes,
        const unsigned char* J0,
        unsigned char* in,
        int len,
        unsigned char* out);

    static void AesGcmGhash(
        const unsigned char* H,
        const unsigned char* aad,
        int aad_len,
        const unsigned char* crypt,
        int crypt_len,
        unsigned char* S);

    static void AesEncrypt(
        const unsigned int* rk,
        unsigned int Nr,
        const unsigned char* pt,
        unsigned char* ct);
public:
    /**
    * Constructor.
    */
    CGXCipher(CGXByteBuffer& systemTitle);

    /**
    * Constructor.
    */
    CGXCipher(const char* systemTitle);

    /**
    * Constructor.
    */
    CGXCipher(
        unsigned char* systemTitle,
        unsigned char count);

    /**
    * Destructor.
    */
    ~CGXCipher();


    /**
      * Encrypt PDU.
      *
      * tag
      *            Tag.
      * systemTitle
      *            System Title.
      * plainText
      *            Data to encrypt.
      * encrypted
      *            Encrypted data.
      */
    int Encrypt(
        DLMS_SECURITY security,
        DLMS_COUNT_TYPE type,
        unsigned long frameCounter,
        unsigned char tag,
        CGXByteBuffer& systemTitle,
        CGXByteBuffer& key,
        CGXByteBuffer& input,
        bool encrypt);

    /**
      * Decrypt data.
      *
      * systemTitle: System Title.
      * data: Decrypted data.
      * security: Used security level.
      * suite: Used security suite.
      * InvocationCounter: Invocation counter value.
      */
    int Decrypt(
        CGXByteBuffer& title,
        CGXByteBuffer& key,
        CGXByteBuffer& data,
        DLMS_SECURITY& security,
        DLMS_SECURITY_SUITE& suite,
        uint64_t& InvocationCounter);

    /*
     * Encrypt data using AES.
     *
     * data: Encrypted data.
     * offset: Data offset.
     * secret: Secret.
     */
    static int Aes1Encrypt(
        CGXByteBuffer& data,
        unsigned short offset,
        CGXByteBuffer& secret);

    /*
     * Decrypt data using AES.
     *
     * data: Encrypted data.
     * secret:  Secret.
     */
    static int Aes1Decrypt(
        CGXByteBuffer& data,
        CGXByteBuffer& secret);

    /**
     * Returns is ciphering used.
     */
    bool IsCiphered();

    /**
     * Returns used security.
     */
    DLMS_SECURITY GetSecurity();

    /**
    * value: Used security.
    */
    void SetSecurity(DLMS_SECURITY value);

    /*
    * Returns Used security suite.
    */
    DLMS_SECURITY_SUITE GetSecuritySuite();

    /*
     * value: Used security suite.
     */
    void SetSecuritySuite(DLMS_SECURITY_SUITE value);

    /**
     * Returns System title.
     */
    CGXByteBuffer& GetSystemTitle();

    /**
    *  value: System title.
    */
    void SetSystemTitle(CGXByteBuffer& value);

    /**
     * Returns Block cipher key.
     */
    CGXByteBuffer& GetBlockCipherKey();

    /**
    *  value: Block cipher key.
    */
    void SetBlockCipherKey(CGXByteBuffer& value);

    /**
     * Returns Authentication key.
     */
    CGXByteBuffer& GetAuthenticationKey();

    /**
     * value
     *            Authentication key.
     */
    void SetAuthenticationKey(CGXByteBuffer& value);

    /**
     * Returns Frame counter. AKA. Invocation counter.
     */
    unsigned long GetFrameCounter();

    void SetFrameCounter(unsigned long value);

    /**
     * Returns Invocation counter. AKA Frame counter.
     */
    unsigned long GetInvocationCounter();

    void SetInvocationCounter(unsigned long value);

    void Reset();

    /**
    * Returns Dedicated key.
    */
    CGXByteBuffer& GetDedicatedKey();

    /**
     * value
     *            Dedicated key.
     */
    void SetDedicatedKey(CGXByteBuffer& value);

};
#endif //GXCIPHER_H
