#ifndef GXSERIALNUMBERCOUNTER_H
#define GXSERIALNUMBERCOUNTER_H

#include <vector>
#include <string>

class CGXSerialNumberCounter
{
private:
    /**
    * Constructor.
    */
    CGXSerialNumberCounter()
    {

    }

    /**
    * Produce formatted String by the given math expression.
    *
    * @param expression
    *            Unformatted math expression.
    * @return Formatted math expression.
    */
    static int FormatString(std::string& expression, std::string& value);
    /*
     * Get values to count together.
     */
    static int GetValues(std::string& expressions, std::vector<std::string>& values);

    static int GetValue(std::string& value, int sn);
public:


    /// <summary>
    /// Count serial number using formula.
    /// </summary>
    /// <param name="sn">Serial number</param>
    /// <param name="formula">Formula to used.</param>
    /// <returns></returns>
    static int Count(unsigned long sn, const char* formula);
};

#endif //GXSERIALNUMBERCOUNTER_H