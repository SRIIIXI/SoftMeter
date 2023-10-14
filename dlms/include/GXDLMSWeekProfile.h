#ifndef GXDLMSWEEKPROFILE_H
#define GXDLMSWEEKPROFILE_H

#include <string>
#include "GXByteBuffer.h"

class CGXDLMSWeekProfile
{
    CGXByteBuffer m_Name;
    int m_Monday;
    int m_Tuesday;
    int m_Wednesday;
    int m_Thursday;
    int m_Friday;
    int m_Saturday;
    int m_Sunday;
public:
    /**
     Constructor.
    */
    CGXDLMSWeekProfile();

    /**
     Constructor.
    */
    CGXDLMSWeekProfile(std::string name, int monday, int tuesday, int wednesday, int thursday, int friday, int saturday, int sunday);

    std::string GetName();

    void SetName(std::string value);

    void GetName(CGXByteBuffer& value);

    void SetName(CGXByteBuffer& value);

    int GetMonday();

    void SetMonday(int value);

    int GetTuesday();

    void SetTuesday(int value);

    int GetWednesday();

    void SetWednesday(int value);

    int GetThursday();

    void SetThursday(int value);

    int GetFriday();

    void SetFriday(int value);

    int GetSaturday();

    void SetSaturday(int value);

    int GetSunday();

    void SetSunday(int value);

    std::string ToString();
};

#endif //GXDLMSWEEKPROFILE_H
