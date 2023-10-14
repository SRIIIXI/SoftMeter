#ifndef GXDATE_H
#define GXDATE_H

#include "GXDateTime.h"

/**
* Date object. Time part is ignored.
*/
class CGXDate : public CGXDateTime
{
public:
    // Constructor.
    CGXDate() : CGXDateTime()
    {
        SetSkip((DATETIME_SKIPS)(DATETIME_SKIPS_HOUR | DATETIME_SKIPS_MINUTE | DATETIME_SKIPS_SECOND | DATETIME_SKIPS_MS));
    };

    // Constructor.
    CGXDate(struct tm value) : CGXDateTime(value)
    {
        SetSkip((DATETIME_SKIPS)(DATETIME_SKIPS_HOUR | DATETIME_SKIPS_MINUTE | DATETIME_SKIPS_SECOND | DATETIME_SKIPS_MS));
    }

    // Constructor.
    CGXDate(int year, int month, int day) :
        CGXDateTime(year, month, day, -1, -1, -1, -1)
    {
    }

    /**
    * Constructor.
    *
    * @param forvalue
    *            Date value.
    */
    /// <summary>
    /// Constructor.
    /// </summary>
    CGXDate(CGXDateTime& value) : CGXDateTime(value.GetValue())
    {
        SetSkip((DATETIME_SKIPS)(value.m_Skip | DATETIME_SKIPS_HOUR | DATETIME_SKIPS_MINUTE | DATETIME_SKIPS_SECOND | DATETIME_SKIPS_MS));
    }

    CGXDate& operator=(const CGXDateTime& value)
    {
        SetValue(value.m_Value);
        SetSkip((DATETIME_SKIPS)(value.m_Skip | DATETIME_SKIPS_HOUR | DATETIME_SKIPS_MINUTE | DATETIME_SKIPS_SECOND | DATETIME_SKIPS_MS));
        return *this;
    }
};
#endif //GXDATE_H