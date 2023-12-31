#include "GXIgnore.h"
#include "GXDLMSObjectFactory.h"
#include "GXDLMSClient.h"

#ifndef DLMS_IGNORE_ACTION_SCHEDULE
#include "GXDLMSActionSchedule.h"
#endif //DLMS_IGNORE_ACTION_SCHEDULE
#ifndef DLMS_IGNORE_ACTIVITY_CALENDAR
#include "GXDLMSActivityCalendar.h"
#endif //DLMS_IGNORE_ACTIVITY_CALENDAR
#ifndef DLMS_IGNORE_ASSOCIATION_LOGICAL_NAME
#include "GXDLMSAssociationLogicalName.h"
#endif //DLMS_IGNORE_ASSOCIATION_LOGICAL_NAME
#ifndef DLMS_IGNORE_ASSOCIATION_SHORT_NAME
#include "GXDLMSAssociationShortName.h"
#endif //DLMS_IGNORE_ASSOCIATION_SHORT_NAME
#ifndef DLMS_IGNORE_AUTO_ANSWER
#include "GXDLMSAutoAnswer.h"
#endif //DLMS_IGNORE_AUTO_ANSWER
#ifndef DLMS_IGNORE_AUTO_CONNECT
#include "GXDLMSAutoConnect.h"
#endif //DLMS_IGNORE_AUTO_CONNECT
#ifndef DLMS_IGNORE_CLOCK
#include "GXDLMSClock.h"
#endif //DLMS_IGNORE_CLOCK
#ifndef DLMS_IGNORE_DATA
#include "GXDLMSData.h"
#endif //DLMS_IGNORE_DATA
#ifndef DLMS_IGNORE_REGISTER
#include "GXDLMSRegister.h"
#endif //DLMS_IGNORE_REGISTER
#ifndef DLMS_IGNORE_EXTENDED_REGISTER
#include "GXDLMSExtendedRegister.h"
#endif //DLMS_IGNORE_EXTENDED_REGISTER
#ifndef DLMS_IGNORE_DEMAND_REGISTER
#include "GXDLMSDemandRegister.h"
#endif //DLMS_IGNORE_DEMAND_REGISTER
#ifndef DLMS_IGNORE_REGISTER_MONITOR
#include "GXDLMSRegisterMonitor.h"
#endif //DLMS_IGNORE_REGISTER_MONITOR
#ifndef DLMS_IGNORE_PROFILE_GENERIC
#include "GXDLMSProfileGeneric.h"
#endif //DLMS_IGNORE_PROFILE_GENERIC
#ifndef DLMS_IGNORE_TCP_UDP_SETUP
#include "GXDLMSTcpUdpSetup.h"
#endif //DLMS_IGNORE_TCP_UDP_SETUP
#ifndef DLMS_IGNORE_GPRS_SETUP
#include "GXDLMSGPRSSetup.h"
#endif //DLMS_IGNORE_GPRS_SETUP
#ifndef DLMS_IGNORE_ACTION_SCHEDULE
#include "GXDLMSActionSchedule.h"
#endif //DLMS_IGNORE_ACTION_SCHEDULE
#ifndef DLMS_IGNORE_SPECIAL_DAYS_TABLE
#include "GXDLMSSpecialDaysTable.h"
#endif //DLMS_IGNORE_SPECIAL_DAYS_TABLE
#ifndef DLMS_IGNORE_IMAGE_TRANSFER
#include "GXDLMSImageTransfer.h"
#endif //DLMS_IGNORE_IMAGE_TRANSFER
#ifndef DLMS_IGNORE_DISCONNECT_CONTROL
#include "GXDLMSDisconnectControl.h"
#endif //DLMS_IGNORE_DISCONNECT_CONTROL
#ifndef DLMS_IGNORE_LIMITER
#include "GXDLMSLimiter.h"
#endif //DLMS_IGNORE_LIMITER
#ifndef DLMS_IGNORE_MBUS_CLIENT
#include "GXDLMSMBusClient.h"
#endif //DLMS_IGNORE_MBUS_CLIENT
#ifndef DLMS_IGNORE_SCRIPT_TABLE
#include "GXDLMSScriptTable.h"
#endif //DLMS_IGNORE_SCRIPT_TABLE
#ifndef DLMS_IGNORE_MBUS_SLAVE_PORT_SETUP
#include "GXDLMSMBusSlavePortSetup.h"
#endif //DLMS_IGNORE_MBUS_SLAVE_PORT_SETUP
#ifndef DLMS_IGNORE_SECURITY_SETUP
#include "GXDLMSSecuritySetup.h"
#endif //DLMS_IGNORE_SECURITY_SETUP
#ifndef DLMS_IGNORE_PPP_SETUP
#include "GXDLMSPppSetup.h"
#endif //DLMS_IGNORE_PPP_SETUP
#ifndef DLMS_IGNORE_MAC_ADDRESS_SETUP
#include "GXDLMSMacAddressSetup.h"
#endif //DLMS_IGNORE_MAC_ADDRESS_SETUP
#ifndef DLMS_IGNORE_HDLC_SETUP
#include "GXDLMSHdlcSetup.h"
#endif //DLMS_IGNORE_HDLC_SETUP
#ifndef DLMS_IGNORE_IEC_LOCAL_PORT_SETUP
#include "GXDLMSIECOpticalPortSetup.h"
#endif //DLMS_IGNORE_IEC_LOCAL_PORT_SETUP
#ifndef DLMS_IGNORE_IP4_SETUP
#include "GXDLMSIp4Setup.h"
#endif //DLMS_IGNORE_IP4_SETUP
#ifndef DLMS_IGNORE_IP6_SETUP
#include "GXDLMSIp6Setup.h"
#endif //DLMS_IGNORE_IP6_SETUP
#ifndef DLMS_IGNORE_REGISTER_ACTIVATION
#include "GXDLMSRegisterActivation.h"
#endif //DLMS_IGNORE_REGISTER_ACTIVATION
#ifndef DLMS_IGNORE_SCHEDULE
#include "GXDLMSSchedule.h"
#endif //DLMS_IGNORE_SCHEDULE
#ifndef DLMS_IGNORE_MODEM_CONFIGURATION
#include "GXDLMSModemConfiguration.h"
#endif //DLMS_IGNORE_MODEM_CONFIGURATION
#ifndef DLMS_IGNORE_SAP_ASSIGNMENT
#include "GXDLMSSapAssignment.h"
#endif //DLMS_IGNORE_SAP_ASSIGNMENT
#ifndef DLMS_IGNORE_MBUS_MASTER_PORT_SETUP
#include "GXDLMSMBusMasterPortSetup.h"
#endif //DLMS_IGNORE_MBUS_MASTER_PORT_SETUP
#ifndef DLMS_IGNORE_MESSAGE_HANDLER
#include "GXDLMSMessageHandler.h"
#endif //DLMS_IGNORE_MESSAGE_HANDLER
#ifndef DLMS_IGNORE_PUSH_SETUP
#include "GXDLMSPushSetup.h"
#endif //DLMS_IGNORE_PUSH_SETUP
#ifndef DLMS_IGNORE_GSM_DIAGNOSTIC
#include "GXDLMSGSMDiagnostic.h"
#endif //DLMS_IGNORE_GSM_DIAGNOSTIC
#ifndef DLMS_IGNORE_ACCOUNT
#include "GXDLMSAccount.h"
#endif //DLMS_IGNORE_ACCOUNT
#ifndef DLMS_IGNORE_CREDIT
#include "GXDLMSCredit.h"
#endif //DLMS_IGNORE_CREDIT
#ifndef DLMS_IGNORE_CHARGE
#include "GXDLMSCharge.h"
#endif //DLMS_IGNORE_CHARGE
#ifndef DLMS_IGNORE_PARAMETER_MONITOR
#include "GXDLMSParameterMonitor.h"
#endif //DLMS_IGNORE_PARAMETER_MONITOR
#include "GXDLMSTokenGateway.h"
#ifndef DLMS_IGNORE_TOKEN_GATEWAY
#include "GXDLMSCompactData.h"
#endif //DLMS_IGNORE_TOKEN_GATEWAY
#ifndef DLMS_IGNORE_UTILITY_TABLES
#include "GXDLMSUtilityTables.h"
#endif //DLMS_IGNORE_UTILITY_TABLES
#ifndef DLMS_IGNORE_LLC_SSCS_SETUP
#include "GXDLMSLlcSscsSetup.h"
#endif //DLMS_IGNORE_LLC_SSCS_SETUP
#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_PHYSICAL_LAYER_COUNTERS
#include "GXDLMSPrimeNbOfdmPlcPhysicalLayerCounters.h"
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_PHYSICAL_LAYER_COUNTERS
#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_SETUP
#include "GXDLMSPrimeNbOfdmPlcMacSetup.h"
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_SETUP
#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_FUNCTIONAL_PARAMETERS
#include "GXDLMSPrimeNbOfdmPlcMacFunctionalParameters.h"
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_FUNCTIONAL_PARAMETERS
#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_COUNTERS
#include "GXDLMSPrimeNbOfdmPlcMacCounters.h"
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_COUNTERS
#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_NETWORK_ADMINISTRATION_DATA
#include "GXDLMSPrimeNbOfdmPlcMacNetworkAdministrationData.h"
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_NETWORK_ADMINISTRATION_DATA
#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_APPLICATIONS_IDENTIFICATION
#include "GXDLMSPrimeNbOfdmPlcApplicationsIdentification.h"
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_APPLICATIONS_IDENTIFICATION
#ifndef DLMS_IGNORE_IEC_8802_LLC_TYPE1_SETUP
#include "GXDLMSIec8802LlcType1Setup.h"
#endif //DLMS_IGNORE_IEC_8802_LLC_TYPE1_SETUP
#ifndef DLMS_IGNORE_IEC_8802_LLC_TYPE2_SETUP
#include "GXDLMSIec8802LlcType2Setup.h"
#endif //DLMS_IGNORE_IEC_8802_LLC_TYPE2_SETUP
#ifndef DLMS_IGNORE_IEC_8802_LLC_TYPE3_SETUP
#include "GXDLMSIec8802LlcType3Setup.h"
#endif //DLMS_IGNORE_IEC_8802_LLC_TYPE3_SETUP
#ifndef DLMS_IGNORE_SFSK_REPORTING_SYSTEM_LIST
#include "GXDLMSSFSKReportingSystemList.h"
#endif //DLMS_IGNORE_SFSK_REPORTING_SYSTEM_LIST
#ifndef DLMS_IGNORE_ARBITRATOR
#include "GXDLMSArbitrator.h"
#endif //DLMS_IGNORE_ARBITRATOR
#ifndef DLMS_IGNORE_SFSK_MAC_COUNTERS
#include "GXDLMSSFSKMacCounters.h"
#endif //DLMS_IGNORE_SFSK_MAC_COUNTERS
#ifndef DLMS_IGNORE_SFSK_MAC_SYNCHRONIZATION_TIMEOUTS
#include "GXDLMSSFSKMacSynchronizationTimeouts.h"
#endif //DLMS_IGNORE_SFSK_MAC_SYNCHRONIZATION_TIMEOUTS
#ifndef DLMS_IGNORE_SFSK_ACTIVE_INITIATOR
#include "GXDLMSSFSKActiveInitiator.h"
#endif //DLMS_IGNORE_SFSK_ACTIVE_INITIATOR
#ifndef DLMS_IGNORE_SFSK_PHY_MAC_SETUP
#include "GXDLMSSFSKPhyMacSetUp.h"
#endif //DLMS_IGNORE_SFSK_PHY_MAC_SETUP
#ifndef DLMS_IGNORE_IEC_TWISTED_PAIR_SETUP
#include "GXDLMSIecTwistedPairSetup.h"
#endif //DLMS_IGNORE_IEC_TWISTED_PAIR_SETUP
#ifndef DLMS_IGNORE_NTP_SETUP
#include "GXDLMSNtpSetup.h"
#endif //DLMS_IGNORE_NTP_SETUP
#ifndef DLMS_IGNORE_COMMUNICATION_PORT_PROTECTION
#include "GXDLMSCommunicationPortProtection.h"
#endif //DLMS_IGNORE_COMMUNICATION_PORT_PROTECTION


// Reserved for internal use.
CGXDLMSObject* CGXDLMSObjectFactory::CreateObject(DLMS_OBJECT_TYPE type)
{
    switch (type)
    {
#ifndef DLMS_IGNORE_ACTION_SCHEDULE
    case DLMS_OBJECT_TYPE_ACTION_SCHEDULE:
        return new CGXDLMSActionSchedule();
#endif //DLMS_IGNORE_ACTION_SCHEDULE
#ifndef DLMS_IGNORE_ACTIVITY_CALENDAR
    case DLMS_OBJECT_TYPE_ACTIVITY_CALENDAR:
        return new CGXDLMSActivityCalendar();
#endif //DLMS_IGNORE_ACTIVITY_CALENDAR
#ifndef DLMS_IGNORE_ASSOCIATION_LOGICAL_NAME
    case DLMS_OBJECT_TYPE_ASSOCIATION_LOGICAL_NAME:
        return new CGXDLMSAssociationLogicalName();
#endif //DLMS_IGNORE_ASSOCIATION_LOGICAL_NAME
#ifndef DLMS_IGNORE_ASSOCIATION_SHORT_NAME
    case DLMS_OBJECT_TYPE_ASSOCIATION_SHORT_NAME:
        return new CGXDLMSAssociationShortName();
#endif //DLMS_IGNORE_ASSOCIATION_SHORT_NAME
#ifndef DLMS_IGNORE_AUTO_ANSWER
    case DLMS_OBJECT_TYPE_AUTO_ANSWER:
        return new CGXDLMSAutoAnswer();
#endif //DLMS_IGNORE_AUTO_ANSWER
#ifndef DLMS_IGNORE_AUTO_CONNECT
    case DLMS_OBJECT_TYPE_AUTO_CONNECT:
        return new CGXDLMSAutoConnect();
#endif //DLMS_IGNORE_AUTO_CONNECT
#ifndef DLMS_IGNORE_CLOCK
    case DLMS_OBJECT_TYPE_CLOCK:
        return new CGXDLMSClock();
#endif //DLMS_IGNORE_CLOCK
#ifndef DLMS_IGNORE_DATA
    case DLMS_OBJECT_TYPE_DATA:
        return new CGXDLMSData();
#endif //DLMS_IGNORE_DATA
#ifndef DLMS_IGNORE_DEMAND_REGISTER
    case DLMS_OBJECT_TYPE_DEMAND_REGISTER:
        return new CGXDLMSDemandRegister();
#endif //DLMS_IGNORE_DEMAND_REGISTER
#ifndef DLMS_IGNORE_MAC_ADDRESS_SETUP
    case DLMS_OBJECT_TYPE_MAC_ADDRESS_SETUP:
        return new CGXDLMSMacAddressSetup();
#endif //DLMS_IGNORE_MAC_ADDRESS_SETUP
#ifndef DLMS_IGNORE_EXTENDED_REGISTER
    case DLMS_OBJECT_TYPE_EXTENDED_REGISTER:
        return new CGXDLMSExtendedRegister();
#endif //DLMS_IGNORE_EXTENDED_REGISTER
#ifndef DLMS_IGNORE_GPRS_SETUP
    case DLMS_OBJECT_TYPE_GPRS_SETUP:
        return new CGXDLMSGPRSSetup();
#endif //DLMS_IGNORE_GPRS_SETUP
#ifndef DLMS_IGNORE_SECURITY_SETUP
    case DLMS_OBJECT_TYPE_SECURITY_SETUP:
        return new CGXDLMSSecuritySetup();
#endif //DLMS_IGNORE_SECURITY_SETUP
#ifndef DLMS_IGNORE_IEC_HDLC_SETUP
    case DLMS_OBJECT_TYPE_IEC_HDLC_SETUP:
        return new CGXDLMSIecHdlcSetup();
#endif //DLMS_IGNORE_IEC_HDLC_SETUP
#ifndef DLMS_IGNORE_IEC_LOCAL_PORT_SETUP
    case DLMS_OBJECT_TYPE_IEC_LOCAL_PORT_SETUP:
        return new CGXDLMSIECLocalPortSetup();
#endif //DLMS_IGNORE_IEC_LOCAL_PORT_SETUP
#ifndef DLMS_IGNORE_IEC_TWISTED_PAIR_SETUP
    case DLMS_OBJECT_TYPE_IEC_TWISTED_PAIR_SETUP:
        return new CGXDLMSIecTwistedPairSetup();
#endif //DLMS_IGNORE_IEC_TWISTED_PAIR_SETUP
#ifndef DLMS_IGNORE_IP4_SETUP
    case DLMS_OBJECT_TYPE_IP4_SETUP:
        return new CGXDLMSIp4Setup();
#endif //DLMS_IGNORE_IP4_SETUP
#ifndef DLMS_IGNORE_IP6_SETUP
    case DLMS_OBJECT_TYPE_IP6_SETUP:
        return new CGXDLMSIp6Setup();
#endif //DLMS_IGNORE_IP6_SETUP
#ifndef DLMS_IGNORE_MBUS_SLAVE_PORT_SETUP
    case DLMS_OBJECT_TYPE_MBUS_SLAVE_PORT_SETUP:
        return new CGXDLMSMBusSlavePortSetup();
#endif //DLMS_IGNORE_MBUS_SLAVE_PORT_SETUP
#ifndef DLMS_IGNORE_IMAGE_TRANSFER
    case DLMS_OBJECT_TYPE_IMAGE_TRANSFER:
        return new CGXDLMSImageTransfer();
#endif //DLMS_IGNORE_IMAGE_TRANSFER
#ifndef DLMS_IGNORE_DISCONNECT_CONTROL
    case DLMS_OBJECT_TYPE_DISCONNECT_CONTROL:
        return new CGXDLMSDisconnectControl();
#endif //DLMS_IGNORE_DISCONNECT_CONTROL
#ifndef DLMS_IGNORE_LIMITER
    case DLMS_OBJECT_TYPE_LIMITER:
        return new CGXDLMSLimiter();
#endif //DLMS_IGNORE_LIMITER
#ifndef DLMS_IGNORE_MBUS_CLIENT
    case DLMS_OBJECT_TYPE_MBUS_CLIENT:
        return new CGXDLMSMBusClient();
#endif //DLMS_IGNORE_MBUS_CLIENT
#ifndef DLMS_IGNORE_MODEM_CONFIGURATION
    case DLMS_OBJECT_TYPE_MODEM_CONFIGURATION:
        return new CGXDLMSModemConfiguration();
#endif //DLMS_IGNORE_MODEM_CONFIGURATION
#ifndef DLMS_IGNORE_PPP_SETUP
    case DLMS_OBJECT_TYPE_PPP_SETUP:
        return new CGXDLMSPppSetup();
#endif //DLMS_IGNORE_PPP_SETUP
#ifndef DLMS_IGNORE_PROFILE_GENERIC
    case DLMS_OBJECT_TYPE_PROFILE_GENERIC:
        return new CGXDLMSProfileGeneric();
#endif //DLMS_IGNORE_PROFILE_GENERIC
#ifndef DLMS_IGNORE_REGISTER
    case DLMS_OBJECT_TYPE_REGISTER:
        return new CGXDLMSRegister();
#endif //DLMS_IGNORE_REGISTER
#ifndef DLMS_IGNORE_REGISTER_ACTIVATION
    case DLMS_OBJECT_TYPE_REGISTER_ACTIVATION:
        return new CGXDLMSRegisterActivation();
#endif //DLMS_IGNORE_REGISTER_ACTIVATION
#ifndef DLMS_IGNORE_REGISTER_MONITOR
    case DLMS_OBJECT_TYPE_REGISTER_MONITOR:
        return new CGXDLMSRegisterMonitor();
#endif //DLMS_IGNORE_REGISTER_MONITOR
#ifndef DLMS_IGNORE_REGISTER_TABLE
    case DLMS_OBJECT_TYPE_REGISTER_TABLE:
        return new CGXDLMSCustomObject(type);
#endif //DLMS_IGNORE_REGISTER_TABLE
#ifndef DLMS_IGNORE_ZIG_BEE_SAS_STARTUP
    case DLMS_OBJECT_TYPE_ZIG_BEE_SAS_STARTUP:
        return new CGXDLMSCustomObject(type);
#endif //DLMS_IGNORE_ZIG_BEE_SAS_STARTUP
#ifndef DLMS_IGNORE_ZIG_BEE_SAS_JOIN
    case DLMS_OBJECT_TYPE_ZIG_BEE_SAS_JOIN:
        return new CGXDLMSCustomObject(type);
#endif //DLMS_IGNORE_ZIG_BEE_SAS_JOIN
#ifndef DLMS_IGNORE_ZIG_BEE_SAS_APS_FRAGMENTATION
    case DLMS_OBJECT_TYPE_ZIG_BEE_SAS_APS_FRAGMENTATION:
        return new CGXDLMSCustomObject(type);
#endif //DLMS_IGNORE_ZIG_BEE_SAS_APS_FRAGMENTATION
#ifndef DLMS_IGNORE_SAP_ASSIGNMENT
    case DLMS_OBJECT_TYPE_SAP_ASSIGNMENT:
        return new CGXDLMSSapAssignment();
#endif //DLMS_IGNORE_SAP_ASSIGNMENT
#ifndef DLMS_IGNORE_SCHEDULE
    case DLMS_OBJECT_TYPE_SCHEDULE:
        return new CGXDLMSSchedule();
#endif //DLMS_IGNORE_SCHEDULE
#ifndef DLMS_IGNORE_SCRIPT_TABLE
    case DLMS_OBJECT_TYPE_SCRIPT_TABLE:
        return new CGXDLMSScriptTable();
#endif //DLMS_IGNORE_SCRIPT_TABLE
#ifndef DLMS_IGNORE_SMTP_SETUP
    case DLMS_OBJECT_TYPE_SMTP_SETUP:
        return new CGXDLMSCustomObject(type);
#endif //DLMS_IGNORE_SMTP_SETUP
#ifndef DLMS_IGNORE_SPECIAL_DAYS_TABLE
    case DLMS_OBJECT_TYPE_SPECIAL_DAYS_TABLE:
        return new CGXDLMSSpecialDaysTable();
#endif //DLMS_IGNORE_SPECIAL_DAYS_TABLE
#ifndef DLMS_IGNORE_STATUS_MAPPING
    case DLMS_OBJECT_TYPE_STATUS_MAPPING:
        return new CGXDLMSCustomObject(type);
#endif //DLMS_IGNORE_STATUS_MAPPING
#ifndef DLMS_IGNORE_TCP_UDP_SETUP
    case DLMS_OBJECT_TYPE_TCP_UDP_SETUP:
        return new CGXDLMSTcpUdpSetup();
#endif //DLMS_IGNORE_TCP_UDP_SETUP
#ifndef DLMS_IGNORE_UTILITY_TABLES
    case DLMS_OBJECT_TYPE_UTILITY_TABLES:
        return new CGXDLMSUtilityTables();
#endif //DLMS_IGNORE_UTILITY_TABLES
#ifndef DLMS_IGNORE_MBUS_MASTER_PORT_SETUP
    case DLMS_OBJECT_TYPE_MBUS_MASTER_PORT_SETUP:
        return new CGXDLMSMBusMasterPortSetup();
#endif //DLMS_IGNORE_MBUS_MASTER_PORT_SETUP
#ifndef DLMS_IGNORE_MESSAGE_HANDLER
    case DLMS_OBJECT_TYPE_MESSAGE_HANDLER:
        return new CGXDLMSMessageHandler();
#endif //DLMS_IGNORE_MESSAGE_HANDLER
#ifndef DLMS_IGNORE_PUSH_SETUP
    case DLMS_OBJECT_TYPE_PUSH_SETUP:
        return new CGXDLMSPushSetup();
#endif //DLMS_IGNORE_PUSH_SETUP
#ifndef DLMS_IGNORE_GSM_DIAGNOSTIC
    case DLMS_OBJECT_TYPE_GSM_DIAGNOSTIC:
        return new CGXDLMSGSMDiagnostic();
#endif //DLMS_IGNORE_GSM_DIAGNOSTIC
#ifndef DLMS_IGNORE_ACCOUNT
    case DLMS_OBJECT_TYPE_ACCOUNT:
        return new CGXDLMSAccount();
#endif //DLMS_IGNORE_ACCOUNT
#ifndef DLMS_IGNORE_CREDIT
    case DLMS_OBJECT_TYPE_CREDIT:
        return new CGXDLMSCredit();
#endif //DLMS_IGNORE_CREDIT
#ifndef DLMS_IGNORE_CHARGE
    case DLMS_OBJECT_TYPE_CHARGE:
        return new CGXDLMSCharge();
#endif //DLMS_IGNORE_CHARGE
#ifndef DLMS_IGNORE_PARAMETER_MONITOR
    case DLMS_OBJECT_TYPE_PARAMETER_MONITOR:
        return new CGXDLMSParameterMonitor();
#endif //DLMS_IGNORE_PARAMETER_MONITOR
#ifndef DLMS_IGNORE_TOKEN_GATEWAY
    case DLMS_OBJECT_TYPE_TOKEN_GATEWAY:
        return new CGXDLMSTokenGateway();
#endif //DLMS_IGNORE_TOKEN_GATEWAY
#ifndef DLMS_IGNORE_COMPACT_DATA
    case DLMS_OBJECT_TYPE_COMPACT_DATA:
        return new CGXDLMSCompactData();
#endif //DLMS_IGNORE_COMPACT_DATA
#ifndef DLMS_IGNORE_LLC_SSCS_SETUP
    case DLMS_OBJECT_TYPE_LLC_SSCS_SETUP:
        return new CGXDLMSLlcSscsSetup();
#endif //DLMS_IGNORE_LLC_SSCS_SETUP
#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_PHYSICAL_LAYER_COUNTERS
    case DLMS_OBJECT_TYPE_PRIME_NB_OFDM_PLC_PHYSICAL_LAYER_COUNTERS:
        return new CGXDLMSPrimeNbOfdmPlcPhysicalLayerCounters();
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_PHYSICAL_LAYER_COUNTERS
#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_SETUP
    case DLMS_OBJECT_TYPE_PRIME_NB_OFDM_PLC_MAC_SETUP:
        return new CGXDLMSPrimeNbOfdmPlcMacSetup();
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_SETUP
#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_FUNCTIONAL_PARAMETERS
    case DLMS_OBJECT_TYPE_PRIME_NB_OFDM_PLC_MAC_FUNCTIONAL_PARAMETERS:
        return new CGXDLMSPrimeNbOfdmPlcMacFunctionalParameters();
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_FUNCTIONAL_PARAMETERS
#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_COUNTERS
    case DLMS_OBJECT_TYPE_PRIME_NB_OFDM_PLC_MAC_COUNTERS:
        return new CGXDLMSPrimeNbOfdmPlcMacCounters();
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_COUNTERS
#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_NETWORK_ADMINISTRATION_DATA
    case DLMS_OBJECT_TYPE_PRIME_NB_OFDM_PLC_MAC_NETWORK_ADMINISTRATION_DATA:
        return new CGXDLMSPrimeNbOfdmPlcMacNetworkAdministrationData();
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_MAC_NETWORK_ADMINISTRATION_DATA
#ifndef DLMS_IGNORE_PRIME_NB_OFDM_PLC_APPLICATIONS_IDENTIFICATION
    case DLMS_OBJECT_TYPE_PRIME_NB_OFDM_PLC_APPLICATIONS_IDENTIFICATION:
        return new CGXDLMSPrimeNbOfdmPlcApplicationsIdentification();
#endif //DLMS_IGNORE_PRIME_NB_OFDM_PLC_APPLICATIONS_IDENTIFICATION
#ifndef DLMS_IGNORE_IEC_8802_LLC_TYPE1_SETUP
    case DLMS_OBJECT_TYPE_IEC_8802_LLC_TYPE1_SETUP:
        return new CGXDLMSIec8802LlcType1Setup();
#endif //DLMS_IGNORE_IEC_8802_LLC_TYPE1_SETUP
#ifndef DLMS_IGNORE_IEC_8802_LLC_TYPE2_SETUP
    case DLMS_OBJECT_TYPE_IEC_8802_LLC_TYPE2_SETUP:
        return new CGXDLMSIec8802LlcType2Setup();
#endif //DLMS_IGNORE_IEC_8802_LLC_TYPE2_SETUP
#ifndef DLMS_IGNORE_IEC_8802_LLC_TYPE3_SETUP
    case DLMS_OBJECT_TYPE_IEC_8802_LLC_TYPE3_SETUP:
        return new CGXDLMSIec8802LlcType3Setup();
#endif //DLMS_IGNORE_IEC_8802_LLC_TYPE3_SETUP
#ifndef DLMS_IGNORE_SFSK_REPORTING_SYSTEM_LIST
    case DLMS_OBJECT_TYPE_SFSK_REPORTING_SYSTEM_LIST:
        return new CGXDLMSSFSKReportingSystemList();
#endif //DLMS_IGNORE_SFSK_REPORTING_SYSTEM_LIST
#ifndef DLMS_IGNORE_ARBITRATOR
    case DLMS_OBJECT_TYPE_ARBITRATOR:
        return new CGXDLMSArbitrator();
#endif //DLMS_IGNORE_ARBITRATOR
#ifndef DLMS_IGNORE_SFSK_MAC_COUNTERS
    case DLMS_OBJECT_TYPE_SFSK_MAC_COUNTERS:
        return new CGXDLMSSFSKMacCounters();
#endif //DLMS_IGNORE_SFSK_MAC_COUNTERS
#ifndef DLMS_IGNORE_SFSK_MAC_SYNCHRONIZATION_TIMEOUTS
    case DLMS_OBJECT_TYPE_SFSK_MAC_SYNCHRONIZATION_TIMEOUTS:
        return new CGXDLMSSFSKMacSynchronizationTimeouts();
#endif //DLMS_IGNORE_SFSK_MAC_SYNCHRONIZATION_TIMEOUTS
#ifndef DLMS_IGNORE_SFSK_ACTIVE_INITIATOR
    case DLMS_OBJECT_TYPE_SFSK_ACTIVE_INITIATOR:
        return new CGXDLMSSFSKActiveInitiator();
#endif //DLMS_IGNORE_SFSK_ACTIVE_INITIATOR
#ifndef DLMS_IGNORE_SFSK_PHY_MAC_SETUP
    case DLMS_OBJECT_TYPE_SFSK_PHY_MAC_SETUP:
        return new CGXDLMSSFSKPhyMacSetUp();
#endif //DLMS_IGNORE_SFSK_PHY_MAC_SETUP
#ifndef DLMS_IGNORE_NTP_SETUP
    case DLMS_OBJECT_TYPE_NTP_SETUP:
        return new CGXDLMSNtpSetup();
#endif //DLMS_IGNORE_NTP_SETUP
#ifndef DLMS_IGNORE_COMMUNICATION_PORT_PROTECTION
    case DLMS_OBJECT_TYPE_COMMUNICATION_PORT_PROTECTION:
        return new CGXDLMSCommunicationPortProtection();
#endif //DLMS_IGNORE_COMMUNICATION_PORT_PROTECTION

    default:
#ifdef _DEBUG
        printf("Unknown object: %d\r\n", type);
#endif //_DEBUG
        return NULL;
    }
}

CGXDLMSObject* CGXDLMSObjectFactory::CreateObject(DLMS_OBJECT_TYPE type, std::string ln)
{
    CGXDLMSObject* pObj = CreateObject(type);
    if (pObj != NULL)
    {
        GXHelpers::SetLogicalName(ln.c_str(), pObj->m_LN);
    }
    return pObj;
}
