#ifndef GXDLMSSPECIALDAY_H
#define GXDLMSSPECIALDAY_H

#include "GXDate.h"

class CGXDLMSSpecialDay
{
    int m_Index;
    CGXDate m_Date;
    int m_DayId;

public:
    int GetIndex();
    void SetIndex(int value);

    CGXDate& GetDate();
    void SetDate(CGXDate& value);
    void SetDate(CGXDateTime& value);

    int GetDayId();
    void SetDayId(int value);

    std::string ToString();
};
#endif //GXDLMSSPECIALDAY_H