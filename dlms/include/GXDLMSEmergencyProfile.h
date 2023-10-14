#ifndef GXDLMSEMERGENCYPROFILE_H
#define GXDLMSEMERGENCYPROFILE_H

class CGXDLMSEmergencyProfile
{
    int m_ID;
    CGXDateTime m_ActivationTime;
    int m_Duration;
public:

    int GetID();
    void SetID(int value);

    CGXDateTime& GetActivationTime();
    void SetActivationTime(CGXDateTime value);

    int GetDuration();
    void SetDuration(int value);

    std::string ToString();
};

#endif //GXDLMSEMERGENCYPROFILE_H
