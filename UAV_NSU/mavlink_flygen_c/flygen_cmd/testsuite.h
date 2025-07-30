/** @file
 *    @brief MAVLink comm protocol testsuite generated from flygen_cmd.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef FLYGEN_CMD_TESTSUITE_H
#define FLYGEN_CMD_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_ardupilotmega(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_flygen_cmd(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_ardupilotmega(system_id, component_id, last_msg);
    mavlink_test_flygen_cmd(system_id, component_id, last_msg);
}
#endif

#include "../ardupilotmega/testsuite.h"


static void mavlink_test_flygen_shdn(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FLYGEN_SHDN >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_flygen_shdn_t packet_in = {
        5
    };
    mavlink_flygen_shdn_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.dir = packet_in.dir;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FLYGEN_SHDN_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FLYGEN_SHDN_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_shdn_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_flygen_shdn_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_shdn_pack(system_id, component_id, &msg , packet1.dir );
    mavlink_msg_flygen_shdn_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_shdn_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.dir );
    mavlink_msg_flygen_shdn_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_flygen_shdn_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_shdn_send(MAVLINK_COMM_1 , packet1.dir );
    mavlink_msg_flygen_shdn_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FLYGEN_SHDN") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FLYGEN_SHDN) != NULL);
#endif
}

static void mavlink_test_flygen_freq(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FLYGEN_FREQ >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_flygen_freq_t packet_in = {
        93372036854775807ULL,'I',96
    };
    mavlink_flygen_freq_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.value = packet_in.value;
        packet1.unit = packet_in.unit;
        packet1.dir = packet_in.dir;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FLYGEN_FREQ_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FLYGEN_FREQ_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_freq_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_flygen_freq_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_freq_pack(system_id, component_id, &msg , packet1.value , packet1.unit , packet1.dir );
    mavlink_msg_flygen_freq_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_freq_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.value , packet1.unit , packet1.dir );
    mavlink_msg_flygen_freq_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_flygen_freq_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_freq_send(MAVLINK_COMM_1 , packet1.value , packet1.unit , packet1.dir );
    mavlink_msg_flygen_freq_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FLYGEN_FREQ") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FLYGEN_FREQ) != NULL);
#endif
}

static void mavlink_test_flygen_lvl(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FLYGEN_LVL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_flygen_lvl_t packet_in = {
        5,72
    };
    mavlink_flygen_lvl_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.value = packet_in.value;
        packet1.dir = packet_in.dir;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FLYGEN_LVL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FLYGEN_LVL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_lvl_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_flygen_lvl_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_lvl_pack(system_id, component_id, &msg , packet1.value , packet1.dir );
    mavlink_msg_flygen_lvl_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_lvl_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.value , packet1.dir );
    mavlink_msg_flygen_lvl_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_flygen_lvl_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_lvl_send(MAVLINK_COMM_1 , packet1.value , packet1.dir );
    mavlink_msg_flygen_lvl_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FLYGEN_LVL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FLYGEN_LVL) != NULL);
#endif
}

static void mavlink_test_flygen_mode(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FLYGEN_MODE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_flygen_mode_t packet_in = {
        5,72
    };
    mavlink_flygen_mode_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.mode = packet_in.mode;
        packet1.dir = packet_in.dir;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FLYGEN_MODE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FLYGEN_MODE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_mode_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_flygen_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_mode_pack(system_id, component_id, &msg , packet1.mode , packet1.dir );
    mavlink_msg_flygen_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_mode_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mode , packet1.dir );
    mavlink_msg_flygen_mode_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_flygen_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_mode_send(MAVLINK_COMM_1 , packet1.mode , packet1.dir );
    mavlink_msg_flygen_mode_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FLYGEN_MODE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FLYGEN_MODE) != NULL);
#endif
}

static void mavlink_test_flygen_power(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FLYGEN_POWER >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_flygen_power_t packet_in = {
        5,72
    };
    mavlink_flygen_power_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.state = packet_in.state;
        packet1.dir = packet_in.dir;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FLYGEN_POWER_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FLYGEN_POWER_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_power_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_flygen_power_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_power_pack(system_id, component_id, &msg , packet1.state , packet1.dir );
    mavlink_msg_flygen_power_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_power_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.state , packet1.dir );
    mavlink_msg_flygen_power_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_flygen_power_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_power_send(MAVLINK_COMM_1 , packet1.state , packet1.dir );
    mavlink_msg_flygen_power_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FLYGEN_POWER") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FLYGEN_POWER) != NULL);
#endif
}

static void mavlink_test_flygen_endfreq(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FLYGEN_ENDFREQ >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_flygen_endfreq_t packet_in = {
        93372036854775807ULL,'I',96
    };
    mavlink_flygen_endfreq_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.value = packet_in.value;
        packet1.unit = packet_in.unit;
        packet1.dir = packet_in.dir;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FLYGEN_ENDFREQ_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FLYGEN_ENDFREQ_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_endfreq_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_flygen_endfreq_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_endfreq_pack(system_id, component_id, &msg , packet1.value , packet1.unit , packet1.dir );
    mavlink_msg_flygen_endfreq_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_endfreq_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.value , packet1.unit , packet1.dir );
    mavlink_msg_flygen_endfreq_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_flygen_endfreq_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_endfreq_send(MAVLINK_COMM_1 , packet1.value , packet1.unit , packet1.dir );
    mavlink_msg_flygen_endfreq_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FLYGEN_ENDFREQ") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FLYGEN_ENDFREQ) != NULL);
#endif
}

static void mavlink_test_flygen_stepfreq(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FLYGEN_STEPFREQ >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_flygen_stepfreq_t packet_in = {
        93372036854775807ULL,'I',96
    };
    mavlink_flygen_stepfreq_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.value = packet_in.value;
        packet1.unit = packet_in.unit;
        packet1.dir = packet_in.dir;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FLYGEN_STEPFREQ_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FLYGEN_STEPFREQ_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_stepfreq_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_flygen_stepfreq_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_stepfreq_pack(system_id, component_id, &msg , packet1.value , packet1.unit , packet1.dir );
    mavlink_msg_flygen_stepfreq_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_stepfreq_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.value , packet1.unit , packet1.dir );
    mavlink_msg_flygen_stepfreq_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_flygen_stepfreq_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_stepfreq_send(MAVLINK_COMM_1 , packet1.value , packet1.unit , packet1.dir );
    mavlink_msg_flygen_stepfreq_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FLYGEN_STEPFREQ") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FLYGEN_STEPFREQ) != NULL);
#endif
}

static void mavlink_test_flygen_steptime(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FLYGEN_STEPTIME >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_flygen_steptime_t packet_in = {
        963497464,17
    };
    mavlink_flygen_steptime_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.value = packet_in.value;
        packet1.dir = packet_in.dir;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FLYGEN_STEPTIME_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FLYGEN_STEPTIME_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_steptime_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_flygen_steptime_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_steptime_pack(system_id, component_id, &msg , packet1.value , packet1.dir );
    mavlink_msg_flygen_steptime_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_steptime_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.value , packet1.dir );
    mavlink_msg_flygen_steptime_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_flygen_steptime_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_steptime_send(MAVLINK_COMM_1 , packet1.value , packet1.dir );
    mavlink_msg_flygen_steptime_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FLYGEN_STEPTIME") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FLYGEN_STEPTIME) != NULL);
#endif
}

static void mavlink_test_flygen_rfswitch(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FLYGEN_RFSWITCH >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_flygen_rfswitch_t packet_in = {
        5,72
    };
    mavlink_flygen_rfswitch_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.state = packet_in.state;
        packet1.dir = packet_in.dir;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FLYGEN_RFSWITCH_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FLYGEN_RFSWITCH_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_rfswitch_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_flygen_rfswitch_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_rfswitch_pack(system_id, component_id, &msg , packet1.state , packet1.dir );
    mavlink_msg_flygen_rfswitch_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_rfswitch_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.state , packet1.dir );
    mavlink_msg_flygen_rfswitch_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_flygen_rfswitch_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_rfswitch_send(MAVLINK_COMM_1 , packet1.state , packet1.dir );
    mavlink_msg_flygen_rfswitch_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FLYGEN_RFSWITCH") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FLYGEN_RFSWITCH) != NULL);
#endif
}

static void mavlink_test_flygen_attenuation(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FLYGEN_ATTENUATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_flygen_attenuation_t packet_in = {
        5,72
    };
    mavlink_flygen_attenuation_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.value = packet_in.value;
        packet1.dir = packet_in.dir;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FLYGEN_ATTENUATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FLYGEN_ATTENUATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_attenuation_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_flygen_attenuation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_attenuation_pack(system_id, component_id, &msg , packet1.value , packet1.dir );
    mavlink_msg_flygen_attenuation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_attenuation_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.value , packet1.dir );
    mavlink_msg_flygen_attenuation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_flygen_attenuation_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_attenuation_send(MAVLINK_COMM_1 , packet1.value , packet1.dir );
    mavlink_msg_flygen_attenuation_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FLYGEN_ATTENUATION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FLYGEN_ATTENUATION) != NULL);
#endif
}

static void mavlink_test_flygen_init(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_FLYGEN_INIT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_flygen_init_t packet_in = {
        93372036854775807ULL,29,96,163
    };
    mavlink_flygen_init_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.freq = packet_in.freq;
        packet1.serial = packet_in.serial;
        packet1.mavch = packet_in.mavch;
        packet1.lvl = packet_in.lvl;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_FLYGEN_INIT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_FLYGEN_INIT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_init_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_flygen_init_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_init_pack(system_id, component_id, &msg , packet1.serial , packet1.mavch , packet1.freq , packet1.lvl );
    mavlink_msg_flygen_init_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_init_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.serial , packet1.mavch , packet1.freq , packet1.lvl );
    mavlink_msg_flygen_init_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_flygen_init_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_flygen_init_send(MAVLINK_COMM_1 , packet1.serial , packet1.mavch , packet1.freq , packet1.lvl );
    mavlink_msg_flygen_init_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("FLYGEN_INIT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_FLYGEN_INIT) != NULL);
#endif
}

static void mavlink_test_flygen_cmd(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_flygen_shdn(system_id, component_id, last_msg);
    mavlink_test_flygen_freq(system_id, component_id, last_msg);
    mavlink_test_flygen_lvl(system_id, component_id, last_msg);
    mavlink_test_flygen_mode(system_id, component_id, last_msg);
    mavlink_test_flygen_power(system_id, component_id, last_msg);
    mavlink_test_flygen_endfreq(system_id, component_id, last_msg);
    mavlink_test_flygen_stepfreq(system_id, component_id, last_msg);
    mavlink_test_flygen_steptime(system_id, component_id, last_msg);
    mavlink_test_flygen_rfswitch(system_id, component_id, last_msg);
    mavlink_test_flygen_attenuation(system_id, component_id, last_msg);
    mavlink_test_flygen_init(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // FLYGEN_CMD_TESTSUITE_H
