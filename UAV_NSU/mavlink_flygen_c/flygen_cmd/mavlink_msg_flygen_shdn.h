#pragma once
// MESSAGE FLYGEN_SHDN PACKING

#define MAVLINK_MSG_ID_FLYGEN_SHDN 1337


typedef struct __mavlink_flygen_shdn_t {
 uint8_t dir; /*<  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS*/
} mavlink_flygen_shdn_t;

#define MAVLINK_MSG_ID_FLYGEN_SHDN_LEN 1
#define MAVLINK_MSG_ID_FLYGEN_SHDN_MIN_LEN 1
#define MAVLINK_MSG_ID_1337_LEN 1
#define MAVLINK_MSG_ID_1337_MIN_LEN 1

#define MAVLINK_MSG_ID_FLYGEN_SHDN_CRC 111
#define MAVLINK_MSG_ID_1337_CRC 111



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FLYGEN_SHDN { \
    1337, \
    "FLYGEN_SHDN", \
    1, \
    {  { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_flygen_shdn_t, dir) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FLYGEN_SHDN { \
    "FLYGEN_SHDN", \
    1, \
    {  { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_flygen_shdn_t, dir) }, \
         } \
}
#endif

/**
 * @brief Pack a flygen_shdn message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_shdn_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_SHDN_LEN];
    _mav_put_uint8_t(buf, 0, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN);
#else
    mavlink_flygen_shdn_t packet;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_SHDN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FLYGEN_SHDN_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_CRC);
}

/**
 * @brief Pack a flygen_shdn message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_shdn_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_SHDN_LEN];
    _mav_put_uint8_t(buf, 0, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN);
#else
    mavlink_flygen_shdn_t packet;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_SHDN;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_SHDN_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_SHDN_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN);
#endif
}

/**
 * @brief Pack a flygen_shdn message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_shdn_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_SHDN_LEN];
    _mav_put_uint8_t(buf, 0, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN);
#else
    mavlink_flygen_shdn_t packet;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_SHDN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FLYGEN_SHDN_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_CRC);
}

/**
 * @brief Encode a flygen_shdn struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param flygen_shdn C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_shdn_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_flygen_shdn_t* flygen_shdn)
{
    return mavlink_msg_flygen_shdn_pack(system_id, component_id, msg, flygen_shdn->dir);
}

/**
 * @brief Encode a flygen_shdn struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flygen_shdn C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_shdn_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_flygen_shdn_t* flygen_shdn)
{
    return mavlink_msg_flygen_shdn_pack_chan(system_id, component_id, chan, msg, flygen_shdn->dir);
}

/**
 * @brief Encode a flygen_shdn struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param flygen_shdn C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_shdn_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_flygen_shdn_t* flygen_shdn)
{
    return mavlink_msg_flygen_shdn_pack_status(system_id, component_id, _status, msg,  flygen_shdn->dir);
}

/**
 * @brief Send a flygen_shdn message
 * @param chan MAVLink channel to send the message
 *
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_flygen_shdn_send(mavlink_channel_t chan, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_SHDN_LEN];
    _mav_put_uint8_t(buf, 0, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_SHDN, buf, MAVLINK_MSG_ID_FLYGEN_SHDN_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_CRC);
#else
    mavlink_flygen_shdn_t packet;
    packet.dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_SHDN, (const char *)&packet, MAVLINK_MSG_ID_FLYGEN_SHDN_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_CRC);
#endif
}

/**
 * @brief Send a flygen_shdn message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_flygen_shdn_send_struct(mavlink_channel_t chan, const mavlink_flygen_shdn_t* flygen_shdn)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_flygen_shdn_send(chan, flygen_shdn->dir);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_SHDN, (const char *)flygen_shdn, MAVLINK_MSG_ID_FLYGEN_SHDN_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_CRC);
#endif
}

#if MAVLINK_MSG_ID_FLYGEN_SHDN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_flygen_shdn_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_SHDN, buf, MAVLINK_MSG_ID_FLYGEN_SHDN_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_CRC);
#else
    mavlink_flygen_shdn_t *packet = (mavlink_flygen_shdn_t *)msgbuf;
    packet->dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_SHDN, (const char *)packet, MAVLINK_MSG_ID_FLYGEN_SHDN_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN, MAVLINK_MSG_ID_FLYGEN_SHDN_CRC);
#endif
}
#endif

#endif

// MESSAGE FLYGEN_SHDN UNPACKING


/**
 * @brief Get field dir from flygen_shdn message
 *
 * @return  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
static inline uint8_t mavlink_msg_flygen_shdn_get_dir(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a flygen_shdn message into a struct
 *
 * @param msg The message to decode
 * @param flygen_shdn C-struct to decode the message contents into
 */
static inline void mavlink_msg_flygen_shdn_decode(const mavlink_message_t* msg, mavlink_flygen_shdn_t* flygen_shdn)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    flygen_shdn->dir = mavlink_msg_flygen_shdn_get_dir(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FLYGEN_SHDN_LEN? msg->len : MAVLINK_MSG_ID_FLYGEN_SHDN_LEN;
        memset(flygen_shdn, 0, MAVLINK_MSG_ID_FLYGEN_SHDN_LEN);
    memcpy(flygen_shdn, _MAV_PAYLOAD(msg), len);
#endif
}
