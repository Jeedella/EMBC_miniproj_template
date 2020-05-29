/*********************************************************************
 * File Name: http_print.c
 *
 * Provides callback headers and resolution for user's custom
 * HTTP Application.
 * 
 * This file is automatically generated by the MPFS Utility
 * ALL MODIFICATIONS WILL BE OVERWRITTEN BY THE MPFS GENERATOR
 *
 * Software License Agreement
 *
 * Copyright (C) 2012 Microchip Technology Inc.  All rights
 * reserved.
 * Microchip licenses to you the right to use, modify, copy, and distribute
 * software only embedded on a Microchip microcontroller or digital signal 
 * controller that is integrated into your product or third party product
 * (pursuant to the sublicense terms in the accompanying license agreement)

 * You should refer to the license agreement accompanying this 
 * Software for additional information regarding your rights and 
 * obligations.
 *
 * You should refer to the license agreement accompanying this 
 * Software for additional information regarding your rights and 
 * obligations.
 *
 * THE SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT
 * WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT
 * LIMITATION, ANY WARRANTY OF MERCHANTABILITY, FITNESS FOR A 
 * PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT SHALL
 * MICROCHIP BE LIABLE FOR ANY INCIDENTAL, SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF
 * PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY OR SERVICES, ANY CLAIMS
 * BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE 
 * THEREOF), ANY CLAIMS FOR INDEMNITY OR CONTRIBUTION, OR OTHER 
 * SIMILAR COSTS, WHETHER ASSERTED ON THE BASIS OF CONTRACT, TORT
 * (INCLUDING NEGLIGENCE), BREACH OF WARRANTY, OR OTHERWISE.
 *
 *********************************************************************/

#include "tcpip/tcpip.h"

void TCPIP_HTTP_Print(HTTP_CONN_HANDLE connHandle,uint32_t callbackID);
void TCPIP_HTTP_Print_hellomsg(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_status_fail(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_config_mac(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_config_hostname(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_config_dhcpchecked(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_config_ip(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_config_gw(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_config_subnet(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_config_dns1(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_config_dns2(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_rebootaddr(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_reboot(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_ledSelected(HTTP_CONN_HANDLE connHandle,uint16_t,uint16_t);
void TCPIP_HTTP_Print_uploadedmd5(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_myVariable(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_builddate(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_led(HTTP_CONN_HANDLE connHandle,uint16_t);
void TCPIP_HTTP_Print_version(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_drive(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_fstype(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_cookiename(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_cookiefav(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_btn(HTTP_CONN_HANDLE connHandle,uint16_t);
void TCPIP_HTTP_Print_pot(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_status_ok(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_ddns_status(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_ddns_status_msg(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_ddns_service(HTTP_CONN_HANDLE connHandle,uint16_t);
void TCPIP_HTTP_Print_ddns_user(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_ddns_pass(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_ddns_host(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_smtps_en(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_snmp_en(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_read_comm(HTTP_CONN_HANDLE connHandle,uint16_t);
void TCPIP_HTTP_Print_write_comm(HTTP_CONN_HANDLE connHandle,uint16_t);
void TCPIP_HTTP_Print_hostname(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_machineDesc(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_name(HTTP_CONN_HANDLE connHandle,uint16_t);
void TCPIP_HTTP_Print_stock(HTTP_CONN_HANDLE connHandle,uint16_t);
void TCPIP_HTTP_Print_status(HTTP_CONN_HANDLE connHandle,uint16_t);
void TCPIP_HTTP_Print_lights_chk(HTTP_CONN_HANDLE connHandle,uint16_t);
void TCPIP_HTTP_Print_price(HTTP_CONN_HANDLE connHandle,uint16_t);
void TCPIP_HTTP_Print_angle(HTTP_CONN_HANDLE connHandle);
void TCPIP_HTTP_Print_distance(HTTP_CONN_HANDLE connHandle);

void TCPIP_HTTP_Print(HTTP_CONN_HANDLE connHandle,uint32_t callbackID)
{
    TCP_SOCKET sktHTTP; 
    switch(callbackID)
    {
        case 0x00000001:
			TCPIP_HTTP_Print_hellomsg(connHandle);
			break;
        case 0x00000003:
			TCPIP_HTTP_Print_status_fail(connHandle);
			break;
        case 0x00000004:
			TCPIP_HTTP_Print_config_mac(connHandle);
			break;
        case 0x00000005:
			TCPIP_HTTP_Print_config_hostname(connHandle);
			break;
        case 0x00000006:
			TCPIP_HTTP_Print_config_dhcpchecked(connHandle);
			break;
        case 0x00000007:
			TCPIP_HTTP_Print_config_ip(connHandle);
			break;
        case 0x00000008:
			TCPIP_HTTP_Print_config_gw(connHandle);
			break;
        case 0x00000009:
			TCPIP_HTTP_Print_config_subnet(connHandle);
			break;
        case 0x0000000a:
			TCPIP_HTTP_Print_config_dns1(connHandle);
			break;
        case 0x0000000b:
			TCPIP_HTTP_Print_config_dns2(connHandle);
			break;
        case 0x0000000c:
			TCPIP_HTTP_Print_rebootaddr(connHandle);
			break;
        case 0x0000000d:
			TCPIP_HTTP_Print_reboot(connHandle);
			break;
        case 0x0000000e:
			TCPIP_HTTP_Print_ledSelected(connHandle,2,true);
			break;
        case 0x0000000f:
			TCPIP_HTTP_Print_ledSelected(connHandle,2,false);
			break;
        case 0x00000010:
			TCPIP_HTTP_Print_ledSelected(connHandle,1,true);
			break;
        case 0x00000011:
			TCPIP_HTTP_Print_ledSelected(connHandle,1,false);
			break;
        case 0x00000012:
			TCPIP_HTTP_Print_uploadedmd5(connHandle);
			break;
        case 0x00000013:
			TCPIP_HTTP_Print_myVariable(connHandle);
			break;
        case 0x00000014:
			TCPIP_HTTP_Print_builddate(connHandle);
			break;
        case 0x00000015:
			TCPIP_HTTP_Print_led(connHandle,2);
			break;
        case 0x00000016:
			TCPIP_HTTP_Print_led(connHandle,1);
			break;
        case 0x00000017:
			TCPIP_HTTP_Print_version(connHandle);
			break;
        case 0x00000018:
			TCPIP_HTTP_Print_drive(connHandle);
			break;
        case 0x00000019:
			TCPIP_HTTP_Print_fstype(connHandle);
			break;
        case 0x0000001a:
			TCPIP_HTTP_Print_led(connHandle,0);
			break;
        case 0x0000001b:
			TCPIP_HTTP_Print_cookiename(connHandle);
			break;
        case 0x0000001c:
			TCPIP_HTTP_Print_cookiefav(connHandle);
			break;
        case 0x0000001d:
			TCPIP_HTTP_Print_btn(connHandle,0);
			break;
        case 0x0000001e:
			TCPIP_HTTP_Print_btn(connHandle,1);
			break;
        case 0x0000001f:
			TCPIP_HTTP_Print_btn(connHandle,2);
			break;
        case 0x00000020:
			TCPIP_HTTP_Print_pot(connHandle);
			break;
        case 0x00000021:
			TCPIP_HTTP_Print_status_ok(connHandle);
			break;
        case 0x00000022:
			TCPIP_HTTP_Print_ddns_status(connHandle);
			break;
        case 0x00000023:
			TCPIP_HTTP_Print_ddns_status_msg(connHandle);
			break;
        case 0x00000024:
			TCPIP_HTTP_Print_ddns_service(connHandle,0);
			break;
        case 0x00000025:
			TCPIP_HTTP_Print_ddns_service(connHandle,1);
			break;
        case 0x00000026:
			TCPIP_HTTP_Print_ddns_service(connHandle,2);
			break;
        case 0x00000027:
			TCPIP_HTTP_Print_ddns_user(connHandle);
			break;
        case 0x00000028:
			TCPIP_HTTP_Print_ddns_pass(connHandle);
			break;
        case 0x00000029:
			TCPIP_HTTP_Print_ddns_host(connHandle);
			break;
        case 0x0000002a:
			TCPIP_HTTP_Print_smtps_en(connHandle);
			break;
        case 0x0000002b:
			TCPIP_HTTP_Print_snmp_en(connHandle);
			break;
        case 0x0000002c:
			TCPIP_HTTP_Print_read_comm(connHandle,0);
			break;
        case 0x0000002d:
			TCPIP_HTTP_Print_read_comm(connHandle,1);
			break;
        case 0x0000002e:
			TCPIP_HTTP_Print_read_comm(connHandle,2);
			break;
        case 0x0000002f:
			TCPIP_HTTP_Print_write_comm(connHandle,0);
			break;
        case 0x00000030:
			TCPIP_HTTP_Print_write_comm(connHandle,1);
			break;
        case 0x00000031:
			TCPIP_HTTP_Print_write_comm(connHandle,2);
			break;
        case 0x00000032:
			TCPIP_HTTP_FileInclude(connHandle,(const uint8_t *)"demo/header.inc");
			break;
        case 0x00000033:
			TCPIP_HTTP_FileInclude(connHandle,(const uint8_t *)"demo/footer.inc");
			break;
        case 0x00000034:
			TCPIP_HTTP_Print_hostname(connHandle);
			break;
        case 0x00000035:
			TCPIP_HTTP_Print_machineDesc(connHandle);
			break;
        case 0x00000036:
			TCPIP_HTTP_Print_name(connHandle,0);
			break;
        case 0x00000037:
			TCPIP_HTTP_Print_stock(connHandle,0);
			break;
        case 0x00000038:
			TCPIP_HTTP_Print_name(connHandle,1);
			break;
        case 0x00000039:
			TCPIP_HTTP_Print_stock(connHandle,1);
			break;
        case 0x0000003a:
			TCPIP_HTTP_Print_name(connHandle,2);
			break;
        case 0x0000003b:
			TCPIP_HTTP_Print_stock(connHandle,2);
			break;
        case 0x0000003c:
			TCPIP_HTTP_Print_name(connHandle,3);
			break;
        case 0x0000003d:
			TCPIP_HTTP_Print_stock(connHandle,3);
			break;
        case 0x0000003e:
			TCPIP_HTTP_Print_name(connHandle,4);
			break;
        case 0x0000003f:
			TCPIP_HTTP_Print_stock(connHandle,4);
			break;
        case 0x00000040:
			TCPIP_HTTP_Print_name(connHandle,5);
			break;
        case 0x00000041:
			TCPIP_HTTP_Print_stock(connHandle,5);
			break;
        case 0x00000042:
			TCPIP_HTTP_Print_name(connHandle,6);
			break;
        case 0x00000043:
			TCPIP_HTTP_Print_stock(connHandle,6);
			break;
        case 0x00000044:
			TCPIP_HTTP_Print_status(connHandle,0);
			break;
        case 0x00000045:
			TCPIP_HTTP_Print_status(connHandle,1);
			break;
        case 0x00000046:
			TCPIP_HTTP_Print_status(connHandle,2);
			break;
        case 0x00000047:
			TCPIP_HTTP_Print_status(connHandle,3);
			break;
        case 0x00000048:
			TCPIP_HTTP_Print_status(connHandle,4);
			break;
        case 0x00000049:
			TCPIP_HTTP_Print_status(connHandle,5);
			break;
        case 0x0000004a:
			TCPIP_HTTP_Print_status(connHandle,6);
			break;
        case 0x0000004b:
			TCPIP_HTTP_Print_lights_chk(connHandle,1);
			break;
        case 0x0000004c:
			TCPIP_HTTP_Print_lights_chk(connHandle,0);
			break;
        case 0x0000004d:
			TCPIP_HTTP_Print_price(connHandle,0);
			break;
        case 0x0000004e:
			TCPIP_HTTP_Print_price(connHandle,1);
			break;
        case 0x0000004f:
			TCPIP_HTTP_Print_price(connHandle,2);
			break;
        case 0x00000050:
			TCPIP_HTTP_Print_price(connHandle,3);
			break;
        case 0x00000051:
			TCPIP_HTTP_Print_price(connHandle,4);
			break;
        case 0x00000052:
			TCPIP_HTTP_Print_price(connHandle,5);
			break;
        case 0x00000053:
			TCPIP_HTTP_Print_price(connHandle,6);
			break;
        case 0x00000054:
			TCPIP_HTTP_FileInclude(connHandle,(const uint8_t *)"webvend/header.inc");
			break;
        case 0x00000055:
			TCPIP_HTTP_FileInclude(connHandle,(const uint8_t *)"webvend/footer.inc");
			break;
        case 0x00000056:
			TCPIP_HTTP_Print_angle(connHandle);
			break;
        case 0x00000057:
			TCPIP_HTTP_Print_distance(connHandle);
			break;
        default:
            // Output notification for undefined values
            sktHTTP = TCPIP_HTTP_CurrentConnectionSocketGet(connHandle);
            TCPIP_TCP_ArrayPut(sktHTTP, (const uint8_t *)"!DEF", 4);
    }
    return;
}

void TCPIP_HTTP_Print_myVariable(HTTP_CONN_HANDLE connHandle)
{
    TCP_SOCKET sktHTTP = TCPIP_HTTP_CurrentConnectionSocketGet(connHandle);
    TCPIP_TCP_Put(sktHTTP, '~');
    return;
}
