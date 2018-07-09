/*
BC95 library for Arduino.
Author: Chavee Issariyapat
E-mail: chavee@nexpie.com

This software is released under the MIT License.
*/

#ifndef SETTINGS_h
#define SETTINGS_h

#define BC95_DEBUG                      0
#define ENABLE_COAP_ACK_CALLBACK        0
#define BC95UDP_SHARE_GLOBAL_BUFFER     0

#define SERIAL_READ_CHUNK_SIZE          7
#define DNS_MAX_RETRY                   5
#define MAX_UDP_PAYLOAD_SIZE            160
#define MAX_BC95_BUFFER_SIZE            256
#define DEFAULT_SERIAL_TIMEOUT          500
#define DEFAULT_DNS_SERVER              IPAddress(8,8,8,8)
#endif
