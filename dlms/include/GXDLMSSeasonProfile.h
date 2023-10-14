#ifndef GXDLMSSEASONPROFILE_H
#define GXDLMSSEASONPROFILE_H

#include "GXDateTime.h"
#include "GXByteBuffer.h"

class CGXDLMSSeasonProfile
{
    CGXByteBuffer m_Name;
    CGXDateTime m_Start;
    CGXByteBuffer m_WeekName;
public:
    /**
     Constructor.
    */
    CGXDLMSSeasonProfile();

    /**
     Constructor.
    */
    CGXDLMSSeasonProfile(std::string name, CGXDateTime& start, std::string weekName);

    /**
     Constructor.
    */
    CGXDLMSSeasonProfile(CGXByteBuffer& name, CGXDateTime& start, CGXByteBuffer weekName);

    /**
     Name of season profile.
    */
    CGXByteBuffer& GetName();
    void SetName(CGXByteBuffer& value);

    /**
     Season Profile start time.
    */
    CGXDateTime& GetStart();
    void SetStart(CGXDateTime value);

    /**
     Week name of season profile.
    */
    CGXByteBuffer& GetWeekName();
    void SetWeekName(CGXByteBuffer& value);

    std::string ToString();
};

#endif //GXDLMSSEASONPROFILE_H
