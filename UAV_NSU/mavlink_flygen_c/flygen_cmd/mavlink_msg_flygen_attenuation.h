#pragma once
// MESSAGE FLYGEN_ATTENUATION PACKING

#define MAVLINK_MSG_ID_FLYGEN_ATTENUATION 1346


typedef struct __mavlink_flygen_attenuation_t {
 uint8_t value; /*<  Attenuation value (0/3/6/18/24/33/36/45) or 100 at request*/
 uint8_t dir; /*<  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS*/
} mavlink_flygen_attenuation_t;

#define MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN 2
#define MAVLINK_MSG_ID_FLYGEN_ATTENUATION_MIN_LEN 2
#define MAVLINK_MSG_ID_1346_LEN 2
#define MAVLINK_MSG_ID_1346_MIN_LEN 2

#define MAVLINK_MSG_ID_FLYGEN_ATTENUATION_CRC 126
#define MAVLINK_MSG_ID_1346_CRC 126



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FLYGEN_ATTENUATION { \
    1346, \
    "FLYGEN_ATTENUATION", \
    2, \
    {  { "value", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_flygen_attenuation_t, value) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_flygen_attenuation_t, dir) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FLYGEN_ATTENUATION { \
    "FLYGEN_ATTENUATION", \
    2, \
    {  { "value", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_flygen_attenuation_t, value) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_flygen_attenuation_t, dir) }, \
         } \
}
#endif

/**
 * @brief Pack a flygen_attenuation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param value  Attenuation value (0/3/6/18/24/33/36/45) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_attenuation_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t value, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN];
    _mav_put_uint8_t(buf, 0, value);
    _mav_put_uint8_t(buf, 1, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN);
#else
    mavlink_flygen_attenuation_t packet;
    packet.value = value;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_ATTENUATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_CRC);
}

/**
 * @brief Pack a flygen_attenuation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param value  Attenuation value (0/3/6/18/24/33/36/45) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_attenuation_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t value, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN];
    _mav_put_uint8_t(buf, 0, value);
    _mav_put_uint8_t(buf, 1, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN);
#else
    mavlink_flygen_attenuation_t packet;
    packet.value = value;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_ATTENUATION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN);
#endif
}

/**
 * @brief Pack a flygen_attenuation message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param value  Attenuation value (0/3/6/18/24/33/36/45) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_attenuation_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t value,uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN];
    _mav_put_uint8_t(buf, 0, value);
    _mav_put_uint8_t(buf, 1, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN);
#else
    mavlink_flygen_attenuation_t packet;
    packet.value = value;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_ATTENUATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_CRC);
}

/**
 * @brief Encode a flygen_attenuation struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param flygen_attenuation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_attenuation_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_flygen_attenuation_t* flygen_attenuation)
{
    return mavlink_msg_flygen_attenuation_pack(system_id, component_id, msg, flygen_attenuation->value, flygen_attenuation->dir);
}

/**
 * @brief Encode a flygen_attenuation struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flygen_attenuation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_attenuation_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_flygen_attenuation_t* flygen_attenuation)
{
    return mavlink_msg_flygen_attenuation_pack_chan(system_id, component_id, chan, msg, flygen_attenuation->value, flygen_attenuation->dir);
}

/**
 * @brief Encode a flygen_attenuation struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param flygen_attenuation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_attenuation_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_flygen_attenuation_t* flygen_attenuation)
{
    return mavlink_msg_flygen_attenuation_pack_status(system_id, component_id, _status, msg,  flygen_attenuation->value, flygen_attenuation->dir);
}

/**
 * @brief Send a flygen_attenuation message
 * @param chan MAVLink channel to send the message
 *
 * @param value  Attenuation value (0/3/6/18/24/33/36/45) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_flygen_attenuation_send(mavlink_channel_t chan, uint8_t value, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN];
    _mav_put_uint8_t(buf, 0, value);
    _mav_put_uint8_t(buf, 1, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_ATTENUATION, buf, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_CRC);
#else
    mavlink_flygen_attenuation_t packet;
    packet.value = value;
    packet.dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_ATTENUATION, (const char *)&packet, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_CRC);
#endif
}

/**
 * @brief Send a flygen_attenuation message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_flygen_attenuation_send_struct(mavlink_channel_t chan, const mavlink_flygen_attenuation_t* flygen_attenuation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_flygen_attenuation_send(chan, flygen_attenuation->value, flygen_attenuation->dir);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_ATTENUATION, (const char *)flygen_attenuation, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_flygen_attenuation_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t value, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, value);
    _mav_put_uint8_t(buf, 1, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_ATTENUATION, buf, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_CRC);
#else
    mavlink_flygen_attenuation_t *packet = (mavlink_flygen_attenuation_t *)msgbuf;
    packet->value = value;
    packet->dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_ATTENUATION, (const char *)packet, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_CRC);
#endif
}
#endif

#endif

// MESSAGE FLYGEN_ATTENUATION UNPACKING


/**
 * @brief Get field value from flygen_attenuation message
 *
 * @return  Attenuation value (0/3/6/18/24/33/36/45) or 100 at request
 */
static inline uint8_t mavlink_msg_flygen_attenuation_get_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field dir from flygen_attenuation message
 *
 * @return  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
static inline uint8_t mavlink_msg_flygen_attenuation_get_dir(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a flygen_attenuation message into a struct
 *
 * @param msg The message to decode
 * @param flygen_attenuation C-struct to decode the message contents into
 */
static inline void mavlink_msg_flygen_attenuation_decode(const mavlink_message_t* msg, mavlink_flygen_attenuation_t* flygen_attenuation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    flygen_attenuation->value = mavlink_msg_flygen_attenuation_get_value(msg);
    flygen_attenuation->dir = mavlink_msg_flygen_attenuation_get_dir(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN? msg->len : MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN;
        memset(flygen_attenuation, 0, MAVLINK_MSG_ID_FLYGEN_ATTENUATION_LEN);
    memcpy(flygen_attenuation, _MAV_PAYLOAD(msg), len);
#endif
}
