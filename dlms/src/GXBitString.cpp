#include "GXErrorCodes.h"
#include "GXBitString.h"
#include "GXHelpers.h"

CGXBitString::CGXBitString()
{
}

CGXBitString::CGXBitString(std::string value)
{
    m_Value = value;
}

std::string& CGXBitString::ToString()
{
    return m_Value;
}

int CGXBitString::ToInteger(int& value, unsigned char maxSize)
{
    value = 0;
    int pos = 0;
    for (std::string::iterator it = m_Value.begin(); it != m_Value.end(); ++it)
    {
        if (*it == '1')
        {
            value |= (1 << pos);
        }
        else if (*it != '0')
        {
            return DLMS_ERROR_CODE_INVALID_PARAMETER;
        }
        ++pos;
    }
    return 0;
}

int CGXBitString::ToInteger(int& value)
{
    return ToInteger(value, 32);
}

int CGXBitString::ToByte(unsigned char& value)
{
    int ret, tmp = 0;
    ret = ToInteger(tmp, 8);
    if (ret == 0)
    {
        value = tmp;
    }
    else
    {
        value = 0;
    }
    return ret;
}

void ToBitString2(std::stringstream& sb, unsigned char value, unsigned int count)
{
    unsigned char pos;
    if (count > 8)
    {
        count = 8;
    }
    for (pos = 0; pos != count; ++pos)
    {
        if ((value & (1 << pos)) != 0)
        {
            sb << "1";
        }
        else
        {
            sb << "0";
        }
    }
}
std::string CGXBitString::ToBitString(unsigned int value, unsigned int count)
{
    std::stringstream sb;
    ToBitString2(sb, (unsigned char)(value & 0xFF), count);
    if (count > 8)
    {
        ToBitString2(sb, (unsigned char)((value >> 8) & 0xFF), count - 8);
        if (count > 16)
        {
            ToBitString2(sb, (unsigned char)((value >> 16) & 0xFF), count - 16);
            if (count > 24)
            {
                ToBitString2(sb, (unsigned char)((value >> 24) & 0xFF), count - 24);
            }
        }
    }
    if (sb.width() > count)
    {
        return sb.str().substr(0, (unsigned int)(sb.width() - count));
    }
    return sb.str();
}
