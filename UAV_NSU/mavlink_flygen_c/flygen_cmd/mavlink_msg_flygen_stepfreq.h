#pragma once
// MESSAGE FLYGEN_STEPFREQ PACKING

#define MAVLINK_MSG_ID_FLYGEN_STEPFREQ 1343


typedef struct __mavlink_flygen_stepfreq_t {
 uint64_t value; /*<  Frequency hopping step value (1 MHz - 1 GHz) or 0 at request*/
 char unit; /*<  Step frequency unit (H/K/M/G/empty)*/
 uint8_t dir; /*<  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS*/
} mavlink_flygen_stepfreq_t;

#define MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN 10
#define MAVLINK_MSG_ID_FLYGEN_STEPFREQ_MIN_LEN 10
#define MAVLINK_MSG_ID_1343_LEN 10
#define MAVLINK_MSG_ID_1343_MIN_LEN 10

#define MAVLINK_MSG_ID_FLYGEN_STEPFREQ_CRC 53
#define MAVLINK_MSG_ID_1343_CRC 53



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FLYGEN_STEPFREQ { \
    1343, \
    "FLYGEN_STEPFREQ", \
    3, \
    {  { "value", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_flygen_stepfreq_t, value) }, \
         { "unit", NULL, MAVLINK_TYPE_CHAR, 0, 8, offsetof(mavlink_flygen_stepfreq_t, unit) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_flygen_stepfreq_t, dir) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FLYGEN_STEPFREQ { \
    "FLYGEN_STEPFREQ", \
    3, \
    {  { "value", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_flygen_stepfreq_t, value) }, \
         { "unit", NULL, MAVLINK_TYPE_CHAR, 0, 8, offsetof(mavlink_flygen_stepfreq_t, unit) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_flygen_stepfreq_t, dir) }, \
         } \
}
#endif

/**
 * @brief Pack a flygen_stepfreq message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param value  Frequency hopping step value (1 MHz - 1 GHz) or 0 at request
 * @param unit  Step frequency unit (H/K/M/G/empty)
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_stepfreq_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t value, char unit, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN];
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN);
#else
    mavlink_flygen_stepfreq_t packet;
    packet.value = value;
    packet.unit = unit;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_STEPFREQ;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_CRC);
}

/**
 * @brief Pack a flygen_stepfreq message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param value  Frequency hopping step value (1 MHz - 1 GHz) or 0 at request
 * @param unit  Step frequency unit (H/K/M/G/empty)
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_stepfreq_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t value, char unit, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN];
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN);
#else
    mavlink_flygen_stepfreq_t packet;
    packet.value = value;
    packet.unit = unit;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_STEPFREQ;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN);
#endif
}

/**
 * @brief Pack a flygen_stepfreq message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param value  Frequency hopping step value (1 MHz - 1 GHz) or 0 at request
 * @param unit  Step frequency unit (H/K/M/G/empty)
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_stepfreq_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t value,char unit,uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN];
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN);
#else
    mavlink_flygen_stepfreq_t packet;
    packet.value = value;
    packet.unit = unit;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_STEPFREQ;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_CRC);
}

/**
 * @brief Encode a flygen_stepfreq struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param flygen_stepfreq C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_stepfreq_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_flygen_stepfreq_t* flygen_stepfreq)
{
    return mavlink_msg_flygen_stepfreq_pack(system_id, component_id, msg, flygen_stepfreq->value, flygen_stepfreq->unit, flygen_stepfreq->dir);
}

/**
 * @brief Encode a flygen_stepfreq struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flygen_stepfreq C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_stepfreq_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_flygen_stepfreq_t* flygen_stepfreq)
{
    return mavlink_msg_flygen_stepfreq_pack_chan(system_id, component_id, chan, msg, flygen_stepfreq->value, flygen_stepfreq->unit, flygen_stepfreq->dir);
}

/**
 * @brief Encode a flygen_stepfreq struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param flygen_stepfreq C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_stepfreq_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_flygen_stepfreq_t* flygen_stepfreq)
{
    return mavlink_msg_flygen_stepfreq_pack_status(system_id, component_id, _status, msg,  flygen_stepfreq->value, flygen_stepfreq->unit, flygen_stepfreq->dir);
}

/**
 * @brief Send a flygen_stepfreq message
 * @param chan MAVLink channel to send the message
 *
 * @param value  Frequency hopping step value (1 MHz - 1 GHz) or 0 at request
 * @param unit  Step frequency unit (H/K/M/G/empty)
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_flygen_stepfreq_send(mavlink_channel_t chan, uint64_t value, char unit, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN];
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_STEPFREQ, buf, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_CRC);
#else
    mavlink_flygen_stepfreq_t packet;
    packet.value = value;
    packet.unit = unit;
    packet.dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_STEPFREQ, (const char *)&packet, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_CRC);
#endif
}

/**
 * @brief Send a flygen_stepfreq message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_flygen_stepfreq_send_struct(mavlink_channel_t chan, const mavlink_flygen_stepfreq_t* flygen_stepfreq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_flygen_stepfreq_send(chan, flygen_stepfreq->value, flygen_stepfreq->unit, flygen_stepfreq->dir);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_STEPFREQ, (const char *)flygen_stepfreq, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_CRC);
#endif
}

#if MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_flygen_stepfreq_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t value, char unit, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_STEPFREQ, buf, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_CRC);
#else
    mavlink_flygen_stepfreq_t *packet = (mavlink_flygen_stepfreq_t *)msgbuf;
    packet->value = value;
    packet->unit = unit;
    packet->dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_STEPFREQ, (const char *)packet, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_CRC);
#endif
}
#endif

#endif

// MESSAGE FLYGEN_STEPFREQ UNPACKING


/**
 * @brief Get field value from flygen_stepfreq message
 *
 * @return  Frequency hopping step value (1 MHz - 1 GHz) or 0 at request
 */
static inline uint64_t mavlink_msg_flygen_stepfreq_get_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field unit from flygen_stepfreq message
 *
 * @return  Step frequency unit (H/K/M/G/empty)
 */
static inline char mavlink_msg_flygen_stepfreq_get_unit(const mavlink_message_t* msg)
{
    return _MAV_RETURN_char(msg,  8);
}

/**
 * @brief Get field dir from flygen_stepfreq message
 *
 * @return  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
static inline uint8_t mavlink_msg_flygen_stepfreq_get_dir(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Decode a flygen_stepfreq message into a struct
 *
 * @param msg The message to decode
 * @param flygen_stepfreq C-struct to decode the message contents into
 */
static inline void mavlink_msg_flygen_stepfreq_decode(const mavlink_message_t* msg, mavlink_flygen_stepfreq_t* flygen_stepfreq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    flygen_stepfreq->value = mavlink_msg_flygen_stepfreq_get_value(msg);
    flygen_stepfreq->unit = mavlink_msg_flygen_stepfreq_get_unit(msg);
    flygen_stepfreq->dir = mavlink_msg_flygen_stepfreq_get_dir(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN? msg->len : MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN;
        memset(flygen_stepfreq, 0, MAVLINK_MSG_ID_FLYGEN_STEPFREQ_LEN);
    memcpy(flygen_stepfreq, _MAV_PAYLOAD(msg), len);
#endif
}
