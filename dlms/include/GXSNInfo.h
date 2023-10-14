#ifndef GXSNINFO_H
#define GXSNINFO_H

class CGXDLMSObject;

class CGXSNInfo
{
private:
    /**
     * Is attribute index or action index
     */
    bool m_Action;

    /**
     * Attribute index.
     */
    int m_Index;

    /**
     * COSEM object.
     */
    CGXDLMSObject* m_Item;

public:
    /**
     * Constructor.
     */
    CGXSNInfo();
    /**
     * @return The index
     */
    int GetIndex();

    /**
     * @param value
     *            The index to set
     */
    void SetIndex(int value);

    /**
     * @return Is action.
     */
    bool IsAction();

    /**
     * @param value
     *            Is action.
     */
    void SetAction(bool value);

    /**
     * @return The item
     */
    CGXDLMSObject* GetItem();

    /**
     * @param value
     *            The item to set
     */
    void SetItem(CGXDLMSObject* value);
};
#endif //GXSNINFO_H