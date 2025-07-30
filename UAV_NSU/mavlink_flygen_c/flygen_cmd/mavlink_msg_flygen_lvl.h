#pragma once
// MESSAGE FLYGEN_LVL PACKING

#define MAVLINK_MSG_ID_FLYGEN_LVL 1339


typedef struct __mavlink_flygen_lvl_t {
 int8_t value; /*<  Level value, dBm (-25 to 20) or 100 at request*/
 uint8_t dir; /*<  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS*/
} mavlink_flygen_lvl_t;

#define MAVLINK_MSG_ID_FLYGEN_LVL_LEN 2
#define MAVLINK_MSG_ID_FLYGEN_LVL_MIN_LEN 2
#define MAVLINK_MSG_ID_1339_LEN 2
#define MAVLINK_MSG_ID_1339_MIN_LEN 2

#define MAVLINK_MSG_ID_FLYGEN_LVL_CRC 138
#define MAVLINK_MSG_ID_1339_CRC 138



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FLYGEN_LVL { \
    1339, \
    "FLYGEN_LVL", \
    2, \
    {  { "value", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_flygen_lvl_t, value) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_flygen_lvl_t, dir) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FLYGEN_LVL { \
    "FLYGEN_LVL", \
    2, \
    {  { "value", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_flygen_lvl_t, value) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_flygen_lvl_t, dir) }, \
         } \
}
#endif

/**
 * @brief Pack a flygen_lvl message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param value  Level value, dBm (-25 to 20) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_lvl_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t value, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_LVL_LEN];
    _mav_put_int8_t(buf, 0, value);
    _mav_put_uint8_t(buf, 1, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_LVL_LEN);
#else
    mavlink_flygen_lvl_t packet;
    packet.value = value;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_LVL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_LVL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FLYGEN_LVL_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_CRC);
}

/**
 * @brief Pack a flygen_lvl message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param value  Level value, dBm (-25 to 20) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_lvl_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int8_t value, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_LVL_LEN];
    _mav_put_int8_t(buf, 0, value);
    _mav_put_uint8_t(buf, 1, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_LVL_LEN);
#else
    mavlink_flygen_lvl_t packet;
    packet.value = value;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_LVL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_LVL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_LVL_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_LVL_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_LEN);
#endif
}

/**
 * @brief Pack a flygen_lvl message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param value  Level value, dBm (-25 to 20) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_lvl_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t value,uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_LVL_LEN];
    _mav_put_int8_t(buf, 0, value);
    _mav_put_uint8_t(buf, 1, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_LVL_LEN);
#else
    mavlink_flygen_lvl_t packet;
    packet.value = value;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_LVL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_LVL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FLYGEN_LVL_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_CRC);
}

/**
 * @brief Encode a flygen_lvl struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param flygen_lvl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_lvl_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_flygen_lvl_t* flygen_lvl)
{
    return mavlink_msg_flygen_lvl_pack(system_id, component_id, msg, flygen_lvl->value, flygen_lvl->dir);
}

/**
 * @brief Encode a flygen_lvl struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flygen_lvl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_lvl_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_flygen_lvl_t* flygen_lvl)
{
    return mavlink_msg_flygen_lvl_pack_chan(system_id, component_id, chan, msg, flygen_lvl->value, flygen_lvl->dir);
}

/**
 * @brief Encode a flygen_lvl struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param flygen_lvl C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_lvl_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_flygen_lvl_t* flygen_lvl)
{
    return mavlink_msg_flygen_lvl_pack_status(system_id, component_id, _status, msg,  flygen_lvl->value, flygen_lvl->dir);
}

/**
 * @brief Send a flygen_lvl message
 * @param chan MAVLink channel to send the message
 *
 * @param value  Level value, dBm (-25 to 20) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_flygen_lvl_send(mavlink_channel_t chan, int8_t value, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_LVL_LEN];
    _mav_put_int8_t(buf, 0, value);
    _mav_put_uint8_t(buf, 1, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_LVL, buf, MAVLINK_MSG_ID_FLYGEN_LVL_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_CRC);
#else
    mavlink_flygen_lvl_t packet;
    packet.value = value;
    packet.dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_LVL, (const char *)&packet, MAVLINK_MSG_ID_FLYGEN_LVL_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_CRC);
#endif
}

/**
 * @brief Send a flygen_lvl message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_flygen_lvl_send_struct(mavlink_channel_t chan, const mavlink_flygen_lvl_t* flygen_lvl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_flygen_lvl_send(chan, flygen_lvl->value, flygen_lvl->dir);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_LVL, (const char *)flygen_lvl, MAVLINK_MSG_ID_FLYGEN_LVL_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_CRC);
#endif
}

#if MAVLINK_MSG_ID_FLYGEN_LVL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_flygen_lvl_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t value, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int8_t(buf, 0, value);
    _mav_put_uint8_t(buf, 1, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_LVL, buf, MAVLINK_MSG_ID_FLYGEN_LVL_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_CRC);
#else
    mavlink_flygen_lvl_t *packet = (mavlink_flygen_lvl_t *)msgbuf;
    packet->value = value;
    packet->dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_LVL, (const char *)packet, MAVLINK_MSG_ID_FLYGEN_LVL_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_LEN, MAVLINK_MSG_ID_FLYGEN_LVL_CRC);
#endif
}
#endif

#endif

// MESSAGE FLYGEN_LVL UNPACKING


/**
 * @brief Get field value from flygen_lvl message
 *
 * @return  Level value, dBm (-25 to 20) or 100 at request
 */
static inline int8_t mavlink_msg_flygen_lvl_get_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  0);
}

/**
 * @brief Get field dir from flygen_lvl message
 *
 * @return  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
static inline uint8_t mavlink_msg_flygen_lvl_get_dir(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a flygen_lvl message into a struct
 *
 * @param msg The message to decode
 * @param flygen_lvl C-struct to decode the message contents into
 */
static inline void mavlink_msg_flygen_lvl_decode(const mavlink_message_t* msg, mavlink_flygen_lvl_t* flygen_lvl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    flygen_lvl->value = mavlink_msg_flygen_lvl_get_value(msg);
    flygen_lvl->dir = mavlink_msg_flygen_lvl_get_dir(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FLYGEN_LVL_LEN? msg->len : MAVLINK_MSG_ID_FLYGEN_LVL_LEN;
        memset(flygen_lvl, 0, MAVLINK_MSG_ID_FLYGEN_LVL_LEN);
    memcpy(flygen_lvl, _MAV_PAYLOAD(msg), len);
#endif
}
