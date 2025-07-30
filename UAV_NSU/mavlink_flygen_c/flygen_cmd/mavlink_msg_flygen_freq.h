#pragma once
// MESSAGE FLYGEN_FREQ PACKING

#define MAVLINK_MSG_ID_FLYGEN_FREQ 1338


typedef struct __mavlink_flygen_freq_t {
 uint64_t value; /*<  Frequency value (30 MHz - 6.5 GHz) or 0 at request*/
 char unit; /*<  Frequency unit (H/K/M/G/empty)*/
 uint8_t dir; /*<  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS*/
} mavlink_flygen_freq_t;

#define MAVLINK_MSG_ID_FLYGEN_FREQ_LEN 10
#define MAVLINK_MSG_ID_FLYGEN_FREQ_MIN_LEN 10
#define MAVLINK_MSG_ID_1338_LEN 10
#define MAVLINK_MSG_ID_1338_MIN_LEN 10

#define MAVLINK_MSG_ID_FLYGEN_FREQ_CRC 255
#define MAVLINK_MSG_ID_1338_CRC 255



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FLYGEN_FREQ { \
    1338, \
    "FLYGEN_FREQ", \
    3, \
    {  { "value", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_flygen_freq_t, value) }, \
         { "unit", NULL, MAVLINK_TYPE_CHAR, 0, 8, offsetof(mavlink_flygen_freq_t, unit) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_flygen_freq_t, dir) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FLYGEN_FREQ { \
    "FLYGEN_FREQ", \
    3, \
    {  { "value", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_flygen_freq_t, value) }, \
         { "unit", NULL, MAVLINK_TYPE_CHAR, 0, 8, offsetof(mavlink_flygen_freq_t, unit) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_flygen_freq_t, dir) }, \
         } \
}
#endif

/**
 * @brief Pack a flygen_freq message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param value  Frequency value (30 MHz - 6.5 GHz) or 0 at request
 * @param unit  Frequency unit (H/K/M/G/empty)
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_freq_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t value, char unit, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_FREQ_LEN];
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN);
#else
    mavlink_flygen_freq_t packet;
    packet.value = value;
    packet.unit = unit;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_FREQ;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FLYGEN_FREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_CRC);
}

/**
 * @brief Pack a flygen_freq message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param value  Frequency value (30 MHz - 6.5 GHz) or 0 at request
 * @param unit  Frequency unit (H/K/M/G/empty)
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_freq_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t value, char unit, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_FREQ_LEN];
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN);
#else
    mavlink_flygen_freq_t packet;
    packet.value = value;
    packet.unit = unit;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_FREQ;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_FREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_FREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN);
#endif
}

/**
 * @brief Pack a flygen_freq message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param value  Frequency value (30 MHz - 6.5 GHz) or 0 at request
 * @param unit  Frequency unit (H/K/M/G/empty)
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_freq_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t value,char unit,uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_FREQ_LEN];
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN);
#else
    mavlink_flygen_freq_t packet;
    packet.value = value;
    packet.unit = unit;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_FREQ;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FLYGEN_FREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_CRC);
}

/**
 * @brief Encode a flygen_freq struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param flygen_freq C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_freq_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_flygen_freq_t* flygen_freq)
{
    return mavlink_msg_flygen_freq_pack(system_id, component_id, msg, flygen_freq->value, flygen_freq->unit, flygen_freq->dir);
}

/**
 * @brief Encode a flygen_freq struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flygen_freq C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_freq_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_flygen_freq_t* flygen_freq)
{
    return mavlink_msg_flygen_freq_pack_chan(system_id, component_id, chan, msg, flygen_freq->value, flygen_freq->unit, flygen_freq->dir);
}

/**
 * @brief Encode a flygen_freq struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param flygen_freq C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_freq_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_flygen_freq_t* flygen_freq)
{
    return mavlink_msg_flygen_freq_pack_status(system_id, component_id, _status, msg,  flygen_freq->value, flygen_freq->unit, flygen_freq->dir);
}

/**
 * @brief Send a flygen_freq message
 * @param chan MAVLink channel to send the message
 *
 * @param value  Frequency value (30 MHz - 6.5 GHz) or 0 at request
 * @param unit  Frequency unit (H/K/M/G/empty)
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_flygen_freq_send(mavlink_channel_t chan, uint64_t value, char unit, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_FREQ_LEN];
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_FREQ, buf, MAVLINK_MSG_ID_FLYGEN_FREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_CRC);
#else
    mavlink_flygen_freq_t packet;
    packet.value = value;
    packet.unit = unit;
    packet.dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_FREQ, (const char *)&packet, MAVLINK_MSG_ID_FLYGEN_FREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_CRC);
#endif
}

/**
 * @brief Send a flygen_freq message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_flygen_freq_send_struct(mavlink_channel_t chan, const mavlink_flygen_freq_t* flygen_freq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_flygen_freq_send(chan, flygen_freq->value, flygen_freq->unit, flygen_freq->dir);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_FREQ, (const char *)flygen_freq, MAVLINK_MSG_ID_FLYGEN_FREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_CRC);
#endif
}

#if MAVLINK_MSG_ID_FLYGEN_FREQ_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_flygen_freq_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t value, char unit, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_FREQ, buf, MAVLINK_MSG_ID_FLYGEN_FREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_CRC);
#else
    mavlink_flygen_freq_t *packet = (mavlink_flygen_freq_t *)msgbuf;
    packet->value = value;
    packet->unit = unit;
    packet->dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_FREQ, (const char *)packet, MAVLINK_MSG_ID_FLYGEN_FREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN, MAVLINK_MSG_ID_FLYGEN_FREQ_CRC);
#endif
}
#endif

#endif

// MESSAGE FLYGEN_FREQ UNPACKING


/**
 * @brief Get field value from flygen_freq message
 *
 * @return  Frequency value (30 MHz - 6.5 GHz) or 0 at request
 */
static inline uint64_t mavlink_msg_flygen_freq_get_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field unit from flygen_freq message
 *
 * @return  Frequency unit (H/K/M/G/empty)
 */
static inline char mavlink_msg_flygen_freq_get_unit(const mavlink_message_t* msg)
{
    return _MAV_RETURN_char(msg,  8);
}

/**
 * @brief Get field dir from flygen_freq message
 *
 * @return  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
static inline uint8_t mavlink_msg_flygen_freq_get_dir(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Decode a flygen_freq message into a struct
 *
 * @param msg The message to decode
 * @param flygen_freq C-struct to decode the message contents into
 */
static inline void mavlink_msg_flygen_freq_decode(const mavlink_message_t* msg, mavlink_flygen_freq_t* flygen_freq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    flygen_freq->value = mavlink_msg_flygen_freq_get_value(msg);
    flygen_freq->unit = mavlink_msg_flygen_freq_get_unit(msg);
    flygen_freq->dir = mavlink_msg_flygen_freq_get_dir(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FLYGEN_FREQ_LEN? msg->len : MAVLINK_MSG_ID_FLYGEN_FREQ_LEN;
        memset(flygen_freq, 0, MAVLINK_MSG_ID_FLYGEN_FREQ_LEN);
    memcpy(flygen_freq, _MAV_PAYLOAD(msg), len);
#endif
}
