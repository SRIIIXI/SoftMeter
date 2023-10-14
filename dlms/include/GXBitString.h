#ifndef GXBIT_STRING_H
#define GXBIT_STRING_H

#include <string>
/**
* Date object. Time part is ignored.
*/
class CGXBitString
{
private:
    std::string m_Value;
    //Convert bit string to Integer.
    int ToInteger(int& value, unsigned char maxSize);
public:
    //Constructor.
    CGXBitString();

    //Constructor.
    CGXBitString(std::string value);

    //Convert bit string to string.
    std::string& ToString();

    //Convert bit string to Integer.
    int ToInteger(int& value);

    //Convert bit string to byte.
    int ToByte(unsigned char& value);

    // Convert integer value to BitString.
    // value : Value to convert.
    // count: Amount of bits.
    // returns: Bitstring.
    static std::string ToBitString(unsigned int value, unsigned int count);
};
#endif //GXBIT_STRING_H