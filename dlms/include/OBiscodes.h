#ifndef OBIS_CODES_H
#define OBIS_CODES_H

#include "GXIgnore.h"

static const char* OBIS_CODES_ABSTRACT_1 = "\
0.0-64.0.1.0.0-99,255;1,3,4;6,17,18;Ch. $B;Billing period counter (1);;;#$F\r\n\
0.0-64.0.1.1.255;1,3,4;6,17,18;Ch. $B;No. of available billing periods (1);;;\r\n\
0.0-64.0.1.2.0-99;1,3,4;6,9,21,25;Ch. $B;Time stamp of the billing period (1);;;#$F\r\n\
0.0-64.0.1.2.255;1,3,4;6,9,21,25;Ch. $B;Time stamp of the most recent billing period (1) closed;;;\n\
0.0-64.0.1.3.0-99,255;1,3,4;6,17,18;Ch. $B;Billing period counter (2), VZ;;;#$F\n\
0.0-64.0.1.4.255;1,3,4;6,17,18;Ch. $B;No. of available billing periods (2);;;\n\
0.0-64.0.1.5.0-99;1,3,4;6,9,21,25;Ch. $B;Time stamp of the billing period (2);;;#$F\n\
0.0-64.0.1.5.255;1,3,4;6,9,21,25;Ch. $B;Time stamp of the most recent billing period (2) closed;;;\n\
0.0-64.0.2.0.255;1,3,4;9,10,17,18;Ch. $B;Active firmware identifier;;;\n\
0.0-64.0.2.1.255;1,3,4;9,10,17,18;Ch. $B;Active firmware version;;;\n\
0.0-64.0.2.8.255;1,3,4;9,10,17,18;Ch. $B;Active firmware signature;;;\n\
0.0-64.0.9.1.255;1,3,4;9,27;Ch. $B;Local time;;;\n\
0.0-64.0.9.2.255;1,3,4;9,26;Ch. $B;Local date;;;\n\
0.0-64.1.0.0.255;8;;Ch. $B;Clock object;;#$(E+1);\n\
0.0-64.1.0.1-127.255;8;;Ch. $B;Clock object, nth instance;;#$(E+1);\n\
0.0-64.1.1.0-127.255;1,3,4;6;Ch. $B;UNIX clock;;#$(E+1);\n\
0.0-64.1.2.0-127.255;1,3,4;21;Ch. $B;High resolution clock;;#$(E+1);\n\
0.0-64.2.0.0.255;27;;Ch. $B;Modem configuration;;;\n\
0.0-64.2.1.0.255;29;;Ch. $B;Auto connect;;;\n\
0.0-64.2.2.0.255;28;;Ch. $B;Auto answer;;;\n\
0.0-64.10.0.0.255;9;;Ch. $B;Global meter reset;;;\n\
0.0-64.10.1-127.0.255;9;;Ch. $B;Global meter reset, implementation specific;#$(D+1);;\n\
0.0-64.10.0.1.255;9;;Ch. $B;MDI reset / End of billing period;;;\n\
0.0-64.10.1-127.1.255;9;;Ch. $B;MDI reset / End of billing period, implementation specific;#$(D+1);;\n\
0.0-64.10.0.100.255;9;;Ch. $B;Tariffication script table;;;\n\
0.0-64.10.1-127.100.255;9;;Ch. $B;Tariffication script table, implementation specific;#$(D+1);;\n\
0.0-64.10.0.101.255;9;;Ch. $B;Activate test mode;;;\n\
0.0-64.10.1-127.101.255;9;;Ch. $B;Activate test mode, implementation specific;#$(D+1);;\n\
0.0-64.10.0.102.255;9;;Ch. $B;Activate normal mode;;;\n\
0.0-64.10.1-127.102.255;9;;Ch. $B;Activate normal mode, implementation specific;#$(D+1);;\n\
0.0-64.10.0.103.255;9;;Ch. $B;Set output signals;;;\n\
0.0-64.10.1-127.103.255;9;;Ch. $B;Set output signals, implementation specific;#$(D+1);;\n\
0.0-64.10.0.104.255;9;;Ch. $B;Switch optical test output;;;\n\
0.0-64.10.1-127.104.255;9;;Ch. $B;Switch optical test output, implementation specific;#$(D+1);;\n\
0.0-64.10.0.105.255;9;;Ch. $B;Power quality measurement management;;;\n\
0.0-64.10.1-127.105.255;9;;Ch. $B;Power quality measurement management, implementation specific;#$(D+1);;\n\
0.0-64.10.0.106.255;9;;Ch. $B;Disconnect control;;;\n\
0.0-64.10.1-127.106.255;9;;Ch. $B;Disconnect control, implementation specific;#$(D+1);;\n\
0.0-64.10.0.107.255;9;;Ch. $B;Image activation;;;\n\
0.0-64.10.1-127.107.255;9;;Ch. $B;Image activation, implementation specific;#$(D+1);;\n\
0.0-64.10.0.108.255;9;;Ch. $B;Push script table;;;\n\
0.0-64.10.1-127.108.255;9;;Ch. $B;Push script table, implementation specific;#$(D+1);;\n\
0.0-64.10.0.109.255;9;;Ch. $B;Load profile control script table;;;\n\
0.0-64.10.1-127.109.255;9;;Ch. $B;Load profile control script table, implementation specific;#$(D+1);;\n\
0.0-64.10.0.110.255;9;;Ch. $B;M-Bus profile control script table,;;;\n\
0.0-64.10.1-127.110.255;9;;Ch. $B;M-Bus profile control script table, implementation specific;#$(D+1);;\n\
0.0-64.10.0.111.255;9;;Ch. $B;Function control script table;;;\n\
0.0-64.10.1-127.111.255;9;;Ch. $B;Function control script table, implementation specific;#$(D+1);;\n\
0.0-64.10.0.125.255;9;;Ch. $B;Broadcast script table;;;\n\
0.0-64.10.1-127.125.255;9;;Ch. $B;Broadcast script table, implementation specific;#$(D+1);;\n\
0.0-64.11.0.0-127.255;11;;Ch. $B;Special days table;;#$(E+1);\n\
0.0-64.12.0.0.255;10;;Ch. $B;Schedule;;#$(E+1);\n\
0.0-64.12.0.1-127.255;10;;Ch. $B;Schedule;;#$(E+1);\n\
0.0-64.13.0.0-127.255;20;;Ch. $B;Activity calendar;;#$(E+1);\n\
0.0-64.14.0.0.255;6;;Ch. $B;Register activation;;#$(E+1);\n\
0.0-64.14.0.1-127.255;6;;Ch. $B;Register activation;;#$(E+1);\n\
0.0-64.15.0.0.255;22;;Ch. $B;End of billing period;;;\n\
0.0-64.15.1-127.0.255;22;;Ch. $B;End of billing period, implementation specific;#$(D+1);;\n\
0.0-64.15.0.1.255;22;;Ch. $B;Disconnect control;;;\n\
0.0-64.15.1-127.1.255;22;;Ch. $B;Disconnect control, implementation specific;#$(D+1);;\n\
0.0-64.15.0.2.255;22;;Ch. $B;Image activation;;;\n\
0.0-64.15.1-127.2.255;22;;Ch. $B;Image activation, implementation specific;#$(D+1);;\n\
0.0-64.15.0.3.255;22;;Ch. $B;Output control;;;\n\
0.0-64.15.1-127.3.255;22;;Ch. $B;Output control, implementation specific;#$(D+1);;\n\
0.0-64.15.0.4.255;22;;Ch. $B;Push;;;\n\
0.0-64.15.1-127.4.255;22;;Ch. $B;Push, implementation specific;#$(D+1);;\n\
0.0-64.15.0.5.255;22;;Ch. $B;Load profile control;;;\n\
0.0-64.15.1-127.5.255;22;;Ch. $B;Load profile control, implementation specific;#$(D+1);;\n\
0.0-64.15.0.6.255;22;;Ch. $B;M-Bus profile control;;;\n\
0.0-64.15.1-127.6.255;22;;Ch. $B;M-Bus profile control, implementation specific;#$(D+1);;\n\
0.0-64.15.0.7.255;22;;Ch. $B;Function control scheduler;;;\n\
0.0-64.15.1-127.7.255;22;;Ch. $B;Function control scheduler, implementation specific;#$(D+1);;\n\
0.0-64.16.0.0.255;21;;Ch. $B;Register monitor;;#$(E+1);\n\
0.0-64.16.0.1-127.255;21;;Ch. $B;Register monitor;;#$(E+1);\n\
0.0-64.16.1.0-9.255;21;;Ch. $B;Alarm monitor;;#$(E+1);\n\
0.0-64.16.2.0-127.255;65;;Ch. $B;Parameter monitor;;#$(E+1);\n\
0.0-64.17.0.0.255;71;;Ch. $B;Limiter;;#$(E+1);\n\
0.0-64.17.0.1-127.255;71;;Ch. $B;Limiter;;#$(E+1);\n\
0.0-64.18.0.0.255;123;;Ch. $B;Array manager;;#$(E+1);\n\
0.0-64.18.0.1-127.255;123;;Ch. $B;Array manager;;#$(E+1);\n\
0.0-64.19.0-9.0.255;111;;Ch. $B;Account;;;\n\
0.0-64.19.10-19.0-127.255;112;;Ch. $B;Credit;#$(D-10);#$(E);\n\
0.0-64.19.20-29.0-127.255;113;;Ch. $B;Charge;#$(D-20);#$(E);\n\
0.0-64.19.40-49.0-127.255;115;;Ch. $B;Token gateway;#$(D-40);#$(E);\n\
0.0-64.19.50-59.1.255;1,3,4;5,6,17,18,20,21;Ch. $B;Max credit limit;#$(D-50);;\n\
0.0-64.19.50-59.2.255;1,3.4;5,6,17,18,20,21;Ch. $B;Max vend limit;#$(D-50);;\n\
0.0-64.20.0.0.255;19;;Ch. $B;IEC optical port setup;;;\n\
0.0-64.20.0.1.255;19;;Ch. $B;IEC electrical port setup;;;\n\
0.0-64.21.0.0.255;7;;Ch. $B;General local port readout;;;\n\
0.0-64.21.0.1.255;7;;Ch. $B;General display readout;;;\n\
0.0-64.21.0.2.255;7;;Ch. $B;Alternate display readout;;;\n\
0.0-64.21.0.3.255;7;;Ch. $B;Service display readout;;;\n\
0.0-64.21.0.4.255;7;;Ch. $B;List of configurable meter data;;;\n\
0.0-64.21.0.5.255;7;;Ch. $B;Additional readout profile;;#$(E-4);\n\
0.0-64.21.0.6-127.255;7;;Ch. $B;Additional readout profiles;;#$(E-4);\n\
0.0-64.21.0.0.255;1;1;Ch. $B;Standard readout parametrization;;#$(E+1);\n\
0.0-64.21.0.1-127.255;1;1;Ch. $B;Standard readout parametrization;;#$(E+1);\n\
0.0-64.22.0.0.255;23;;Ch. $B;IEC HDLC setup;;;\n\
0.0-64.23.0.0.255;24;;Ch. $B;IEC twisted pair (1) setup;;;\n\
0.0-64.23.1.0.255;43;;Ch. $B;IEC twisted pair MAC address setup;;;\n\
0.0-64.23.2.0.255;1,3,4;4,6,9,17,18;Ch. $B;IEC twisted pair fatal error register;;;\n\
0.0-64.23.3.0.255;7;;Ch. $B;IEC 62056-3-1 Short  readout;;;\n\
0.0-64.23.3.1.255;7;;Ch. $B;IEC 62056-3-1 Long readout;;;\n\
0.0-64.23.3.2-9.255;7;;Ch. $B;IEC 62056-3-1 Alternate readout profile;;#$(E-2);\n\
0.0-64.23.3.0-127.255;1;;Ch. $B;IEC 62056-3-1 readout parametrization;;;\n\
0.0-64.24.0.0.255;25;;Ch. $B;M-Bus slave port setup;;;\n\
0.0-64.24.1.0.255;72;;Ch. $B;M-Bus client;;;\n\
0.0-64.24.2.0-127.255;4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;M-Bus value;;#$(E+1);\n\
0.0-64.24.3.0-127.255;7;;Ch. $B;M-Bus profile generic;;#$(E+1);\n\
0.0-64.24.4.0.255;70;;Ch. $B;M-Bus disconnect control;;#$(E+1);\n\
0.0-64.24.5.0.255;7;;Ch. $B;M-Bus control log;;#$(E+1);\n\
0.0-64.24.6.0.255;74;;Ch. $B;M-Bus master port setup;;#$(E+1);\n\
0.0-64.24.8.0-127.255;76;;Ch. $B;DLMS/COSEM server M-Bus port setup;;;\n\
0.0-64.24.9.0-127.255;77;;Ch. $B;M-Bus diagnostic;;;\n\
0.0-64.25.0.0.255;41;;Ch. $B;TCP-UDP setup;;;\n\
0.0-64.25.1.0.255;42;;Ch. $B;IPv4 setup;;;\n\
0.0-64.25.2.0.255;43;;Ch. $B;MAC address setup;;;\n\
0.0-64.25.3.0.255;44;;Ch. $B;PPP setup;;;\n\
0.0-64.25.4.0.255;45;;Ch. $B;GPRS modem setup;;;\n\
0.0-64.25.5.0.255;46;;Ch. $B;SMTP setup;;;\n\
0.0-64.25.6.0.255;47;;Ch. $B;GSM diagnostic;;;\n\
0.0-64.25.7.0.255;48;;Ch. $B;IPv6 setup;;;\n\
0.0-64.25.9.0.255;40;;Ch. $B;Push setup;;;\n\
0.0-64.25.10.0.255;100;;Ch. $B;NTP setup;;;\n\
0.0-64.25.11.0.255;151;;Ch. $B;LTE monitoring;;;\n\
0.0-64.26.0.0.255;50;;Ch. $B;S-FSK Phy&MAC setup;;;\n\
0.0-64.26.1.0.255;51;;Ch. $B;S-FSK Active initiator;;;\n\
0.0-64.26.2.0.255;52;;Ch. $B;S-FSK MAC synchronization timeouts;;;\n\
0.0-64.26.3.0.255;53;;Ch. $B;S-FSK MAC counters;;;\n\
0.0-64.26.5.0.255;55;;Ch. $B;IEC 61334-4-32 LLC setup;;;\n\
0.0-64.26.6.0.255;56;;Ch. $B;S-FSK Reporting system list;;;\n\
0.0-64.27.0.0.255;57;;Ch. $B;ISO/IEC 8802-2 LLC Type 1 setup;;;\n\
0.0-64.27.1.0.255;58;;Ch. $B;ISO/IEC 8802-2 LLC Type 2 setup;;;\n\
0.0-64.27.2.0.255;59;;Ch. $B;ISO/IEC 8802-2 LLC Type 3 setup;;;\n\
0.0-64.28.0.0.255;80;;Ch. $B;61334-4-32 LLC SSCS setup;;;\n\
0.0-64.28.1.0.255;81;;Ch. $B;PRIME NB OFDM PLC Physical layer counters;;;\n\
0.0-64.28.2.0.255;82;;Ch. $B;PRIME NB OFDM PLC MAC setup;;;\n\
0.0-64.28.3.0.255;83;;Ch. $B;PRIME NB OFDM PLC MAC functional parameters;;;\n\
0.0-64.28.4.0.255;84;;Ch. $B;PRIME NB OFDM PLC MAC counters;;;\n\
0.0-64.28.5.0.255;85;;Ch. $B;PRIME NB OFDM PLC MAC network administration data;;;\n\
0.0-64.28.6.0.255;43;;Ch. $B;PRIME NB OFDM PLC MAC address setup;;;\n\
0.0-64.28.7.0.255;86;;Ch. $B;PRIME NB OFDM PLC Application identification;;;\n\
0.0-64.29.0.0.255;90;;Ch. $B;G3-PLC MAC layer counters;;;\n\
0.0-64.29.1.0.255;91;;Ch. $B;G3-PLC MAC setup;;;\n\
0.0-64.29.2.0.255;92;;Ch. $B;G3-PLC 6LoWPAN adaptation layer setup;;;\n\
0.0-64.30.0.0-127.255;101;;Ch. $B;ZigBee� SAS startup;;#$(E+1);\n\
0.0-64.30.1.0-127.255;102;;Ch. $B;ZigBee� SAS join;;#$(E+1);\n\
0.0-64.30.2.0-127.255;103;;Ch. $B;ZigBee� SAS APS fragmentation;;#$(E+1);\n\
0.0-64.30.3.0-127.255;104;;Ch. $B;ZigBee� network control;;#$(E+1);\n\
0.0-64.30.4.0-127.255;105;;Ch. $B;ZigBee� tunnel setup;;#$(E+1);\n\
0.0-64.31.0.0.255;73;;Ch. $B;Wireless Mode Q channel;;;\n\
0.0-64.33.0.0.255;140;;Ch. $B;HS-PLC ISO/IEC 12139-1 MAC setup;;;\n\
0.0-64.33.1.0.255;141;;Ch. $B;HS-PLC ISO/IEC 12139-1 CPAS setup;;;\n\
0.0-64.33.2.0.255;142;;Ch. $B;HS-PLC ISO/IEC 12139-1 IP SSAS setup;;;\n\
0.0-64.33.3.0.255;143;;Ch. $B;HS-PLC ISO/IEC 12139-1 HDLC SSAS setup;;;\n\
0.0.40.0.0.255;12,15;;Ch. $B;Current association;;;\n\
0.0.40.0.1.255;12,15;;Ch. $B;Association;;#$E;\n\
0.0.40.0.2-127.255;12,15;;Ch. $B;Association;;#$E;\n\
0.0.41.0.0.255;17;;Ch. $B;SAP Assignment;;;\n\
0.0.42.0.0.255;1,3;9,10;Ch. $B;COSEM Logical device name;;;\n\
0.0.43.0.0-127.255;64;;Ch. $B;Security setup;;#$E;\n\
0.0-64.43.1.0-127.255;1,3,4;6,17,18,21;Ch. $B;Invocation counter;;#$E;\n\
0.0-64.43.2.0-127.255;30;;Ch. $B;Data protection;;#$E;\n\
0.0.44.0.0-127.255;18;;Ch. $B;Image transfer;;#$E;\n\
0.0.44.1.0-127.255;122;;;Function control;;;\n\
0.0-64.65.0.0-127.255;26;;Ch. $B;Standard tables (D*128+E);$D;#$E;\n\
0.0-64.65.1-15.0-127.255;26;;Ch. $B;Standard tables (D*128+E);$D;#$E;\n\
0.0-64.65.16.0-127.255;26;;Ch. $B;Manufacturer tables ((D-16)*128+E);$D;#$E;\n\
0.0-64.65.17-31.0-127.255;26;;Ch. $B;Manufacturer tables ((D-16)*128+E);$D;#$E;\n\
0.0-64.65.32.0-127.255;26;;Ch. $B;Std pending tables ((D-32)*128+E);$D;#$E;\n\
0.0-64.65.33-47.0-127.255;26;;Ch. $B;Std pending tables ((D-32)*128+E);$D;#$E;\n\
0.0-64.65.48.0-127.255;26;;Ch. $B;Mfg pending tables ((D-48)*128+E);$D;#$E;\n\
0.0-64.65.49-63.0-127.255;26;;Ch. $B;Mfg pending tables ((D-48)*128+E);$D;#$E;\n\
0.0-64.66.0.0-127.255;62;;Ch. $B;Compact data;;#$E;\n\
0,1,7.0-64.94.0.0-255.0-255;*;*;Ch. $B;Identifiers for Finland;;;\n\
0,1,7.0-64.94.1.0-255.0-255;*;*;Ch. $B;Identifiers for the USA;;;\n\
0,1,7.0-64.94.2.0-255.0-255;*;*;Ch. $B;Identifiers for Canada;;;\n\
0,1,7.0-64.94.3.0-255.0-255;*;*;Ch. $B;Identifiers for Serbia;;;\n\
0,1,7.0-64.94.7.0-255.0-255;*;*;Ch. $B;Identifiers for Russia;;;\n\
0,1,7.0-64.94.10.0-255.0-255;*;*;Ch. $B;Identifiers for Czech;;;\n\
0,1,7.0-64.94.11.0-255.0-255;*;*;Ch. $B;Identifiers for Bulgaria;;;\n\
0,1,7.0-64.94.12.0-255.0-255;*;*;Ch. $B;Identifiers for Croatia;;;\n\
0,1,7.0-64.94.13.0-255.0-255;*;*;Ch. $B;Identifiers for Ireland;;;\n\
0,1,7.0-64.94.14.0-255.0-255;*;*;Ch. $B;Identifiers for Israel;;;\n\
0,1,7.0-64.94.15.0-255.0-255;*;*;Ch. $B;Identifiers for Ukraine;;;\n\
0,1,7.0-64.94.16.0-255.0-255;*;*;Ch. $B;Identifiers for Yugoslavia;;;\n\
0,1,7.0-64.94.20.0-255.0-255;*;*;Ch. $B;Identifiers for Egyipt;;;\n\
0,1,7.0-64.94.27.0-255.0-255;*;*;Ch. $B;Identifiers for South Africa;;;\n\
0,1,7.0-64.94.30.0-255.0-255;*;*;Ch. $B;Identifiers for Greece;;;\n\
0,1,7.0-64.94.31.0-255.0-255;*;*;Ch. $B;Identifiers for the Netherlands;;;\n\
0,1,7.0-64.94.32.0-255.0-255;*;*;Ch. $B;Identifiers for Belgium;;;\n\
0,1,7.0-64.94.33.0-255.0-255;*;*;Ch. $B;Identifiers for France;;;\n\
0,1,7.0-64.94.34.0-255.0-255;*;*;Ch. $B;Identifiers for Spain;;;\n\
0,1,7.0-64.94.35.0-255.0-255;*;*;Ch. $B;Identifiers for Portugal;;;\n\
0,1,7.0-64.94.36.0-255.0-255;*;*;Ch. $B;Identifiers for Hungary;;;\n\
0,1,7.0-64.94.37.0-255.0-255;*;*;Ch. $B;Identifiers for Lithuania;;;\n\
0,1,7.0-64.94.38.0-255.0-255;*;*;Ch. $B;Identifiers for Slovenia;;;\n\
0,1,7.0-64.94.39.0-255.0-255;*;*;Ch. $B;Identifiers for Italy;;;\n\
0,1,7.0-64.94.40.0-255.0-255;*;*;Ch. $B;Identifiers for Romania;;;\n\
0,1,7.0-64.94.41.0-255.0-255;*;*;Ch. $B;Identifiers for Switzerland;;;\n\
0,1,7.0-64.94.42.0-255.0-255;*;*;Ch. $B;Identifiers for Slovakia;;;\n\
0,1,7.0-64.94.43.0-255.0-255;*;*;Ch. $B;Identifiers for Austria;;;\n\
0,1,7.0-64.94.44.0-255.0-255;*;*;Ch. $B;Identifiers for the UK;;;\n\
0,1,7.0-64.94.45.0-255.0-255;*;*;Ch. $B;Identifiers for Denmark;;;\n\
0,1,7.0-64.94.46.0-255.0-255;*;*;Ch. $B;Identifiers for Sweden;;;\n\
0,1,7.0-64.94.47.0-255.0-255;*;*;Ch. $B;Identifiers for Norway;;;\n\
0,1,7.0-64.94.48.0-255.0-255;*;*;Ch. $B;Identifiers for Poland;;;\n\
0,1,7.0-64.94.49.0-255.0-255;*;*;Ch. $B;Identifiers for Germany;;;\n\
0,1,7.0-64.94.51.0-255.0-255;*;*;Ch. $B;Identifiers for Peru;;;\n\
0,1,7.0-64.94.52.0-255.0-255;*;*;Ch. $B;Identifiers for South Korea;;;\n\
0,1,7.0-64.94.53.0-255.0-255;*;*;Ch. $B;Identifiers for Cuba;;;\n\
0,1,7.0-64.94.54.0-255.0-255;*;*;Ch. $B;Identifiers for Argentina;;;\n\
0,1,7.0-64.94.55.0-255.0-255;*;*;Ch. $B;Identifiers for Brazil;;;\n\
0,1,7.0-64.94.56.0-255.0-255;*;*;Ch. $B;Identifiers for Chile;;;\n\
0,1,7.0-64.94.57.0-255.0-255;*;*;Ch. $B;Identifiers for Colombia;;;\n\
0,1,7.0-64.94.58.0-255.0-255;*;*;Ch. $B;Identifiers for Venezuela;;;\n\
0,1,7.0-64.94.60.0-255.0-255;*;*;Ch. $B;Identifiers for Malaysia;;;\n\
0,1,7.0-64.94.61.0-255.0-255;*;*;Ch. $B;Identifiers for Australia;;;\n\
0,1,7.0-64.94.62.0-255.0-255;*;*;Ch. $B;Identifiers for Indonesia;;;\n\
0,1,7.0-64.94.63.0-255.0-255;*;*;Ch. $B;Identifiers for the Philippines;;;\n\
0,1,7.0-64.94.64.0-255.0-255;*;*;Ch. $B;Identifiers for New Zealand;;;\n\
0,1,7.0-64.94.65.0-255.0-255;*;*;Ch. $B;Identifiers for Singapore;;;\n\
0,1,7.0-64.94.66.0-255.0-255;*;*;Ch. $B;Identifiers for Thailand;;;\n\
0,1,7.0-64.94.71.0-255.0-255;*;*;Ch. $B;Identifiers for Latvia;;;\n\
0,1,7.0-64.94.73.0-255.0-255;*;*;Ch. $B;Identifiers for Moldova;;;\n\
0,1,7.0-64.94.75.0-255.0-255;*;*;Ch. $B;Identifiers for Belarus;;;\n\
0,1,7.0-64.94.81.0-255.0-255;*;*;Ch. $B;Identifiers for Japan;;;\n\
0,1,7.0-64.94.85.0-255.0-255;*;*;Ch. $B;Identifiers for Hong Kong;;;\n\
0,1,7.0-64.94.86.0-255.0-255;*;*;Ch. $B;Identifiers for China;;;\n\
0,1,7.0-64.94.87.0-255.0-255;*;*;Ch. $B;Identifiers for Bosnia and Herzegovina;;;\n\
0,1,7.0-64.94.90.0-255.0-255;*;*;Ch. $B;Identifiers for Turkey;;;\n\
0,1,7.0-64.94.91.0-255.0-255;*;*;Ch. $B;Identifiers for India;;;\n\
0,1,7.0-64.94.92.0-255.0-255;*;*;Ch. $B;Identifiers for Pakistan;;;\n\
0,1,7.0-64.94.96.0-255.0-255;*;*;Ch. $B;Identifiers for Saudi Arabia;;;\n\
0,1,7.0-64.94.97.0-255.0-255;*;*;Ch. $B;Identifiers for the United Arab Emirates;;;\n\
0,1,7.0-64.94.98.0-255.0-255;*;*;Ch. $B;Identifiers for Iran;;;\n";

static const char* OBIS_CODES_ABSTRACT_2 = "\
0.0-64.96.1.0.255;1,3,4;6,9,10,12,17,18;Ch. $B;Device ID 1, manufacturing number;;;\n\
0.0-64.96.1.1-9.255;1,3,4;6,9,10,12,17,18;Ch. $B;Device ID;;#$(E+1);\n\
0.0-64.96.1.255.255;7,61;;Ch. $B;Complete device ID;;;\n\
0.0-64.96.1.10.255;1,3,4;6,9,10,12,17,18;Ch. $B;Metering point ID;;;\n\
0.0-64.96.2.0.255;1,3,4;6,17,18,21;Ch. $B;No. of configuration program changes;;;\n\
0.0-64.96.2.1.255;1,3,4;9,25,26;Ch. $B;Date of last configuration program change;;;\n\
0.0-64.96.2.2.255;1,3,4;9,25,26;Ch. $B;Date of last time switch program change;;;\n\
0.0-64.96.2.3.255;1,3,4;9,25,26;Ch. $B;Date of last ripple control program change;;;\n\
0.0-64.96.2.4.255;1,3,4;4,6,9,17,18,21;Ch. $B;Status of security switches;;;\n\
0.0-64.96.2.5.255;1,3,4;9,25,26;Ch. $B;Date of last calibration;;;\n\
0.0-64.96.2.6.255;1,3,4;9,25,26;Ch. $B;Date of next configuration program change;;;\n\
0.0-64.96.2.7.255;1,3,4;9,25,26;Ch. $B;Date of activation of the passive calendar;;;\n\
0.0-64.96.2.10.255;1,3,4;6,17,18,21;Ch. $B;No. of protected configuration program changes;;;\n\
0.0-64.96.2.11.255;1,3,4;9,25,26;Ch. $B;Date of last protected configuration program change;;;\n\
0.0-64.96.2.12.255;1,3,4;9,25,26;Ch. $B;Date (corrected) of last clock synchronisation / setting;;;\n\
0.0-64.96.2.13.255;1,3,4;9,25,26;Ch. $B;Date of last firmware activation;;;\n\
0.0-64.96.3.0.255;1,3,4,63,7,61;3,4,6,9,17,18,21;Ch. $B;State of input/output control signals, global;;;\n\
0.0-64.96.3.1.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;State of the input control signals;;(status word #$E);\n\
0.0-64.96.3.2.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;State of the output control signals;;(status word #$E);\n\
0.0-64.96.3.3.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;State of input/output control signals;;(status word #$E);\n\
0.0-64.96.3.4.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;State of input/output control signals;;(status word #$E);\n\
0.0-64.96.3.10.255;70;;Ch. $B;Disconnect control;;;\n\
0.0-64.96.3.20-29.255;68;;Ch. $B;Arbitrator;;#$(E-20);\n\
0.0-64.96.4.0.255;1,3,4,63,7,61;3,4,6,9,17,18,21;Ch. $B;State of the internal control signals, global;;;\n\
0.0-64.96.4.1.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;State of the internal control signals;;(status word #$E);\n\
0.0-64.96.4.2.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;State of the internal control signals;;(status word #$E);\n\
0.0-64.96.4.3.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;State of the internal control signals;;(status word #$E);\n\
0.0-64.96.4.4.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;State of the internal control signals;;(status word #$E);\n\
0.0-64.96.5.0.255;1,3,4,63,7,61;3,4,6,9,17,18,21;Ch. $B;Internal operating status, global;;;\n\
0.0-64.96.5.1.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
0.0-64.96.5.2.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
0.0-64.96.5.3.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
0.0-64.96.5.4.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
0.0-64.96.6.0.255;3,1,4;6,17,18,21;Ch. $B;Battery use time counter;;;\n\
0.0-64.96.6.1.255;3,1,4;6,17,18,21;Ch. $B;Battery charge display;;;\n\
0.0-64.96.6.2.255;3,1,4;9,25,26;Ch. $B;Date of next battery change;;;\n\
0.0-64.96.6.3.255;3,1,4;5,6,15,16,17,18,20,21,23,24;Ch. $B;Battery voltage;;;\n\
0.0-64.96.6.4.255;3,1,4;5,6,15,16,17,18,20,21,23,24;Ch. $B;Battery initial capacity;;;\n\
0.0-64.96.6.5.255;3,1,4;9,25,26;Ch. $B;Battery installation date and time;;;\n\
0.0-64.96.6.6.255;3,1,4;6,17,18,21;Ch. $B;Battery estimated remaining use time;;;\n\
0.0-64.96.6.10.255;3,1,4;6,17,18,21;Ch. $B;Aux. supply use time counter;;;\n\
0.0-64.96.6.11.255;3,1,4;5,6,15,16,17,18,20,21,23,24;Ch. $B;Aux. voltage (measured);;;\n\
0.0-64.96.7.0.255;1,3,4;6,17,18,21;Ch. $B;No. of power failures;in all three phases;;\n\
0.0-64.96.7.1.255;1,3,4;6,17,18,21;Ch. $B;No. of power failures;in phase L1;;\n\
0.0-64.96.7.2.255;1,3,4;6,17,18,21;Ch. $B;No. of power failures;in phase L2;;\n\
0.0-64.96.7.3.255;1,3,4;6,17,18,21;Ch. $B;No. of power failures;in phase L3;;\n\
0.0-64.96.7.4.255;1,3,4;6,17,18,21;Ch. $B;No. of power failures;Auxiliary power supply;;\n\
0.0-64.96.7.21.255;1,3,4;6,17,18,21;Ch. $B;No. of power failures;in any phase;;\n\
0.0-64.96.7.5.255;1,3,4;6,17,18,21;Ch. $B;No. of long power failures;in all three phases;;\n\
0.0-64.96.7.6.255;1,3,4;6,17,18,21;Ch. $B;No. of long power failures;in phase L1;;\n\
0.0-64.96.7.7.255;1,3,4;6,17,18,21;Ch. $B;No. of long power failures;in phase L2;;\n\
0.0-64.96.7.8.255;1,3,4;6,17,18,21;Ch. $B;No. of long power failures;in phase L3;;\n\
0.0-64.96.7.9.255;1,3,4;6,17,18,21;Ch. $B;No. of long power failures;in any phase;;\n\
0.0-64.96.7.10.255;1,3,4;6,9,21,25,;Ch. $B;Time of power failure;in all three phases;;\n\
0.0-64.96.7.11.255;1,3,4;6,9,21,25,;Ch. $B;Time of power failure;in phase L1;;\n\
0.0-64.96.7.12.255;1,3,4;6,9,21,25,;Ch. $B;Time of power failure;in phase L2;;\n\
0.0-64.96.7.13.255;1,3,4;6,9,21,25,;Ch. $B;Time of power failure;in phase L3;;\n\
0.0-64.96.7.14.255;1,3,4;6,9,21,25,;Ch. $B;Time of power failure;in any phase;;\n\
0.0-64.96.7.15.255;1,3,4;6,17,18,21;Ch. $B;Duration of long power failure;in all three phases;;\n\
0.0-64.96.7.16.255;1,3,4;6,17,18,21;Ch. $B;Duration of long power failure;in phase L1;;\n\
0.0-64.96.7.17.255;1,3,4;6,17,18,21;Ch. $B;Duration of long power failure;in phase L2;;\n\
0.0-64.96.7.18.255;1,3,4;6,17,18,21;Ch. $B;Duration of long power failure;in phase L3;;\n\
0.0-64.96.7.19.255;1,3,4;6,17,18,21;Ch. $B;Duration of long power failure;in any phase;;\n\
0.0-64.96.7.20.255;1,3,4;6,17,18,21;Ch. $B;Time threshold for long of power failure;;;\n\
0.0-64.96.8.0.255;3,4,1;6,17,18,21;Ch. $B;Time of operation, total;;;\n\
0.0-64.96.8.1-63.255;3,4,1;6,17,18,21;Ch. $B;Time of operation;;Rate $E;\n\
0.0-64.96.9.0.255;3,4;5,6,15,16,17,18,20,21,23,24;Ch. $B;Ambient temperature;;;\n\
0.0-64.96.9.1.255;3,4;5,6,15,16,17,18,20,21,23,24;Ch. $B;Ambient pressure;;;\n\
0.0-64.96.9.2.255;3,4;5,6,15,16,17,18,20,21,23,24;Ch. $B;Relative humidity;;;\n\
0.0-64.96.10.1.255;1,3,4,63;4,6,9,17,18,21;Ch. $B;Status register;;#$E;\n\
0.0-64.96.10.2.255;1,3,4,63;4,6,9,17,18,21;Ch. $B;Status register;;#$E;\n\
0.0-64.96.10.3.255;1,3,4,63;4,6,9,17,18,21;Ch. $B;Status register;;#$E;\n\
0.0-64.96.10.4.255;1,3,4,63;4,6,9,17,18,21;Ch. $B;Status register;;#$E;\n\
0.0-64.96.10.5.255;1,3,4,63;4,6,9,17,18,21;Ch. $B;Status register;;#$E;\n\
0.0-64.96.10.6.255;1,3,4,63;4,6,9,17,18,21;Ch. $B;Status register;;#$E;\n\
0.0-64.96.10.7.255;1,3,4,63;4,6,9,17,18,21;Ch. $B;Status register;;#$E;\n\
0.0-64.96.10.8.255;1,3,4,63;4,6,9,17,18,21;Ch. $B;Status register;;#$E;\n\
0.0-64.96.10.9.255;1,3,4,63;4,6,9,17,18,21;Ch. $B;Status register;;#$E;\n\
0.0-64.96.10.10.255;1,3,4,63;4,6,9,17,18,21;Ch. $B;Status register;;#$E;\n\
0.0-64.96.11.0-99.255;1,3,4;5,6,15,16,17,18,22;Ch. $B;Event code;;#$(E+1);\n\
0.0-64.96.12.1.255;1,3,4;6,17,18,21;Ch. $B;Comm. port parameters;No. of connections;;\n\
0.0-64.96.12.4.255;1,3,4;9,10;Ch. $B;Comm. port parameters;Parameter 1;;\n\
0.0-64.96.12.5.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Comm. port parameters;GSM field strength;;\n\
0.0-64.96.12.6.255;1,3,4;9;Ch. $B;Comm. port parameters;Telephone number / Communication address of the physical device;;\n\
0.0-64.96.13.0.255;1,3,4;9,10;Ch. $B;Consumer message via local consumer information port;;;\n\
0.0-64.96.13.1.255;1,3,4;9,10;Ch. $B;Consumer message via the meter display and/or via local consumer information port;;;\n\
0.0-64.96.14.0-15.255;1,3,4;6,9,15,17,18,21;Ch. $B;Currently active tariff;;#$(E+1);\n\
0.0-64.96.15.0-99.255;1,3,4;6,17,18,21;Ch. $B;Event counter;;#$(E+1);\n\
0.0-64.96.16.0-9.255;1,3,4;9;Ch. $B;Profile entry digital signature;;#$(E+1);\n\
0.0-64.96.20.0.255;1,3,4;6,17,18;Ch. $B;Meter open event counter;;;\n\
0.0-64.96.20.1.255;1,3,4;6,9,25;Ch. $B;Meter open event, time stamp of current event occurrence;;;\n\
0.0-64.96.20.2.255;1,3,4;6,17,18;Ch. $B;Meter open event, duration of current event;;;\n\
0.0-64.96.20.3.255;1,3,4;6,17,18;Ch. $B;Meter open event, cumulative duration;;;\n\
0.0-64.96.20.5.255;1,3,4;6,17,18;Ch. $B;Terminal cover open event counter;;;\n\
0.0-64.96.20.6.255;1,3,4;6,9,25;Ch. $B;Terminal cover open event, time stamp of current event occurrence;;;\n\
0.0-64.96.20.7.255;1,3,4;6,17,18;Ch. $B;Terminal cover open event, duration of current event;;;\n\
0.0-64.96.20.8.255;1,3,4;6,17,18;Ch. $B;Terminal cover open event, cumulative duration;;;\n\
0.0-64.96.20.10.255;1,3,4;6,17,18;Ch. $B;Tilt event counter;;;\n\
0.0-64.96.20.11.255;1,3,4;6,9,25;Ch. $B;Tilt event, time stamp of current event occurrence;;;\n\
0.0-64.96.20.12.255;1,3,4;6,17,18;Ch. $B;Tilt event, duration of current event;;;\n\
0.0-64.96.20.13.255;1,3,4;6,17,18;Ch. $B;Tilt event, cumulative duration;;;\n\
0.0-64.96.20.15.255;1,3,4;6,17,18;Ch. $B;Strong DC magnetic field event counter;;;\n\
0.0-64.96.20.16.255;1,3,4;6,9,25;Ch. $B;Strong DC magnetic field event, time stamp of current event occurrence;;;\n\
0.0-64.96.20.17.255;1,3,4;6,17,18;Ch. $B;Strong DC magnetic field event, duration of current event;;;\n\
0.0-64.96.20.18.255;1,3,4;6,17,18;Ch. $B;Strong DC magnetic field event, cumulative duration;;;\n\
0.0-64.96.20.20.255;1,3,4;6,17,18;Ch. $B;Supply control switch / valve tamper event counter;;;\n\
0.0-64.96.20.21.255;1,3,4;6,9,25;Ch. $B;Supply control switch / valve tamper event, time stamp of current event occurrence;;;\n\
0.0-64.96.20.22.255;1,3,4;6,17,18;Ch. $B;Supply control switch / valve tamper event, duration of current event;;;\n\
0.0-64.96.20.23.255;1,3,4;6,17,18;Ch. $B;Supply control switch / valve tamper event, cumulative duration;;;\n\
0.0-64.96.20.25.255;1,3,4;6,17,18;Ch. $B;Metrology tamper event counter;;;\n\
0.0-64.96.20.26.255;1,3,4;6,9,25;Ch. $B;Metrology tamper event, time stamp of current event occurrence;;;\n\
0.0-64.96.20.27.255;1,3,4;6,17,18;Ch. $B;Metrology tamper event, duration of current event;;;\n\
0.0-64.96.20.28.255;1,3,4;6,17,18;Ch. $B;Metrology tamper event, cumulative duration;;;\n\
0.0-64.96.20.29.255;1,3,4;;Ch. $B;Reserved;;;\n\
0.0-64.96.20.30.255;1,3,4;6,17,18;Ch. $B;Communication tamper event counter;;;\n\
0.0-64.96.20.31.255;1,3,4;6,9,25;Ch. $B;Communication tamper event, time stamp of current event occurrence;;;\n\
0.0-64.96.20.32.255;1,3,4;6,17,18;Ch. $B;Communication tamper event, duration of current event;;;\n\
0.0-64.96.20.33.255;1,3,4;6,17,18;Ch. $B;Communication tamper event, cumulative duration;;;\n\
0.0-64.96.50-99.0-255.0-255;1,3,4,7,61,63;*;Ch. $B;Man. spec. abstract object;;;\n\
0,1,7.0-64.97.97.0.255;1,3,4;4,6,9,17,18;Ch. $B;Error object;;#$(E+1);\n\
0,1,7.0-64.97.97.1.255;1,3,4;4,6,9,17,18;Ch. $B;Error object;;#$(E+1);\n\
0,1,7.0-64.97.97.2.255;1,3,4;4,6,9,17,18;Ch. $B;Error object;;#$(E+1);\n\
0,1,7.0-64.97.97.3.255;1,3,4;4,6,9,17,18;Ch. $B;Error object;;#$(E+1);\n\
0,1,7.0-64.97.97.4.255;1,3,4;4,6,9,17,18;Ch. $B;Error object;;#$(E+1);\n\
0,1,7.0-64.97.97.5.255;1,3,4;4,6,9,17,18;Ch. $B;Error object;;#$(E+1);\n\
0,1,7.0-64.97.97.6.255;1,3,4;4,6,9,17,18;Ch. $B;Error object;;#$(E+1);\n\
0,1,7.0-64.97.97.7.255;1,3,4;4,6,9,17,18;Ch. $B;Error object;;#$(E+1);\n\
0,1,7.0-64.97.97.8.255;1,3,4;4,6,9,17,18;Ch. $B;Error object;;#$(E+1);\n\
0,1,7.0-64.97.97.9.255;1,3,4;4,6,9,17,18;Ch. $B;Error object;;#$(E+1);\n\
0,1,7.0-64.97.97.255.255;7,61;;Ch. $B;Error profile object;;;\n\
0.0-64.97.98.0-9.255;1,3,4;4,6,9,17,18;Ch. $B;Alarm register object;;#$(E+1);\n\
0.0-64.97.98.255.255;7,61;;Ch. $B;Alarm register profile object;;;\n\
0.0-64.97.98.10-19.255;1,3,4;4,6,9,17,18;Ch. $B;Alarm filter object;;#$(E-9);\n\
0.0-64.97.98.20-29.255;1,3,4;4,6,9,17,18;Ch. $B;Alarm descriptor object;;#$(E-9);\n\
0.0-64.98.1.0-127,255.0-99;7;;Ch. $B;Data of billing period;Scheme 1;#$(E+1);Billing period $F\n\
0.0-64.98.1.0-127,255.101-125;7;;Ch. $B;Data of billing period;Scheme 1;#$(E+1);$(F-100) last billing periods\n\
0.0-64.98.1.0-127,255.126,255;7;;Ch. $B;Data of billing period;Scheme 1;#$(E+1);Unspecified number of most recent billing periods\n\
0.0-64.98.2.0-127,255.0-99;7;;Ch. $B;Data of billing period;Scheme 2;#$(E+1);Billing period $F\n\
0.0-64.98.2.0-127,255.101-125;7;;Ch. $B;Data of billing period;Scheme 2;#$(E+1);$(F-100) last billing periods\n\
0.0-64.98.2.0-127,255.126,255;7;;Ch. $B;Data of billing period;Scheme 2;#$(E+1);Unspecified number of most recent billing periods\n\
0.0-64.98.10.0-127.0-99;61;;Ch. $B;Register table objects, general use;;#$(E+1);\n\
0.0-64.98.10.0-127.101-125;61;;Ch. $B;Register table objects, general use;;#$(E+1);\n\
0.0-64.98.10.0-127.126,255;61;;Ch. $B;Register table objects, general use;;#$(E+1);\n\
0.0-64.99.1.0-127.255;7;;Ch. $B;Load profile with recording period 1;;#$(E+1);\n\
0.0-64.99.2.0-127.255;7;;Ch. $B;Load profile with recording period 2;;#$(E+1);\n\
0.0-64.99.3.0.255;7;;Ch. $B;Load profile during test;;;\n\
0.0-64.99.12.0-127.255;7;;Ch. $B;Connection profile;;#$(E+1);\n\
0.0-64.99.13.0-127.255;7;;Ch. $B;GSM diagnostic profile;;#$(E+1);\n\
0.0-64.99.14.0-127.255;7;;Ch. $B;Charge collection history (Payment metering);;#$(E+1);\n\
0.0-64.99.15.0-127.255;7;;Ch. $B;Token credit history (Payment metering);;#$(E+1);\n\
0.0-64.99.16.0-127.255;7;;Ch. $B;Parameter monitor log;;#$(E+1);\n\
0.0-64.99.17.0-127.255;7;;Ch. $B;Token transfer log (Payment metering);;#$(E+1);\n\
0.0-64.99.18.0-127.255;7;;Ch. $B;LTE monitoring profile;;#$(E+1);\n\
0,1,7.0-64.99.98.0-127.255;7;;Ch. $B;Event log;;#$(E+1);\n\
0,1,7.0-64.127.0-255.0-255.0-255;*;*;Ch. $B;Inactive object;;;\n\
0,1,7.65-127.0-255.0-255.0-255.0-255;*;*;Ch. $B;Utility specific objects;;;\n\
0.128-199.0-199,255.0-255.0-255.0-255;*;*;Manufacturer specific;;;;\n\
0.0-199,255.128-199,240.0-255.0-255.0-255;*;*;Manufacturer specific;;;;\n\
0.0-199,255.0-199,255.128-254.0-255.0-255;*;*;Manufacturer specific;;;;\n\
0.0-199,255.0-199,255.0-255.128-254.0-255;*;*;Manufacturer specific;;;;\n\
0.0-199,255.0-199,255.0-255.0-255.128-254;*;*;Manufacturer specific;;;;\n";

#ifndef DLMS_IGNORE_OBIS_ELECTRICITY
static const char* OBIS_CODES_ELECTRICITY_1 = "\
1.0-64.0.0.0-9.255;1,3,4;6,9,10,17,18;Ch. $B;Electricity ID;;#$(E+1);\n\
1.0-64.0.0.255.255;7,61;;Ch. $B;Complete combined electricity ID;;;\n\
1.0-64.0.1.0.0-99,255;1,3,4;6,17,18;Ch. $B;Billing period counter (1);;;#$F\n\
1.0-64.0.1.1.255;1,3,4;6,17,18;Ch. $B;No. of available billing periods (1);;;\n\
1.0-64.0.1.2.0-99;1,3,4;6,9,21,25;Ch. $B;Time stamp of the billing period (1);;;#$F\n\
1.0-64.0.1.2.255;1,3,4;6,9,21,25;Ch. $B;Time stamp of the most recent billing period closed (1);;;\n\
1.0-64.0.1.3.0-99,255;1,3,4;6,17,18;Ch. $B;Billing period counter (2);;;$F\n\
1.0-64.0.1.4.255;1,3,4;6,17,18;Ch. $B;No. of available billing periods (2);;;\n\
1.0-64.0.1.5.0-99;1,3,4;6,9,21,25;Ch. $B;Time stamp of the billing period (2);;;#$F\n\
1.0-64.0.1.5.255;1,3,4;6,9,21,25;Ch. $B;Time stamp of the most recent billing period closed (2);;;\n\
1.0-64.0.2.0.255;1,3,4;9,10,17,18;Ch. $B;Active firmware identifier;;;\n\
1.0-64.0.2.1.255;1,3,4;9,10,17,18;Ch. $B;Parameter record number;;;\n\
1.0-64.0.2.1.1;1,3,4;9,10,17,18;Ch. $B;Parameter number line 1;;;\n\
1.0-64.0.2.2.255;1,3,4;9,10,17,18;Ch. $B;Time switch program number;;;\n\
1.0-64.0.2.3.255;1,3,4;9,10,17,18;Ch. $B;RCR program number;;;\n\
1.0-64.0.2.4.255;1,3,4;9,10,17,18,22;Ch. $B;Meter connection diagram ID;;;\n\
1.0-64.0.2.7.255;1,3,4;9,10,17,18;Ch. $B;Passive calendar name;;;\n\
1.0-64.0.2.8.255;1,3,4;9,10,17,18;Ch. $B;Active firmware signature;;;\n\
1.0-64.0.3.0.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Meter constant;Active energy, metrological LED;;\n\
1.0-64.0.3.1.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Meter constant;Reactive energy, metrological LED;;\n\
1.0-64.0.3.2.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Meter constant;Apparent energy, metrological LED;;\n\
1.0-64.0.3.3.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Meter constant;Active energy, output pulse;;\n\
1.0-64.0.3.4.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Meter constant;Reactive energy, output pulse;;\n\
1.0-64.0.3.5.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Meter constant;Apparent energy, output pulse;;\n\
1.0-64.0.3.6.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Meter constant;Volt-squared hours, metrological LED;;\n\
1.0-64.0.3.7.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Meter constant;Ampere-squared hours, metrological LED;;\n\
1.0-64.0.3.8.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Meter constant;Volt-squared hours, output pulse;;\n\
1.0-64.0.3.9.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Meter constant;Ampere-squared hours, output pulse;;\n\
1.0-64.0.4.0.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Reading factor for power;;;\n\
1.0-64.0.4.1.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Reading factor for energy;;;\n\
1.0-64.0.4.2.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Transformer ratio - current (numerator);;;\n\
1.0-64.0.4.3.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Transformer ratio - voltage (numerator);;;\n\
1.0-64.0.4.4.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Overall transformer ratio (numerator);;;\n\
1.0-64.0.4.5.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Transformer ratio - current (denominator);;;\n\
1.0-64.0.4.6.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Transformer ratio - voltage (denominator);;;\n\
1.0-64.0.4.7.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Overall transformer ratio - (denominator);;;\n\
1.0-64.0.5.1.1-4;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Demand limit;;;#$F\n\
1.0-64.0.5.2.1-9;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Demand limit;;;Rate #$F\n\
1.0-64.0.6.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Nominal voltage;;;\n\
1.0-64.0.6.1.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Basic/nominal current;;;\n\
1.0-64.0.6.2.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Nominal frequency;;;\n\
1.0-64.0.6.3.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Maximum current;;;\n\
1.0-64.0.6.4.0-99,255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Reference voltage for power quality measurement;;;\n\
1.0-64.0.6.5.0-99,255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Reference voltage of aux. power supply;;;\n\
1.0-64.0.7.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse values or constant;Active energy;;\n\
1.0-64.0.7.1.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse values or constant;Reactive energy;;\n\
1.0-64.0.7.2.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse values or constant;Apparent energy;;\n\
1.0-64.0.7.3.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse values or constant;Volt-squared hours;;\n\
1.0-64.0.7.4.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse values or constant;Ampere-squared hours;;\n\
1.0-64.0.7.5.255;1,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse values or constant;Unitless quantities;;\n\
1.0-64.0.7.10.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse values or constant;Active energy, export;;\n\
1.0-64.0.7.11.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse values or constant;Reactive energy, export;;\n\
1.0-64.0.7.12.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse values or constant;Apparent energy, export;;\n\
1.0-64.0.8.0.255;3,1,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Measurement period 1,  for averaging scheme 1;;;\n\
1.0-64.0.8.1.255;3,1,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Measurement period 2,  for averaging scheme 2;;;\n\
1.0-64.0.8.2.255;3,1,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Measurement period 3,  for instantaneous value;;;\n\
1.0-64.0.8.3.255;3,1,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Measurement period 4 for test value;;;\n\
1.0-64.0.8.4.255;3,1,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Recording interval 1, for load profile;;;\n\
1.0-64.0.8.5.255;3,1,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Recording interval 2, for load profile;;;\n\
1.0-64.0.8.6.255;3,1,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Billing period (Billing period 1 if there are two billing periods);;;\n\
1.0-64.0.8.7.255;3,1,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Billing period 2;;;\n\
1.0-64.0.8.8.255;3,1,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Measurement period 4,  for harmonics measurement;;;\n\
1.0-64.0.9.0.255;3,1,4;6,17,18;Ch. $B;Time expired since last end of billing period;;;\n\
1.0-64.0.9.1.255;1,3,4;9,27;Ch. $B;Local time;;;\n\
1.0-64.0.9.2.255;1,3,4;9,26;Ch. $B;Local date;;;\n\
1.0-64.0.9.3.255;1,3,4;;Ch. $B;Reserved for Germany;;;\n\
1.0-64.0.9.4.255;1,3,4;;Ch. $B;Reserved for Germany;;;\n\
1.0-64.0.9.5.255;1,3,4;6,15,17,18;Ch. $B;Week day (0...7);;;\n\
1.0-64.0.9.6.255;1,3,4;9;Ch. $B;Time of last reset;;;\n\
1.0-64.0.9.7.255;1,3,4;9;Ch. $B;Date of last reset;;;\n\
1.0-64.0.9.8.255;3,1,4;6,15,17,18;Ch. $B;Output pulse duration;;;\n\
1.0-64.0.9.9.255;3,4,1;6,15,17,18;Ch. $B;Clock synchronisation window;;;\n\
1.0-64.0.9.10.255;3,4,1;22;Ch. $B;Clock synchronisation method;;;\n\
1.0-64.0.9.11.255;3,4,1;6,15,17,18;Ch. $B;Clock time shift limit;;;\n\
1.0-64.0.9.12.255;3,1,4;6,15,17,18;Ch. $B;Billing period reset lockout time (First billing period scheme if there are more than one);;;\n\
1.0-64.0.9.13.255;3,1,4;6,17,18;Ch. $B;Time expired since last end of billing period (Second billing period scheme);;;\n\
1.0-64.0.9.14.255;1,3,4;9;Ch. $B;Time of last reset (Second billing period scheme);;;\n\
1.0-64.0.9.15.255;1,3,4;9;Ch. $B;Date of last reset (Second billing period scheme);;;\n\
1.0-64.0.9.16.255;3,1,4;6,15,17,18;Ch. $B;Billing period reset lockout time (Second billing period scheme);;;\n\
1.0-64.0.10.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Transformer magnetic losses Xm;;;\n\
1.0-64.0.10.1.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Transformer iron losses RFe;;;\n\
1.0-64.0.10.2.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Line resistance losses RCu;;;\n\
1.0-64.0.10.3.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Line reactance losses Xs;;;\n\
1.0-64.0.11.1.255;1,3;22;Ch. $B;Measurement algorithm;Active power;;\n\
1.0-64.0.11.2.255;1,3;22;Ch. $B;Measurement algorithm;Active energy;;\n\
1.0-64.0.11.3.255;1,3;22;Ch. $B;Measurement algorithm;Reactive power;;\n\
1.0-64.0.11.4.255;1,3;22;Ch. $B;Measurement algorithm;Reactive energy;;\n\
1.0-64.0.11.5.255;1,3;22;Ch. $B;Measurement algorithm;Apparent power;;\n\
1.0-64.0.11.6.255;1,3;22;Ch. $B;Measurement algorithm;Apparent energy;;\n\
1.0-64.0.11.7.255;1,3;22;Ch. $B;Measurement algorithm;Power factor calculation;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.0.0.255;3,4,5;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Billing period avg. (since last reset);Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.0.1-63.255;3,4,5;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Billing period avg. (since last reset);Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.0.0-63.0-99;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Billing period avg. (since last reset);Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.0.0-63.101-125;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Billing period avg. (since last reset);Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.0.0-63.126,255;,7;;Ch. $B;$1;Billing period avg. (since last reset);Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.1.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. min. 1;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.1.1-63.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. min. 1;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.1.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. min. 1;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.1.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. min. 1;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.1.0-63.126,255;,7;;Ch. $B;$1;Cum. min. 1;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.2.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. max. 1;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.2.1-63.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. max. 1;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.2.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. max. 1;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.2.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. max. 1;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.2.0-63.126,255;,7;;Ch. $B;$1;Cum. max. 1;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.3.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. 1;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.3.1-63.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. 1;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.3.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. 1;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.3.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. 1;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.3.0-63.126;,7;;Ch. $B;$1;Min. 1;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.4.0-63.255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 1;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.5.0-63.255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Last avg. 1;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.6.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. 1;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.6.1-63.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. 1;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.6.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. 1;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.6.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. 1;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.6.0-63.126;,7;;Ch. $B;$1;Max. 1;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-13,15-20,21-33,35-40,41-53,55-60,61-73,75-80,84-92,100-107,124-126.7.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Inst. value;;\n\
1.0-64.14,34,54,74.7.0,255.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Inst. value;;\n";

static const char* OBIS_CODES_ELECTRICITY_2 = "\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.8.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 1;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.8.1-63.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 1;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.8.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 1;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.8.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 1;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.8.0-63.126,255;,7;;Ch. $B;$1;Time integral 1;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.9.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 2;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.9.1-63.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 2;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.9.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 2;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.9.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 2;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.9.0-63.126,255;,7;;Ch. $B;$1;Time integral 2;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.10.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 3;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.10.1-63.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 3;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.10.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 3;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.10.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 3;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.10.0-63.126,255;,7;;Ch. $B;$1;Time integral 3;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.11.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. min. 2;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.11.1-63.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. min. 2;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.11.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. min. 2;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.11.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. min. 2;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.11.0-63.126,255;,7;;Ch. $B;$1;Cum. min. 2;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.12.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. max. 2;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.12.1-63.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. max. 2;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.12.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. max. 2;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.12.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. max. 2;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.12.0-63.126,255;,7;;Ch. $B;$1;Cum. max. 2;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.13.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. 2;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.13.1-63.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. 2;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.13.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. 2;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.13.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. 2;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.13.0-63.126;,7;;Ch. $B;$1;Min. 2;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.14.0-63.255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 2;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.15.0-63.255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Last avg. 2;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.16.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. 2;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.16.1-63.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. 2;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.16.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. 2;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.16.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. 2;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.16.0-63.126;,7;;Ch. $B;$1;Max. 2;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.17.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 7;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.18.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 8;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.19.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 9;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.20.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 10;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.21.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. min. 3;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.21.1-63.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. min. 3;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.21.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. min. 3;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.21.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. min. 3;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.21.0-63.126,255;,7;;Ch. $B;$1;Cum. min. 3;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.22.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. max. 3;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.22.1-63.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. max. 3;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.22.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. max. 3;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.22.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Cum. max. 3;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.22.0-63.126,255;,7;;Ch. $B;$1;Cum. max. 3;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.23.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. 3;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.23.1-63.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. 3;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.23.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. 3;Rate $E (0 is total);Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.23.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. 3;Rate $E (0 is total);$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.23.0-63.126;,7;;Ch. $B;$1;Min. 3;Rate $E (0 is total);Unspecified number of most recent billing periods\n\
1.0-64.1-13,15-20,21-33,35-40,41-53,55-60,61-73,75-80,84-92,100-107,124-126.24.0.255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 3;;\n\
1.0-64.14,34,54,74.24.0,255.255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 3;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.25.0-63.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Last avg. 3;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.26.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. 3;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.26.1-63.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. 3;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.26.0-63.0-99;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. 3;;Billing period $F\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.26.0-63.101-125;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. 3;;$(F-100). last / $(F-100) last billing period(s)\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.26.0-63.126;,7;;Ch. $B;$1;Max. 3;;Unspecified number of most recent billing periods\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.27.0-63,255.255;5,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 5;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.28.0-63,255.255;5,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 6;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.29.0-63,255.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 5;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.30.0-63,255.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 6;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.49.0-63,255.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average for recording interval 1;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.50.0-63,255.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average for recording interval 2;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.51.0-63,255.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. for recording interval 1;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.52.0-63,255.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Min. for recording interval 2;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.53.0-63,255.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. for recording interval 1;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.54.0-63,255.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Max. for recording interval 2;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.46.0-63.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Contracted value;Rate $E (0 is total);\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.55.0,255.255;3,5;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Test avg.;;\n\
1.0-64.1-20,21-40,41-60,61-80,82,84-92,100-107,124-126.58.0,255.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Time integral 4;;\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.31.0-63.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Under limit threshold;Rate $E (0 is total);Threshold $F\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.32.0-63.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Under limit occurrence counter;Rate $E (0 is total);Billing period  $F (255 is current)\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.33.0-63.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Under limit duration;Rate $E (0 is total);Billing period  $F (255 is current)\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.34.0-63.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Under limit magnitude;Rate $E (0 is total);Billing period  $F (255 is current)\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.35.0-63.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Over limit threshold;Rate $E (0 is total);Threshold $F\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.36.0-63.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Over limit occurrence counter;Rate $E (0 is total);Billing period  $F (255 is current)\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.37.0-63.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Over limit duration;Rate $E (0 is total);Billing period  $F (255 is current)\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.38.0-63.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Over limit magnitude;Rate $E (0 is total);Billing period  $F (255 is current)\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.39.0-63.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Missing threshold;Rate $E (0 is total);Threshold $F\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.40.0-63.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Missing occurrence counter;Rate $E (0 is total);Billing period  $F (255 is current)\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.41.0-63.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Missing duration;Rate $E (0 is total);Billing period  $F (255 is current)\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.42.0-63.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Missing magnitude;Rate $E (0 is total);Billing period  $F (255 is current)\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.43.0-63.0-99,255;1,3,4;6,15,17,18;Ch. $B;$1;Time threshold for under limit;Rate $E (0 is total);Billing period  $F (255 is current)\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.44.0-63.0-99,255;1,3,4;6,15,17,18;Ch. $B;$1;Time threshold for over limit;Rate $E (0 is total);Billing period  $F (255 is current)\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.45.0-63.0-99,255;1,3,4;6,15,17,18;Ch. $B;$1;Time threshold of missing magnitude;Rate $E (0 is total);Billing period  $F (255 is current)\n";

static const char* OBIS_CODES_ELECTRICITY_3 = "\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.31.0-120,124-127.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Under limit threshold;Harmonic / Distortion factor $E;Threshold $F\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.32.0-120,124-127.0-99;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Under limit occurrence counter;Harmonic / Distortion factor $E;Billing period  $F (255 is current)\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.33.0-120,124-127.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Under limit duration;Harmonic / Distortion factor $E;Billing period  $F (255 is current)\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.34.0-120,124-127.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Under limit magnitude;Harmonic / Distortion factor $E;Billing period  $F (255 is current)\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.35.0-120,124-127.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Over limit threshold;Harmonic / Distortion factor $E;Threshold $F\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.36.0-120,124-127.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Over limit occurrence counter;Harmonic / Distortion factor $E;Billing period  $F (255 is current)\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.37.0-120,124-127.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Over limit duration;Harmonic / Distortion factor $E;Billing period  $F (255 is current)\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.38.0-120,124-127.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Over limit magnitude;Harmonic / Distortion factor $E;Billing period  $F (255 is current)\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.39.0-120,124-127.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Missing threshold;Harmonic / Distortion factor $E;Threshold $F\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.40.0-120,124-127.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Missing occurrence counter;Harmonic / Distortion factor $E;Billing period  $F (255 is current)\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.41.0-120,124-127.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Missing duration;Harmonic / Distortion factor $E;Billing period  $F (255 is current)\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.42.0-120,124-127.0-99,255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Missing magnitude;Harmonic / Distortion factor $E;Billing period  $F (255 is current)\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.43.0-120,124-127.0-99,255;1,3,4;6,15,17,18;Ch. $B;$1;Time threshold for under limit;Harmonic / Distortion factor $E;Billing period  $F (255 is current)\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.44.0-120,124-127.0-99,255;1,3,4;6,15,17,18;Ch. $B;$1;Time threshold for over limit;Harmonic / Distortion factor $E;Billing period  $F (255 is current)\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.45.0-120,124-127.0-99,255;1,3,4;6,15,17,18;Ch. $B;$1;Time threshold of missing magnitude;Harmonic / Distortion factor $E;Billing period  $F (255 is current)\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.31.0-63.0-99,255;21;;Ch. $B;$1;Inst. value, under limit threshold;Rate $E (0 is total);\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.35.0-63.0-99,255;21;;Ch. $B;$1;Inst. value, over limit threshold;Rate $E (0 is total);\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.39.0-63.0-99,255;21;;Ch. $B;$1;Inst. value, missing threshold;Rate $E (0 is total);\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.31.0-120,124-127.0-99,255;21;;Ch. $B;$1;Inst. value, under limit threshold;Harmonic / Distortion factor $E;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.35.0-120,124-127.0-99,255;21;;Ch. $B;$1;Inst. value, over limit threshold;Harmonic / Distortion factor $E;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.39.0-120,124-127.0-99,255;21;;Ch. $B;$1;Inst. value, missing threshold;Harmonic / Distortion factor $E;\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.4.0-63.0-99,255;21;;Ch. $B;$1;Current avg. 1;Rate $E (0 is total);\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.5.0-63.0-99,255;21;;;$1;Last avg. 1;Rate $E (0 is total);\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.14.0-63.0-99,255;21;;;$1;Current avg. 2;Rate $E (0 is total);\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.15.0-63.0-99,255;21;;;$1;Last avg. 2;Rate $E (0 is total);\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.24.0-63.0-99,255;21;;;$1;Current avg. 3;Rate $E (0 is total);\n\
1.0-64.1-10,13,14,16-20,21-30,33,34,36-40,41-50,53,54,56-60,61-70,73,74,76-80,82,84-89,100-107.25.0-63.0-99,255;21;;Ch. $B;$1;Last avg. 3;Rate $E (0 is total);\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.4.0-120,124-127.0-99,255;21;;Ch. $B;$1;Current avg. 1;Harmonic / Distortion factor $E;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.5.0-120,124-127.0-99,255;21;;;$1;Last avg. 1;Harmonic / Distortion factor $E;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.14.0-120,124-127.0-99,255;21;;;$1;Current avg. 2;Harmonic / Distortion factor $E;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.15.0-120,124-127.0-99,255;21;;;$1;Last avg. 2;Harmonic / Distortion factor $E;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.24.0-120,124-127.0-99,255;21;;;$1;Current avg. 3;Harmonic / Distortion factor $E;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.25.0-120,124-127.0-99,255;21;;Ch. $B;$1;Last avg. 3;Harmonic / Distortion factor $E;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.7.1-120.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Inst. value;Harmonic $E;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.7.124.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Inst. value;Total Harmonic Distortion (THD);\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.7.125.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Inst. value;Total Demand Distortion (TDD);\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.7.126.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Inst. value;All harmonics;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.7.127.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Inst. value;All harmonics to nominal value ratio;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.24.1-120.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 3;Harmonic $E;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.24.124.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 3;Total Harmonic Distortion (THD);\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.24.125.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 3;Total Demand Distortion (TDD);\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.24.126.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 3;All harmonics;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.24.127.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 4;All harmonics to nominal value ratio;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.56.0.255;3,4,5;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 4;Fundamental + all harmonics;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.56.1-120.255;3,4,5;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 4;Harmonic $E;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.56.124.255;3,4,5;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 4;Total Harmonic Distortion (THD);\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.56.125.255;3,4,5;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 4;Total Demand Distortion (TDD);\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.56.126.255;3,4,5;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 4;All harmonics;\n\
1.0-64.11,12,15,31,32,35,51,52,55,71,72,75,90-92,124-126.56.127.255;3,4,5;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Current avg. 4;All harmonics to nominal value ratio;\n\
1.0-64.81.7.0.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L1) - U(L1);;;\n\
1.0-64.81.7.1.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L2) - U(L1);;;\n\
1.0-64.81.7.2.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L3) - U(L1);;;\n\
1.0-64.81.7.4.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L1) - U(L1);;;\n\
1.0-64.81.7.5.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L2) - U(L1);;;\n\
1.0-64.81.7.6.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L3) - U(L1);;;\n\
1.0-64.81.7.7.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L0) - U(L1);;;\n\
1.0-64.81.7.10.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L1) - U(L2);;;\n\
1.0-64.81.7.11.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L2) - U(L2);;;\n\
1.0-64.81.7.12.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L3) - U(L2);;;\n\
1.0-64.81.7.14.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L1) - U(L2);;;\n\
1.0-64.81.7.15.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L2) - U(L2);;;\n\
1.0-64.81.7.16.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L3) - U(L2);;;\n\
1.0-64.81.7.17.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L0) - U(L2);;;\n\
1.0-64.81.7.20.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L1) - U(L3);;;\n\
1.0-64.81.7.21.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L2) - U(L3);;;\n\
1.0-64.81.7.22.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L3) - U(L3);;;\n\
1.0-64.81.7.24.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L1) - U(L3);;;\n\
1.0-64.81.7.25.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L2) - U(L3);;;\n\
1.0-64.81.7.26.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L3) - U(L3);;;\n\
1.0-64.81.7.27.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L0) - U(L3);;;\n\
1.0-64.81.7.40.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L1) - I(L1);;;\n\
1.0-64.81.7.41.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L2) - I(L1);;;\n\
1.0-64.81.7.42.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L3) - I(L1);;;\n\
1.0-64.81.7.44.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L1) - I(L1);;;\n\
1.0-64.81.7.45.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L2) - I(L1);;;\n\
1.0-64.81.7.46.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L3) - I(L1);;;\n\
1.0-64.81.7.47.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L0) - I(L1);;;\n\
1.0-64.81.7.50.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L1) - I(L2);;;\n\
1.0-64.81.7.51.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L2) - I(L2);;;\n\
1.0-64.81.7.52.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L3) - I(L2);;;\n\
1.0-64.81.7.54.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L1) - I(L2);;;\n\
1.0-64.81.7.55.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L2) - I(L2);;;\n\
1.0-64.81.7.56.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L3) - I(L2);;;\n\
1.0-64.81.7.57.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L0) - I(L2);;;\n\
1.0-64.81.7.60.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L1) - I(L3);;;\n\
1.0-64.81.7.61.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L2) - I(L3);;;\n\
1.0-64.81.7.62.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L3) - I(L3);;;\n\
1.0-64.81.7.64.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L1) - I(L3);;;\n\
1.0-64.81.7.65.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L2) - I(L3);;;\n\
1.0-64.81.7.66.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L3) - I(L3);;;\n\
1.0-64.81.7.67.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L0) - I(L3);;;\n\
1.0-64.81.7.70.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L1) - I(L0);;;\n\
1.0-64.81.7.71.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L2) - I(L0);;;\n\
1.0-64.81.7.72.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of U(L3) - I(L0);;;\n\
1.0-64.81.7.74.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L1) - I(L0);;;\n\
1.0-64.81.7.75.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L2) - I(L0);;;\n\
1.0-64.81.7.76.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L3) - I(L0);;;\n\
1.0-64.81.7.77.255;3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Angle of I(L0) - I(L0);;;\n\
1.0-64.81.7.255.255;61;;Ch. $B;Summary of phase angles;;;\n";

static const char* OBIS_CODES_ELECTRICITY_4 = "\
1.0-64.12,32,52,72,124-126.32.0.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 10...<= 15%, 10ms...<= 100ms;\n\
1.0-64.12,32,52,72,124-126.32.1.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 10...<=  15%, 100ms...<=  500ms;\n\
1.0-64.12,32,52,72,124-126.32.2.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 10...<=  15%, 500ms...<=  1000ms;\n\
1.0-64.12,32,52,72,124-126.32.3.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 10...<=  15%, 1s...<=  3s;\n\
1.0-64.12,32,52,72,124-126.32.4.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 10...<=  15%, 3s...<= 20s;\n\
1.0-64.12,32,52,72,124-126.32.5.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 10...<= 15%, 20s...<= 60s;\n\
1.0-64.12,32,52,72,124-126.32.10.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 15...<= 30%, 10...<= 100ms;\n\
1.0-64.12,32,52,72,124-126.32.11.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 15...<= 30%, 100...<= 500ms;\n\
1.0-64.12,32,52,72,124-126.32.12.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 15...<= 30%, 500...<= 1000ms;\n\
1.0-64.12,32,52,72,124-126.32.13.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 15...<= 30%, 1s...<= 3s;\n\
1.0-64.12,32,52,72,124-126.32.14.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 15...<= 30%, 3s...<= 20s;\n\
1.0-64.12,32,52,72,124-126.32.15.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 15...<= 30%, 20s...<= 60s;\n\
1.0-64.12,32,52,72,124-126.32.20.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 30...<= 60%, 10...<= 100ms;\n\
1.0-64.12,32,52,72,124-126.32.21.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 30...<= 60%, 100...<= 500ms;\n\
1.0-64.12,32,52,72,124-126.32.22.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 30...<= 60%, 500...<= 1000ms;\n\
1.0-64.12,32,52,72,124-126.32.23.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 30...<= 60%, 1s...<= 3s;\n\
1.0-64.12,32,52,72,124-126.32.24.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 30...<= 60%, 3s...<= 20s;\n\
1.0-64.12,32,52,72,124-126.32.25.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 30...<= 60%, 20s...<= 60s;\n\
1.0-64.12,32,52,72,124-126.32.30.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 60...<= 90%, 10...<= 100ms;\n\
1.0-64.12,32,52,72,124-126.32.31.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 60...<= 90%, 100...<= 500ms;\n\
1.0-64.12,32,52,72,124-126.32.32.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 60...<= 90%, 500...<= 1000ms;\n\
1.0-64.12,32,52,72,124-126.32.33.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 60...<= 90%, 1s...<= 3s;\n\
1.0-64.12,32,52,72,124-126.32.34.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 60...<= 90%, 3s...<= 20s;\n\
1.0-64.12,32,52,72,124-126.32.35.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 60...<= 90%, 20s...<= 60s;\n\
1.0-64.12,32,52,72,124-126.32.40.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 90...<= 99%, 10...<= 100ms;\n\
1.0-64.12,32,52,72,124-126.32.41.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 90...<= 99%, 100...<= 500ms;\n\
1.0-64.12,32,52,72,124-126.32.42.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 90...<= 99%, 500...<= 1000ms;\n\
1.0-64.12,32,52,72,124-126.32.43.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 90...<= 99%, 1s...<= 3s;\n\
1.0-64.12,32,52,72,124-126.32.44.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 90...<= 99%, 3s...<= 20s;\n\
1.0-64.12,32,52,72,124-126.32.45.255;1,3;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Unipede voltage dip;Class 90...<= 99%, 20s...<= 90s;\n\
1.0-64.12,32,52,72,124-126.32.255.255;61;;Ch. $B;$1;Unipede voltage dip;Summary;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.1.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Active line losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.2.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Active line losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.3.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Active line losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.4.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Active transformer losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.5.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Active transformer losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.6.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Active transformer losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.7.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Active losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.8.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Active losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.9.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Active losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.10.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Reactive line losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.11.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Reactive line losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.12.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Reactive line losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.13.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Reactive transformer losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.14.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Reactive transformer losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.15.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Reactive transformer losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.16.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Reactive losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.17.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Reactive losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.18.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Sum Li Reactive losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.19.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Total transformer losses with normalised RFE = 1 MOhm;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.20.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Total line losses with normalised RCU = 10 Ohm;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.21.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Compensated active gross +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.22.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Compensated active net +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.23.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Compensated active gross -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.24.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Compensated active net -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.25.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Compensated reactive gross +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.26.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Compensated reactive net +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.27.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Compensated reactive gross -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.28.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Compensated reactive net -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.31.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Active line losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.32.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Active line losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.33.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Active line losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.34.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Active transformer losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.35.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Active transformer losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.36.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Active transformer losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.37.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Active losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.38.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Active losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.39.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Active losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.40.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Reactive line losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.41.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Reactive line losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.42.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Reactive line losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.43.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Reactive transformer losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.44.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Reactive transformer losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.45.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Reactive transformer losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.46.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Reactive losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.47.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Reactive losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.48.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 Reactive losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.49.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 A2h;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.50.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L1 V2h;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.51.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Active line losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.52.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Active line losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.53.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Active line losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.54.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Active transformer losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.55.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Active transformer losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.56.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Active transformer losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.57.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Active losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.58.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Active losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.59.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Active losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.60.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Reactive line losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.61.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Reactive line losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.62.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Reactive line losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.63.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Reactive transformer losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.64.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Reactive transformer losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.65.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Reactive transformer losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.66.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Reactive losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.67.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Reactive losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.68.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 Reactive losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.69.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 A2h;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.70.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L2 V2h;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.71.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Active line losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.72.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Active line losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.73.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Active line losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.74.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Active transformer losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.75.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Active transformer losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.76.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Active transformer losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.77.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Active losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.78.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Active losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.79.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Active losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.80.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Reactive line losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.81.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Reactive line losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.82.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Reactive line losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.83.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Reactive transformer losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.84.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Reactive transformer losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.85.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Reactive transformer losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.86.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Reactive losses +;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.87.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Reactive losses -;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.88.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 Reactive losses;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.89.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 A2h;$2;;\n\
1.0-64.83.0-10,11-16,17-20,21-26,27-30,55,58.90.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;L3 V2h;$2;;\n";

static const char* OBIS_CODES_ELECTRICITY_5 = "\
1.0-64.96.1.0-9.255;1,3;6,9,10,17,18;Ch. $B;Metering point ID;;#$(E+1);\n\
1.0-64.96.1.255.255;7,61;;Ch. $B;Metering point ID;combined;;\n\
1.0-64.96.5.0.255;1,3,4,63,7,61;3,4,6,9,17,18,21;Ch. $B;Internal operating status, global;;;\n\
1.0-64.96.5.1.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
1.0-64.96.5.2.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
1.0-64.96.5.3.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
1.0-64.96.5.4.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
1.0-64.96.5.5.255;1,3,4;3,4,6,9,17,18,21;Ch. $B;Meter started status flag;;;\n\
1.0-64.96.10.0.255;1,3,4;3,4,6,9,17,18,21;Ch. $B;Status information missing voltage;;;\n\
1.0-64.96.10.1.255;1,3,4;3,4,6,9,17,18,21;Ch. $B;Status information missing current;;;\n\
1.0-64.96.10.2.255;1,3,4;3,4,6,9,17,18,21;Ch. $B;Status information current without voltage;;;\n\
1.0-64.96.10.3.255;1,3,4;3,4,6,9,17,18,21;Ch. $B;Status information aux. power supply;;;\n\
1.0-64.96.50-99.0-255.0-255;1,3,4,7,61,63;*;Ch. $B;Manufacturer specific;;;\n\
1.0-64.98.1.0-127,255.0-99;7;;Ch. $B;Data of billing period;Scheme 1;#$(E+1);Billing period  $F\n\
1.0-64.98.1.0-127,255.101-125;7;;Ch. $B;Data of billing period;Scheme 1;#$(E+1);$(F-100) last billing periods\n\
1.0-64.98.1.0-127,255.126-255;7;;Ch. $B;Data of billing period;Scheme 1;#$(E+1);Unspecified number of most recent billing periods\n\
1.0-64.98.2.0-127,255.0-99;7;;Ch. $B;Data of billing period;Scheme 2;#$(E+1);Billing period  $F\n\
1.0-64.98.2.0-127,255.101-125;7;;Ch. $B;Data of billing period;Scheme 2;#$(E+1);$(F-100) last billing periods\n\
1.0-64.98.2.0-127,255.126-255;7;;Ch. $B;Data of billing period;Scheme 2;#$(E+1);Unspecified number of most recent billing periods\n\
1.0-64.98.10.0-127.0-99;61;;Ch. $B;Register table object;General use;#$(E+1);Billing period $F\n\
1.0-64.98.10.0-127.101-125;61;;Ch. $B;Register table object;General use;#$(E+1);$(F-100) last billing periods\n\
1.0-64.98.10.0-127.126,255;61;;Ch. $B;Register table object;General use;#$(E+1);Unspecified number of most recent billing periods\n\
1.0-64.99.1.0-127.255;7;;Ch. $B;Load profile with recording period 1;;#$(E+1);\n\
1.0-64.99.2.0-127.255;7;;Ch. $B;Load profile with recording period 2;;#$(E+1);\n\
1.0-64.99.3.0.255;7;;Ch. $B;Load profile during test;;;\n\
1.0-64.99.10.1.255;7;;Ch. $B;Dips voltage profile;;;\n\
1.0-64.99.10.2.255;7;;Ch. $B;Swells voltage profile;;;\n\
1.0-64.99.10.3.255;7;;Ch. $B;Cuts voltage profile;;;\n\
1.0-64.99.11.1-120,124-127.255;7;;Ch. $B;Voltage harmonic profile;;# $E;\n\
1.0-64.99.12.1-120,124-127.255;7;;Ch. $B;Current harmonic profile;;# $E;\n\
1.0-64.99.13.0.255;7;;Ch. $B;Voltage unbalance profile;;;\n\
1.0-64.99.14.0-127.255;7;;Ch. $B;Power quality profile;;#$(E+1);\n\
1.0-64.99.97.0-127.255;7;;Ch. $B;Power failure event log;;#$(E+1);\n\
1.0-64.99.98.0-127.255;7;;Ch. $B;Event log;;#$(E+1);\n\
1.0-64.99.99.0-127.255;7;;Ch. $B;Certification data log;;#$(E+1);\n\
1.128-199.0-199,255.0-255.0-255.0-255;*;*;Man. specific;;;;\n\
1.0-199,255.128-199,240.0-255.0-255.0-255;*;*;Man. specific;;;;\n\
1.0-199,255.0-199,255.128-254.0-255.0-255;*;*;Man. specific;;;;\n\
1.0-199,255.0-199,255.0-255.128-254.0-255;*;*;Man. specific;;;;\n\
1.0-199,255.0-199,255.0-255.0-255.128-254;*;*;Man. specific;;;;\n";

#endif //DLMS_IGNORE_OBIS_ELECTRICITY

#ifndef DLMS_IGNORE_OBIS_GAS

static const char* OBIS_CODES_GAS_1 ="\
7.0-64.0.0.0-9.255;1,3,4;6,9,10,17,18;Ch. $B;Complete combined gas ID;;#$(E+1);\n\
7.0-64.0.0.255.255;7,61;;Ch. $B;Gas ID;;;\n\
7.0-64.0.1.0.0-99,255;1,3,4;6,17,18;Ch. $B;Billing period counter (1);;;#$F\n\
7.0-64.0.1.1.255;1,3;6,17,18;Ch. $B;No. of available billing periods (1);;;\n\
7.0-64.0.1.2.255;1,3,4;6,9,21,25;Ch. $B;Time stamp of the most recent billing period (1);;;\n\
7.0-64.0.1.2.0-99;1,3,4;6,9,21,25;Ch. $B;Time stamp of the billing period (1);;;#$F\n\
7.0-64.0.1.3.0-99,255;1,3,4;6,17,18;Ch. $B;Billing period counter (2);;;#$F\n\
7.0-64.0.1.4.255;1,3;6,17,18;Ch. $B;No. of available billing periods (2);;;\n\
7.0-64.0.1.5.255;1,3,4;6,9,21,25;Ch. $B;Time stamp of the most recent billing period (2);;;\n\
7.0-64.0.1.5.0-99;1,3,4;6,9,21,25;Ch. $B;Time stamp of the billing period (2) VZ (last reset);;;#$F\n\
7.0-64.0.1.6.0-99,255;1,3,4;6,17,18;Ch. $B;Billing period counter (3);;;#$F\n\
7.0-64.0.1.7.255;1,3;6,17,18;Ch. $B;No. of available billing periods (3);;;\n\
7.0-64.0.1.8.255;1,3,4;6,9,21,25;Ch. $B;Time stamp of the most recent billing period (3);;;\n\
7.0-64.0.1.8.0-99;1,3,4;6,9,21,25;Ch. $B;Time stamp of the billing period (3) VZ (last reset);;;#$F\n\
7.0-64.0.1.9.0-99,255;1,3,4;6,17,18;Ch. $B;Billing period counter (4);;;#$F\n\
7.0-64.0.1.10.255;1,3;6,17,18;Ch. $B;No. of available billing periods (4);;;\n\
7.0-64.0.1.11.255;1,3,4;6,9,21,25;Ch. $B;Time stamp of the most recent billing period (4);;;\n\
7.0-64.0.1.11.0-99;1,3,4;6,9,21,25;Ch. $B;Time stamp of the billing period (4) VZ (last reset);;;#$F\n\
7.0-64.0.2.0.255;1,3,4;6,9,10,17,18;Ch. $B;Program version;;;\n\
7.0-64.0.2.1.255;1,3,4;6,9,10,17,18;Ch. $B;Firmware version;;;\n\
7.0-64.0.2.2.255;1,3,4;6,9,10,17,18;Ch. $B;Software version;;;\n\
7.0-64.0.2.3.255;1,3,4;6,9,10,17,18;Ch. $B;Device version;;;\n\
7.0-64.0.2.8.255;1,3,4;6,9,10,17,18;Ch. $B;Active firmware signature;;;\n\
7.0-64.0.2.10.255;1,3,4;6,9,10,17,18;Ch. $B;Number of device channels;;;\n\
7.0-64.0.2.11.255;1,3,4;6,9,10,17,18;Ch. $B;Pressure sensor, serial no.;;;\n\
7.0-64.0.2.12.255;1,3,4;6,9,10,17,18;Ch. $B;Temperature sensor, serial no.;;;\n\
7.0-64.0.2.13.255;1,3,4;6,9,10,17,18;Ch. $B;Calculator, serial no.;;;\n\
7.0-64.0.2.14.255;1,3,4;6,9,10,17,18;Ch. $B;Volume sensor, serial no.;;;\n\
7.0-64.0.2.15.255;1,3,4;6,9,10,17,18;Ch. $B;Density sensor, serial no.;;;\n\
7.0-64.0.2.16.255;1,3,4;6,9,10,17,18;Ch. $B;Sensor (medium irrespective), serial no.;;;\n\
7.0-64.0.2.17.255;1,3,4;6,9,10,17,18;Ch. $B;Digital output configuration;;;\n\
7.0-64.0.2.18.255;1,3,4;6,9,10,17,18;Ch. $B;Analogue output configuration;;;\n\
7.0-64.0.3.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Output pulse constant;Volume forward at metering conditions;;\n\
7.0-64.0.3.1.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Output pulse constant;Volume reverse at metering conditions;;\n\
7.0-64.0.3.2.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Output pulse constant;Volume absolute at metering conditions;;\n\
7.0-64.0.3.3.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Output pulse constant;Volume forward at base conditions;;\n\
7.0-64.0.3.4.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Output pulse constant;Volume reverse at base conditions;;\n\
7.0-64.0.3.5.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Output pulse constant;Volume absolute at base conditions;;\n\
7.0-64.0.4.0.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Conversion factor;;#$(E+1);\n\
7.0-64.0.4.1.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Conversion factor;;$#(E+1);\n\
7.0-64.0.4.2.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Conversion factor;;$#(E+1);\n\
7.0-64.0.4.3.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Conversion factor;;$(E+1);\n\
7.0-64.0.4.4.255;1,3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Conversion factor;;#$(E+1);\n\
7.0-64.0.5.1.1-4;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Threshold power for over-consumption relative to measurement period 2 for indexes and index differences;;Limit $#E;\n\
7.0-64.0.5.1.11-14;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Threshold power for over-consumption relative to measurement period 3 for indexes and index differences;;Limit #($E-10);\n\
7.0-64.0.5.2.1-9;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Threshold limit for over-consumption relative to measurement period 2 for indexes and index differences;;Rate #($E-10);\n\
7.0-64.0.5.2.11-19;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Threshold limit for over-consumption relative to measurement period 3 for indexes and index differences;;Rate #($E-10);\n\
7.0-64.0.5.3.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Max. contracted consumption for recording interval 1;;;\n\
7.0-64.0.5.4.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Max. contracted consumption for recording interval 2;;;\n\
7.0-64.0.5.11.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Absolute temperature, min. limit setting, Tmin;;;\n\
7.0-64.0.5.12.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Absolute temperature, max. limit setting, Tmax;;;\n\
7.0-64.0.5.13.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Absolute pressure, min. limit setting, Pmin;;;\n\
7.0-64.0.5.14.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Absolute pressure, max. limit setting, Pmax;;;\n\
7.0-64.0.6.1.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Nominal values volume sensor;Pressure;;\n\
7.0-64.0.6.2.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Nominal values volume sensor;Temperature;;\n\
7.0-64.0.6.3.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Nominal values volume sensor;Qmin;;\n\
7.0-64.0.6.4.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Nominal values volume sensor;Qmax;;\n\
7.0-64.0.7.0.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse constant;Volume forward at metering conditions;;\n\
7.0-64.0.7.1.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse constant;Volume reverse metering conditions;;\n\
7.0-64.0.7.2.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse constant;Volume absolute at metering conditions;;\n\
7.0-64.0.7.3.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse constant;Volume forward at base conditions;;\n\
7.0-64.0.7.4.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse constant;Volume reverse at base conditions;;\n\
7.0-64.0.7.5.255;3,4;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Input pulse constant;Volume absolute at base conditions;;\n\
7.0-64.0.8.1.255;1,3;6,17,18;Ch. $B;Recording interval 1, for profile;;;\n\
7.0-64.0.8.2.255;1,3;6,17,18;Ch. $B;Recording interval 2, for profile;;;\n\
7.0-64.0.8.3.255;1,3;6,17,18;Ch. $B;Measurement period 1, for average value 1;;;\n\
7.0-64.0.8.4.255;1,3;6,17,18;Ch. $B;Measurement period 2, for average value 2;;;\n\
7.0-64.0.8.5.255;1,3;6,17,18;Ch. $B;Measurement period 3, for instantaneous value;;;\n\
7.0-64.0.8.6.255;1,3;6,17,18;Ch. $B;Measurement period 4, for test value;;;\n\
7.0-64.0.8.10.255;1,3;6,17,18;Ch. $B;Billing period;;;\n\
7.0-64.0.8.11.255;1,3;6,17,18;Ch. $B;Process interval 1, default value 15 minutes;;;\n\
7.0-64.0.8.12.255;1,3;6,17,18;Ch. $B;Process interval 2, default value 1 hour;;;\n\
7.0-64.0.8.13.255;1,3;6,17,18;Ch. $B;Process interval 3, default value 1 day;;;\n\
7.0-64.0.8.14.255;1,3;6,17,18;Ch. $B;Process interval 4, default value 1 month;;;\n\
7.0-64.0.8.15.255;1,3;6,17,18;Ch. $B;Process interval 5, for process value, since last event;;;\n\
7.0-64.0.8.16.255;1,3;6,17,18;Ch. $B;Process interval 6, between last two events;;;\n\
7.0-64.0.8.17.255;1,3;6,17,18;Ch. $B;Measurement period 1, for indexes and index differences, default value 15 minutes;;;\n\
7.0-64.0.8.18.255;1,3;6,17,18;Ch. $B;Measurement period 2, for indexes and index differences, default value 1 hour;;;\n\
7.0-64.0.8.19.255;1,3;6,17,18;Ch. $B;Measurement period 3, for indexes and index differences, no default value;;;\n\
7.0-64.0.8.20.255;1,3;6,17,18;Ch. $B;Billing period 1, for indexes and index differences, default value 1 day;;;\n\
7.0-64.0.8.21.255;1,3;6,17,18;Ch. $B;Billing period 2, for indexes and index differences, default value 1 month;;;\n\
7.0-64.0.8.22.255;1,3;6,17,18;Ch. $B;Billing period 3, for indexes and index differences, default value 1 year;;;\n\
7.0-64.0.8.23.255;1,3;6,17,18;Ch. $B;Billing period 4, for indexes and index differences, no default value;;;\n\
7.0-64.0.8.25.255;1,3;6,17,18;Ch. $B;Averaging period 1, default value 5 minutes;;;\n\
7.0-64.0.8.26.255;1,3;6,17,18;Ch. $B;Averaging period 2, default value 15 minutes;;;\n\
7.0-64.0.8.27.255;1,3;6,17,18;Ch. $B;Averaging period 3, default value 1 hour;;;\n\
7.0-64.0.8.28.255;1,3;6,17,18;Ch. $B;Averaging period 4, no default value;;;\n\
7.0-64.0.8.29.255;1,3;6,17,18;Ch. $B;Averaging period 5, default value 1 day;;;\n\
7.0-64.0.8.30.255;1,3;6,17,18;Ch. $B;Averaging period 6, default value 1 month;;;\n\
7.0-64.0.8.31.255;1,3;6,17,18;Ch. $B;Averaging period 7, default value 1 year;;;\n\
7.0-64.0.8.32.255;1,3;6,17,18;Ch. $B;Averaging period 8, no default value;;;\n\
7.0-64.0.8.33.255;1,3;6,17,18;Ch. $B;Averaging period 9, since last event;;;\n\
7.0-64.0.8.34.255;1,3;6,17,18;Ch. $B;Averaging period 10, between two last events;;;\n\
7.0-64.0.8.35.255;1,3;6,17,18;Ch. $B;Number of sub-periods for averaging period 2;;;\n\
7.0-64.0.9.0.255;1,3;6,17,18;Ch. $B;No. of days since last reset;;;\n\
7.0-64.0.9.1.255;1,3,4;9,27;Ch. $B;Local time;;;\n\
7.0-64.0.9.2.255;1,3,4;9,26;Ch. $B;Local date;;;\n\
7.0-64.0.9.3.255;1,3,4;9,25;Ch. $B;Start of conventional gas day;;;\n\
7.0-64.0.9.4.255;1,3,4;5,6,15,16,17,18;Ch. $B;Residual time shift;;;\n\
7.0-64.0.9.6.255;1,3,4;9,25;Ch. $B;Time of last reset (First billing period scheme if there are more than one);;;\n\
7.0-64.0.9.7.255;1,3,4;9,25;Ch. $B;Date of last reset (First billing period scheme if there are more than one);;;\n\
7.0-64.0.9.11.255;1,3,4;6,17,18;Ch. $B;Clock time shift limit;;;\n\
7.0-64.0.9.12.255;1,3,4;6,17,18;Ch. $B;Billing period reset lockout time (First billing period scheme if there are more than one);;;\n\
7.0-64.0.9.13.255;1,3,4;6,17,18;Ch. $B;Time expired since last end of billing period (Second billing period scheme);;;\n\
7.0-64.0.9.14.255;1,3,4;9,25;Ch. $B;Time of last reset (Second billing period scheme);;;\n\
7.0-64.0.9.15.255;1,3,4;9,25;Ch. $B;Date of last reset (Second billing period scheme);;;\n\
7.0-64.0.9.16.255;1,3,4;6,17,18;Ch. $B;Billing period reset lockout time (Second billing period scheme);;;\n\
7.0-64.0.9.17.255;1,3,4;6,17,18;Ch. $B;Time expired since last end of billing period (Third billing period scheme);;;\n\
7.0-64.0.9.18.255;1,3,4;9,25;Ch. $B;Time of last reset (Third billing period scheme);;;\n\
7.0-64.0.9.19.255;1,3,4;9,25;Ch. $B;Date of last reset (Third billing period scheme);;;\n\
7.0-64.0.9.20.255;1,3,4;6,17,18;Ch. $B;Billing period reset lockout time (Third billing period scheme);;;\n\
7.0-64.0.9.21.255;1,3,4;6,17,18;Ch. $B;Time expired since last end of billing period (Fourth billing period scheme);;;\n\
7.0-64.0.9.22.255;1,3,4;9,25;Ch. $B;Time of last reset (Fourth billing period scheme);;;\n\
7.0-64.0.9.23.255;1,3,4;9,25;Ch. $B;Date of last reset (Fourth billing period scheme);;;\n\
7.0-64.0.9.24.255;1,3,4;6,17,18;Ch. $B;Billing period reset lockout time (Fourth billing period scheme);;;\n\
7.0-64.0.10.0.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Heating temperature f, current value;;;\n\
7.0-64.0.10.1.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Heating temperature, average 15 minutes;;;\n\
7.0-64.0.10.11.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Heating temperature, average 60 minutes;;;\n\
7.0-64.0.10.21.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Heating temperature, average day;;;\n\
7.0-64.0.10.31.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Heating temperature, average month;;;\n\
7.0-64.0.11.0.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Ambient device temperature g, current value;;;\n\
7.0-64.0.11.1.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Ambient device temperature, average 15 minutes;;;\n\
7.0-64.0.11.11.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Ambient device temperature, average 60 minutes;;;\n\
7.0-64.0.11.21.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Ambient device temperature, average day;;;\n\
7.0-64.0.11.31.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Ambient device temperature, average month;;;\n\
7.0-64.0.12.8.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Reference pressure of gas analysis;;;\n\
7.0-64.0.12.9.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Reference temperature of gas analysis;;;\n\
7.0-64.0.12.10.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Superior Wobbe number 0 �C;;;\n\
7.0-64.0.12.11.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Inferior Wobbe number 0 �C;;;\n\
7.0-64.0.12.12.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Methane number;;;\n\
7.0-64.0.12.13.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Total sulphur;;;\n\
7.0-64.0.12.14.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Hydrogen sulphide H2S;;;\n\
7.0-64.0.12.15.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Mercaptans;;;\n\
7.0-64.0.12.16.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Water dew point (DP H2O);;;\n\
7.0-64.0.12.17.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Water (H2O) dew point outlet / normalised;;;\n\
7.0-64.0.12.18.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Hydrocarbon dew point (DP CXHY);;;\n\
7.0-64.0.12.19.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Inferior calorific value Hi,n;;;\n\
7.0-64.0.12.20.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Water H2O;;;\n\
7.0-64.0.12.45.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Density (of gas), base conditions;;;\n\
7.0-64.0.12.46.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Relative density;;;\n\
7.0-64.0.12.54.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Superior calorific value Hs,n;;;\n\
7.0-64.0.12.60.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Nitrogen N2;;;\n\
7.0-64.0.12.61.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Hydrogen H2;;;\n\
7.0-64.0.12.62.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Oxygen O2;;;\n\
7.0-64.0.12.63.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Helium He;;;\n\
7.0-64.0.12.64.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Argon Ar;;;\n\
7.0-64.0.12.65.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Carbon monoxide CO;;;\n\
7.0-64.0.12.66.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Carbon dioxide CO2;;;\n\
7.0-64.0.12.67.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Methane CH4;;;\n\
7.0-64.0.12.68.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Ethene C2H4;;;\n\
7.0-64.0.12.69.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Ethane C2H6;;;\n\
7.0-64.0.12.70.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Propene C3H6;;;\n\
7.0-64.0.12.71.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Propane C3H8;;;\n\
7.0-64.0.12.72.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;i-butane i-C4H10;;;\n\
7.0-64.0.12.73.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;n-butane n-C4H10;;;\n\
7.0-64.0.12.74.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;neo-pentane neo-C5H12;;;\n\
7.0-64.0.12.75.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;i-pentane i-C5H12;;;\n\
7.0-64.0.12.76.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;n-pentane n-C5H12;;;\n\
7.0-64.0.12.77.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Hexane C6H14;;;\n\
7.0-64.0.12.78.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Hexane share higher hydrocarbons C6H14 %;;;\n\
7.0-64.0.12.79.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Hexane+ C6 H14+;;;\n\
7.0-64.0.12.80.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Heptane C7H16;;;\n\
7.0-64.0.12.81.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Octane C8H18;;;\n\
7.0-64.0.12.82.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Nonane C9H20;;;\n\
7.0-64.0.12.83.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Decane C10H22;;;\n\
7.0-64.0.12.84.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Tetrahydrothiophene;;;\n\
7.0-64.0.13.1.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Internal pipe diameter;;;\n\
7.0-64.0.13.2.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Orifice diameter;;;\n\
7.0-64.0.13.3.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Pressure type (orifice fitting);;;\n\
7.0-64.0.13.4.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Flow coefficient (alfa);;;\n\
7.0-64.0.13.5.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Expansion coefficient (epsilon);;;\n\
7.0-64.0.13.6.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Reflux coefficient;;;\n\
7.0-64.0.13.7.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Isoentropic coefficient;;;\n\
7.0-64.0.13.8.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Dynamic viscosity;;;\n\
7.0-64.0.13.9.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;Differential pressure dp for cut off;;;\n\
7.0-64.0.13.10.255;1,3,4;5,6,15,16,17,18;Ch. $B;Reynold number;;;\n\
7.0-64.0.14.1.255;1,3,4;5,6,15,16,17,18,23,24;Ch. $B;K0 Densimeter Coefficient;;;\n\
7.0-64.0.14.2.255;1,3,4;5,6,15,16,17,18;Ch. $B;K2 Densimeter Coefficient;;;\n\
7.0-64.0.14.10.255;1,3,4;5,6,15,16,17,18,23,25;Ch. $B;Densimeter period for instanteneous measurement;;;\n\
7.0-64.0.14.11.255;1,3,4;5,6,15,16,17,19;Ch. $B;Densimeter period for measurement period 15 minutes;;;\n\
7.0-64.0.15.0-127.255;67;;Ch. $B;Sensor manager objects;;#$(E+1);\n";

static const char* OBIS_CODES_GAS_2 = "\
7.0-64.1-8,11-16,21-26,31-36,61-66.0.0-63.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Index, Value at metering conditions, Current;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.1.0-63.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Index, Corrected value, Current;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.2.0-63.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Index, Value at base conditions / �Converted value�, Current;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.3.0-63.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Index, Current redundant value at metering conditions, Current;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.6.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 1, Index difference, Value at metering conditions, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.7.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 1, Index difference, Corrected value, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.8.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 1, Index difference, Value at base conditions, Current, period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.9.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 1, Index difference, Value at metering conditions, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.10.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 1, Index difference, Corrected value, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.11.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 1, Index difference, Value at base conditions, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.12.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 2, Index difference, Value at metering conditions, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.13.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 2, Index difference, Corrected value, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.14.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 2, Index difference, Value at base conditions, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.15.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 2, Index difference, Value at metering conditions, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.16.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 2, Index difference, Corrected value, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.17.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 2, Index difference, Value at base conditions, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.18.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 3, Index difference, Value at metering conditions, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.19.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 3, Index difference, Corrected value, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.20.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 3, Index difference, Value at base conditions, Current, period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.21.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 3, Index difference, Value at metering conditions, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.22.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 3, Index difference, Corrected value, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.23.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to measurement period 3, Index difference, Value at base conditions, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.24.0-63.0-99,101-126;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 1, Index, Value at metering conditions, Historical;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.25.0-63.0-99,101-126;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 1, Index, Corrected value, Historical;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.26.0-63.0-99,101-126;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 1, Index, Value at base conditions, Historical;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.27.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 1, Index difference, Value at metering conditions, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.28.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 1, Index difference, Corrected value, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.29.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 1, Index difference, Value at base conditions, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.30.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 1, Index difference, Value at metering conditions, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.31.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 1, Index difference, Corrected value, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.32.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 1, Index difference, Value at base conditions, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.33.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 1, Maximum of Index differences over measurement period 1, Value at metering conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.34.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 1, Maximum of Index differences over measurement period 1, Corrected value;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.35.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 1, Maximum of Index differences over measurement period 1, Value at base conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.36.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 1, Maximum of Index differences over measurement period 2, Value at metering conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.37.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 1, Maximum of Index differences over measurement period 2, Corrected value;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.38.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 1, Maximum of Index differences over measurement period 2, Value at base conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.39.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 1, Maximum of Index differences over measurement period 3, Value at metering conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.40.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 1, Maximum of Index differences over measurement period 3, Corrected value;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.41.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 1, Maximum of Index differences over measurement period 3, Value at base conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.42.0-63.0-99,101-126;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Index, Value at metering conditions, Historical;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.43.0-63.0-99,101-126;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Index, Corrected value, Historical;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.44.0-63.0-99,101-126;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Index, Value at base conditions, Historical;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.45.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 2, Index difference, Value at metering conditions, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.46.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 2, Index difference, Corrected value, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.47.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 2, Index difference, Value at base conditions, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.48.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 2, Index difference, Value at metering conditions, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.49.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 2, Index difference, Corrected value, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.50.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 2, Index difference, Value at base conditions, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.51.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Maximum of Index differences over measurement period 1, Value at metering conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.52.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Maximum of Index differences over measurement period 1, Corrected value;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.53.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Maximum of Index differences over measurement period 1, Value at base conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.54.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Maximum of Index differences over measurement period 2, Value at metering conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.55.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Maximum of Index differences over measurement period 2, Corrected value;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.56.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Maximum of Index differences over measurement period 2, Value at base conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.57.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Maximum of Index differences over measurement period 3, Value at metering conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.58.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Maximum of Index differences over measurement period 3, Corrected value;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.59.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Maximum of Index differences over measurement period 3, Value at base conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.60.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Maximum of Index differences over billing period 1, Value at metering conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.61.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Maximum of Index differences over billing period 1, Corrected value;Rate $E (0 is total);Billing period $F (255 is current)\n";

static const char* OBIS_CODES_GAS_3 = "\
7.0-64.1-8,11-16,21-26,31-36,61-66.62.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 2, Maximum of Index differences over billing period 1, Value at base conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.63.0-63.0-99,101-126;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 3, Index, Value at metering conditions, Historical;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.64.0-63.0-99,101-126;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 3, Index, Corrected value, Historical;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.65.0-63.0-99,101-126;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 3, Index, Value at base conditions, Historical;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.66.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 3, Index difference, Value at metering conditions, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.67.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 3, Index difference, Corrected value, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.68.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 3, Index difference, Value at base conditions, Current period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.69.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 3, Index difference, Value at metering conditions, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.70.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 3, Index difference, Corrected value, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.71.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 3, Index difference, Value at base conditions, Last period;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.72.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 3, Maximum of Index differences over measurement period 1, Value at metering conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.73.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 3, Maximum of Index differences over measurement period 1, Corrected value;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.74.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 3, Maximum of Index differences over measurement period 1, Value at base conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.75.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 3, Maximum of Index differences over measurement period 2, Value at metering conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.76.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 3, Maximum of Index differences over measurement period 2, Corrected value;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.77.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 3, Maximum of Index differences over measurement period 2, Value at base conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.78.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 3, Maximum of Index differences over measurement period 3, Value at metering conditions;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.79.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 3, Maximum of Index differences over measurement period 3, Corrected value;Rate $E (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.80.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 3, Maximum of Index differences over measurement period 3, Value at base conditions;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.81.0-63.0-99,101-126;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 4, Index, Value at metering conditions, Historical;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.82.0-63.0-99,101-126;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 4, Index, Corrected value, Historical;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.83.0-63.0-99,101-126;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 4, Index, Value at base conditions, Historical;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.84.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 4, Index difference, Value at metering conditions, Current period;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.85.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 4, Index difference, Corrected value, Current period;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.86.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 4, Index difference, Value at base conditions, Current period;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.87.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 4, Index difference, Value at metering conditions, Last period;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.88.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 4, Index difference, Corrected value, Last period;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.89.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Value relative to billing period 4, Index difference, Value at base conditions, Last period;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.90.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 4, Maximum of Index differences over measurement period 1, Value at metering conditions;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.91.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 4, Maximum of Index differences over measurement period 1, Corrected value;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.92.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 4, Maximum of Index differences over measurement period 1, Value at base conditions;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.93.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 4, Maximum of Index differences over measurement period 2, Value at metering conditions;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.94.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 4, Maximum of Index differences over measurement period 2, Corrected value;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.95.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 4, Maximum of Index differences over measurement period 2, Value at base conditions;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.96.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 4, Maximum of Index differences over measurement period 3, Value at metering conditions;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.97.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 4, Maximum of Index differences over measurement period 3, Corrected value;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.1-8,11-16,21-26,31-36,61-66.98.0-63.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$0;Values relative to billing period 4, Maximum of Index differences over measurement period 3, Value at base conditions;Rate $E (0 is total) (0 is total);Billing period $F (255 is current)\n\
7.0-64.43.0.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Instantaneous, Current value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.1.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Instantaneous, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.2.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Instantaneous, Value at base conditions / �Converted value�;;Billing period $F (255 is current)\n\
7.0-64.43.13.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Instantaneous, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.15.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 1, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.16.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 1, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.17.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 1, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.18.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 1, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.19.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 1, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.20.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 1, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.21.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 1, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.22.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 1, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.23.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 1 relative to measurement period 2, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.24.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 1 relative to measurement period 2, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.25.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 1 relative to measurement period 2, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.26.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 1 relative to measurement period 2, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.27.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 1 relative to measurement period 3, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.28.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 1 relative to measurement period 3, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.29.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 1 relative to measurement period 3, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.30.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 1 relative to measurement period 3, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.31.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 1 relative to billing period 1, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.32.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 1 relative to billing period 1, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.33.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 1 relative to billing period 1, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.34.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 1 relative to billing period 1, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.35.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 2, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.36.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 2, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.37.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 2, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.38.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 2, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.39.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 2, Value at metering conditions;;Billing period $F (255 is current)\n";

static const char* OBIS_CODES_GAS_4 = "\
7.0-64.43.40.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 2, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.41.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 2, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.42.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 2, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.43.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 2 relative to measurement period 2, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.44.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 2 relative to measurement period 2, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.45.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 2 relative to measurement period 2, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.46.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 2 relative to measurement period 2, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.47.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 2 relative to measurement period 3, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.48.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 2 relative to measurement period 3, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.49.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 2 relative to measurement period 3, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.50.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 2 relative to measurement period 3, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.51.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 2 relative to billing period 1, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.52.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 2 relative to billing period 1, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.53.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 2 relative to billing period 1, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.54.0.0-99,101-126,255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Maximum of last averages for averaging period 2 relative to billing period 1, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.55.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 3, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.56.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 3, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.57.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 3, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.58.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 3, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.59.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 3, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.60.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 3, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.61.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 3, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.62.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 3, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.63.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 4, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.64.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 4, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.65.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 4, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.66.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Current average for averaging period 4, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.43.67.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 4, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.43.68.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 4, Corrected value;;Billing period $F (255 is current)\n\
7.0-64.43.69.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 4, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.43.70.0.0-99,101-126,255;3,4,5,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Flow rate;Last average for averaging period 4, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.0.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Instantaneous, Current value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.2.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Instantaneous Value at base conditions / �Converted value�;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.3.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Instantaneous, Backup value;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.10.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Instantaneous, Actual value;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.11.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Instantaneous, Preset value;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.13.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Instantaneous, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.15.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, current interval, process interval 1, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.16.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, current interval, process interval 1, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.17.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, current interval, process interval 1, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.18.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, current interval, process interval 1, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.19.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, current interval, process interval 1, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.20.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, current interval, process interval 1, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.21.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, current interval, process interval 1, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.22.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, current interval, process interval 1, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.23.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, current interval, process interval 1, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.24.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, last interval, process interval 1, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.25.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, last interval, process interval 1, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.26.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, last interval, process interval 1, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.27.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, last interval, process interval 1, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.28.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, last interval, process interval 1, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.29.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, last interval, process interval 1, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.30.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, last interval, process interval 1, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.31.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, last interval, process interval 1, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.32.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, last interval, process interval 1, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.33.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, current interval, process interval 2, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.34.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, current interval, process interval 2, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.35.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, current interval, process interval 2, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.36.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, current interval, process interval 2, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.37.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, current interval, process interval 2, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.38.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, current interval, process interval 2, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.39.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, current interval, process interval 2, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.40.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, current interval, process interval 2, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.41.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, current interval, process interval 2, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.42.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, last interval, process interval 2, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.43.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, last interval, process interval 2, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.44.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, last interval, process interval 2, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.45.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, last interval, process interval 2, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.46.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, last interval, process interval 2, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.47.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, last interval, process interval 2, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.48.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, last interval, process interval 2, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.49.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, last interval, process interval 2, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.50.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, last interval, process interval 2, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.51.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, current interval, process interval 3, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.52.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, current interval, process interval 3, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.53.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, current interval, process interval 3, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.54.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, current interval, process interval 3, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.55.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, current interval, process interval 3, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.56.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, current interval, process interval 3, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.57.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, current interval, process interval 3, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.58.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, current interval, process interval 3, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.59.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, current interval, process interval 3, Value at standard conditions;;Billing period $F (255 is current)\n";

static const char* OBIS_CODES_GAS_5 = "\
7.0-64.41,42,44-49.60.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, last interval, process interval 3, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.61.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, last interval, process interval 3, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.62.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, last interval, process interval 3, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.63.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, last interval, process interval 3, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.64.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, last interval, process interval 3, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.65.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, last interval, process interval 3, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.66.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, last interval, process interval 3, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.67.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, last interval, process interval 3, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.68.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, last interval, process interval 3, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.69.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, current interval, process interval 4, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.70.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, current interval, process interval 4, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.71.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, current interval, process interval 4, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.72.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, current interval, process interval 4, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.73.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, current interval, process interval 4, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.74.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, current interval, process interval 4, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.75.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, current interval, process interval 4, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.76.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, current interval, process interval 4, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.77.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, current interval, process interval 4, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.78.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, last interval, process interval 4, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.79.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, last interval, process interval 4, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.80.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, last interval, process interval 4, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.81.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, last interval, process interval 4, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.82.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, last interval, process interval 4, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.83.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Minimum, last interval, process interval 4, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.84.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, last interval, process interval 4, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.85.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, last interval, process interval 4, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.86.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Maximum, last interval, process interval 4, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.87.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, process interval 5, interval since last event, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.88.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, process interval 5, interval since last event, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.89.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, process interval 5, interval since last event, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.90.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, process interval 6, interval between last two events, Value at metering conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.91.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, process interval 6, interval between last two events, Value at base conditions;;Billing period $F (255 is current)\n\
7.0-64.41,42,44-49.92.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$1;Average, process interval 6, interval between last two events, Value at standard conditions;;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Process independent current value;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.1.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Weighted value (e.g. Superior calorific value);Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.11.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, current interval, averaging period 1;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.12.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, last interval, averaging period 1;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.13.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, current interval, averaging period 2;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.14.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, last interval, averaging period 2;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.15.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, current interval, averaging period 3;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.16.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, last interval, averaging period 3;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.17.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, current interval, averaging period 4;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.18.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, last interval, averaging period 4;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.19.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, current interval, averaging period 5;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.20.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, last interval, averaging period 5;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.21.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, current interval, averaging period 6;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.22.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, last interval, averaging period 6;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.23.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, current interval, averaging period 7;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.24.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, last interval, averaging period 7;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.25.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, current interval, averaging period 8;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.26.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, last interval, averaging period 8;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.27.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, averaging period 9, interval since last event;Billing period $F (255 is current)\n\
7.0-64.51-55.0,2,3,10,11.28.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;$2;$3;Average, averaging period 10, interval between last two events;Billing period $F (255 is current)\n\
7.0-64.51-55.12.0.255;3;;;Calculation method in use;;;\n\
7.0-64.51-55.12.1-20.255;3;;;Calculation method supported;;$E;\n\
7.0-64.70.8-20,60-84.0.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Process independent current value;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.1.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Weighted value (e.g. CO2 in [GJ / t]);Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.11.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, current interval, averaging period 1;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.12.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, last interval, averaging period 1;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.13.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, current interval, averaging period 2;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.14.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, last interval, averaging period 2;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.15.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, current interval, averaging period 3;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.16.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, last interval, averaging period 3;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.17.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, current interval, averaging period 4;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.18.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, last interval, averaging period 4;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.19.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, current interval, averaging period 5;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.20.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, last interval, averaging period 5;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.21.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, current interval, averaging period 6;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.22.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, last interval, averaging period 6;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.23.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, current interval, averaging period 7;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.24.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, last interval, averaging period 7;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.25.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, current interval, averaging period 8;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.26.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, last interval, averaging period 8;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.27.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, averaging period 9, interval since last event;Billing period $F (255 is current)\n\
7.0-64.70.8-20,60-84.28.255;3,4,7;5,6,9,10,13,15,16,17,18,20,21,23,24;Ch. $B;Natural gas analysis;$4;Average, averaging period 10, interval between last two events;Billing period $F (255 is current)\n\
7.0-64.96.5.0.255;1,3,4,63,7,61;3,4,6,9,17,18,21;Ch. $B;Internal operating status, global;;;\n\
7.0-64.96.5.1.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
7.0-64.96.5.2.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
7.0-64.96.5.3.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
7.0-64.96.5.4.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
7.0-64.96.5.5.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
7.0-64.96.5.6.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
7.0-64.96.5.7.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
7.0-64.96.5.8.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
7.0-64.96.5.9.255;1,3,4,63;3,4,6,9,17,18,21;Ch. $B;Internal operating status;;(status word #$E);\n\
7.0-64.96.50-99.0-255.0-255;1,3,4,7,61,63;*;Ch. $B;Manufacturer specific;;;\n\
7.0-64.98.1.0-127.255;7;;Ch. $B;Gas related data of billing period (with billing period scheme 1 if there are more than one schemes available);;;\n\
7.0-64.98.2.0-127.255;7;;Ch. $B;Gas related data of billing period (with billing period scheme 2);;;\n\
7.0-64.98.3.0-127.255;7;;Ch. $B;Gas related data of billing period (with billing period scheme 3);;;\n\
7.0-64.98.4.0-127.255;7;;Ch. $B;Gas related data of billing period (with billing period scheme 4);;;\n\
7.0-64.98.11.0-127.255;7;;Ch. $B;Gas related data of event triggered billing profile;;;\n\
7.0-64.99.1.4.255;7;;Ch. $B;Load profile with recording interval 1;;#$(E+1);\n\
7.0-64.99.2.4.255;7;;Ch. $B;Load profile with recording interval 2;;#$(E+1);\n\
7.0-64.99.3.4.255;7;;Ch. $B;Profile of maxima with recording interval 1;;;\n\
7.0-64.99.4.4.255;7;;Ch. $B;Profile of maxima with recording interval 2;;;\n\
7.0-64.99.1-8,11-16,21-26,31-36,61-66.0-3,6-98.0-99,101-126,255;7;;;Load profile for indexes and index differences of volume, mass and energy;$5;$6;Billing period $F (255 is current)\n\
7.0-64.99.41.255.255;;;;;Absolute temperature;;\n\
7.0-64.99.42.255.255;;;;;Absolute pressure;;\n\
7.0-64.99.44.255.255;;;;;Velocity of sound;;\n\
7.0-64.99.45.255.255;;;;;Density (of gas);;\n\
7.0-64.99.46.255.255;;;;;Relative density;;\n\
7.0-64.99.47.255.255;;;;;Gauge pressure;;\n\
7.0-64.99.48.255.255;;;;;Differential pressure;;\n\
7.0-64.99.49.255.255;;;;;Density of air;;\n";

static const char* OBIS_CODES_GAS_6 = "\
7.0-64.99.41,42,44-49.0,2,13,24-32,42-50,60-68,78-86,90-92.0-99,101-126,255;7;;Ch. $B;Load profile for process values;$7;$8;Billing period $F (255 is current)\n\
7.0-64.99.43.0-2,13,19-22,39-42,59-62,67-70.0-99,101-126,255;7;;Ch. $B;Load profile for;Flow rate;$9;Billing period $F (255 is current)\n\
7.0-64.99.99.0.255;7;;Ch. $B;Certification data log;;#$(E+1);Billing period $F (255 is current)\n\
7.0-64.99.99.1.255;7;;Ch. $B;Load profile with recording interval 15 minutes;;;Billing period $F (255 is current)\n\
7.0-64.99.99.2.255;7;;Ch. $B;Load profile with recording interval 60 minutes;;;Billing period $F (255 is current)\n\
7.0-64.99.99.3.255;7;;Ch. $B;Load profile with recording interval day;;;Billing period $F (255 is current)\n\
7.0-64.99.99.4.255;7;;Ch. $B;Load profile with recording interval month;;;Billing period $F (255 is current)\n\
7.128-254.0-255.0-255.0-255.0-255;*;*;Ch. $B;Manufacturer specific;;;\n\
7.0-64.128-254.0-255.0-255.0-255;*;*;Ch. $B;Manufacturer specific;;;\n\
7.0-64.0-254.128-254.0-255.0-255;*;*;Ch. $B;Manufacturer specific;;;\n\
7.0-64.0-254.0-254.128-254.0-255;*;*;Ch. $B;Manufacturer specific;;;\n\
7.0-64.0-254.0-254.0-254.128-254;*;*;Ch. $B;Manufacturer specific;;;\n";

#endif //DLMS_IGNORE_OBIS_GAS

#endif //OBIS_CODES_H