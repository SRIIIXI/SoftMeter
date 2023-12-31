#ifndef GXNEIGHBORDISCOVERYSETUP_H
#define GXNEIGHBORDISCOVERYSETUP_H

/*
 * Contains the configuration to be used for both routers and hosts to support the Neighbor Discovery protocol for IPv6.

 * Online help: <br>
 * https://www.gurux.fi/Gurux.DLMS.Objects.GXDLMSIp6Setup
 */
class CGXNeighborDiscoverySetup
{
    /**
     * Gives the maximum number of router solicitation retries to be performed
     * by a node if the expected router advertisement has not been received.
     */
    int m_MaxRetry;
    /**
     * Gives the waiting time in milliseconds between two successive router
     * solicitation retries.
     */
    int m_RetryWaitTime;
    /**
     * Gives the router advertisement transmission period in seconds.
     */
    long m_SendPeriod;

public:
    /**
     * Constructor.
     */
    CGXNeighborDiscoverySetup()
    {
        m_MaxRetry = 3;
        m_RetryWaitTime = 10000;
    }

    int GetMaxRetry()
    {
        return m_MaxRetry;
    }

    void SetMaxRetry(int value)
    {
        m_MaxRetry = value;
    }

    int GetRetryWaitTime()
    {
        return m_RetryWaitTime;
    }

    void SetRetryWaitTime(int value)
    {
        m_RetryWaitTime = value;
    }

    /**
     * @return Gives the router advertisement transmission period in seconds.
     */
    long GetSendPeriod() {
        return m_SendPeriod;
    }

    /**
     * @param value
     *            Router advertisement transmission period in seconds.
     */
    void SetSendPeriod(long value) {
        m_SendPeriod = value;
    }
};

#endif //GXNEIGHBORDISCOVERYSETUP_H