#ifndef GXTIME_H
#define GXTIME_H

#include "GXDateTime.h"

/**
* Time object. Date part is ignored.
*/
class CGXTime : public CGXDateTime
{
public:
    // Constructor.
    CGXTime() : CGXDateTime()
    {
        SetSkip((DATETIME_SKIPS)(DATETIME_SKIPS_YEAR | DATETIME_SKIPS_MONTH | DATETIME_SKIPS_DAY | DATETIME_SKIPS_DAYOFWEEK));
    }
    // Constructor.
    CGXTime(struct tm value) : CGXDateTime(value)
    {
        SetSkip((DATETIME_SKIPS)(DATETIME_SKIPS_YEAR | DATETIME_SKIPS_MONTH | DATETIME_SKIPS_DAY | DATETIME_SKIPS_DAYOFWEEK));
    }

    // Constructor.
    CGXTime(int hour, int minute, int second, int millisecond) :
        CGXDateTime(-1, -1, -1, hour, minute, second, millisecond)
    {
        SetSkip((DATETIME_SKIPS)(m_Skip | DATETIME_SKIPS_DAYOFWEEK));
    }

    /**
    * Constructor.
    *
    * @param value
    *            Date value.
    */
    CGXTime(CGXDateTime& value) : CGXDateTime(value.GetValue())
    {
        SetSkip((DATETIME_SKIPS)(value.m_Skip | DATETIME_SKIPS_YEAR | DATETIME_SKIPS_MONTH | DATETIME_SKIPS_DAY | DATETIME_SKIPS_DAYOFWEEK));
        SetExtra(value.m_Extra);
    }

    CGXTime& operator=(const CGXDateTime& value)
    {
        SetValue(value.m_Value);
        SetSkip((DATETIME_SKIPS)(value.m_Skip | DATETIME_SKIPS_YEAR | DATETIME_SKIPS_MONTH | DATETIME_SKIPS_DAY | DATETIME_SKIPS_DAYOFWEEK));
        SetExtra(value.m_Extra);
        return *this;
    }
};
#endif //GXTIME_H