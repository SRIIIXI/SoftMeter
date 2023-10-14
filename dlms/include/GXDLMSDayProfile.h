#ifndef GXDLMSDAYPROFILE_H
#define GXDLMSDAYPROFILE_H

#include <vector>
#include "GXDLMSDayProfileAction.h"

class CGXDLMSDayProfile
{
    short m_DayId;
    std::vector<CGXDLMSDayProfileAction*> m_DaySchedules;
public:
    /**
     Constructor.
    */
    CGXDLMSDayProfile();

    /**
     Constructor.
    */
    CGXDLMSDayProfile(short dayId, std::vector<CGXDLMSDayProfileAction*>& schedules);

    //Destructor.
    ~CGXDLMSDayProfile();


    /**
     User defined identifier, identifying the currentday_profile.
    */
    short GetDayId();
    void SetDayId(short value);

    std::vector<CGXDLMSDayProfileAction*>& GetDaySchedules();
    void SetDaySchedules(std::vector<CGXDLMSDayProfileAction*>& value);
    std::string ToString();
};

#endif //GXDLMSDAYPROFILE_H
