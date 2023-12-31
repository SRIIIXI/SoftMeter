#ifndef GXDLMSAUTOANSWER_H
#define GXDLMSAUTOANSWER_H

#include "GXIgnore.h"
#ifndef DLMS_IGNORE_AUTO_ANSWER
#include "GXDLMSObject.h"

typedef enum
{
    // Line dedicated to the device.
    DLMS_AUTO_ANSWER_MODE_DEVICE = 0,
    // Shared line management with a limited number of calls allowed. Once the number of calls is reached,
    // the window status becomes inactive until the next start date, whatever the result of the call,
    DLMS_AUTO_ANSWER_MODE_CALL = 1,
    // Shared line management with a limited number of successful calls allowed. Once the number of
    //// successful communications is reached, the window status becomes inactive until the next start date,
    DLMS_AUTO_ANSWER_MODE_CONNECTED = 2,
    // Currently no modem connected.
    DLMS_AUTO_ANSWER_MODE_NONE = 3
} DLMS_AUTO_ANSWER_MODE;

enum AUTO_ANSWER_STATUS
{
    AUTO_ANSWER_STATUS_INACTIVE = 0,
    AUTO_ANSWER_STATUS_ACTIVE = 1,
    AUTO_ANSWER_STATUS_LOCKED = 2
};

/**
Online help:
http://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSAutoAnswer
*/
class CGXDLMSAutoAnswer : public CGXDLMSObject
{
    int m_NumberOfRingsInListeningWindow, m_NumberOfRingsOutListeningWindow;
    DLMS_AUTO_ANSWER_MODE m_Mode;
    std::vector<std::pair< CGXDateTime, CGXDateTime> > m_ListeningWindow;
    AUTO_ANSWER_STATUS m_Status;
    int m_NumberOfCalls;
public:
    /**
     Constructor.
    */
    CGXDLMSAutoAnswer();

    /**
     Constructor.

     @param ln Logical Name of the object.
    */
    CGXDLMSAutoAnswer(std::string ln);

    /**
     Constructor.

     @param ln Logical Name of the object.
     @param sn Short Name of the object.
    */
    CGXDLMSAutoAnswer(std::string ln, unsigned short sn);

    DLMS_AUTO_ANSWER_MODE GetMode();
    void SetMode(DLMS_AUTO_ANSWER_MODE value);

    std::vector<std::pair< CGXDateTime, CGXDateTime> >& GetListeningWindow();
    void SetListeningWindow(std::vector<std::pair< CGXDateTime, CGXDateTime> >& value);

    AUTO_ANSWER_STATUS GetStatus();
    void SetStatus(AUTO_ANSWER_STATUS value);

    int GetNumberOfCalls();
    void SetNumberOfCalls(int value);

    // Number of rings within the window defined by ListeningWindow.
    int GetNumberOfRingsInListeningWindow();
    void SetNumberOfRingsInListeningWindow(int value);

    //Number of rings outside the window defined by ListeningWindow.
    int GetNumberOfRingsOutListeningWindow();
    void SetNumberOfRingsOutListeningWindow(int value);

    // Returns amount of attributes.
    int GetAttributeCount();

    // Returns amount of methods.
    int GetMethodCount();

    //Get attribute values of object.
    void GetValues(std::vector<std::string>& values);

    /////////////////////////////////////////////////////////////////////////
    // Returns collection of attributes to read.
    //
    // If attribute is static and already read or device is returned
    // HW error it is not returned.
    //
    // all: All items are returned even if they are read already.
    // attributes: Collection of attributes to read.
    void GetAttributeIndexToRead(bool all, std::vector<int>& attributes);

    int GetDataType(int index, DLMS_DATA_TYPE& type);

    // Returns value of given attribute.
    int GetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);

    /*
     * Set value of given attribute.
     */
    int SetValue(CGXDLMSSettings& settings, CGXDLMSValueEventArg& e);
};
#endif //DLMS_IGNORE_AUTO_ANSWER
#endif //GXDLMSAUTOANSWER_H