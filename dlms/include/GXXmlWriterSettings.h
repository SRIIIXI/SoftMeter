#ifndef GX_XML_WRITER_SETTINGS
#define GX_XML_WRITER_SETTINGS

class CGXXmlWriterSettings
{
    bool m_Values;
    bool m_SkipDefaults;
public:
    //Constructor
    CGXXmlWriterSettings();

    //Are attribute values also serialized.
    bool GetValues();

    //Are attribute values also serialized.
    void SetValues(bool value);

    //Are default values serialized.
    bool GetSkipDefaults();

    //Are default values serialized.
    void SetSkipDefaults(bool value);
};

#endif //GX_XML_WRITER_SETTINGS