#pragma once
// MESSAGE FLYGEN_POWER PACKING

#define MAVLINK_MSG_ID_FLYGEN_POWER 1341


typedef struct __mavlink_flygen_power_t {
 uint8_t state; /*<  Power OFF(0)/ON(1) or 100 at request*/
 uint8_t dir; /*<  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS*/
} mavlink_flygen_power_t;

#define MAVLINK_MSG_ID_FLYGEN_POWER_LEN 2
#define MAVLINK_MSG_ID_FLYGEN_POWER_MIN_LEN 2
#define MAVLINK_MSG_ID_1341_LEN 2
#define MAVLINK_MSG_ID_1341_MIN_LEN 2

#define MAVLINK_MSG_ID_FLYGEN_POWER_CRC 196
#define MAVLINK_MSG_ID_1341_CRC 196



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FLYGEN_POWER { \
    1341, \
    "FLYGEN_POWER", \
    2, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_flygen_power_t, state) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_flygen_power_t, dir) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FLYGEN_POWER { \
    "FLYGEN_POWER", \
    2, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_flygen_power_t, state) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_flygen_power_t, dir) }, \
         } \
}
#endif

/**
 * @brief Pack a flygen_power message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  Power OFF(0)/ON(1) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_power_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t state, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_POWER_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_POWER_LEN);
#else
    mavlink_flygen_power_t packet;
    packet.state = state;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_POWER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_POWER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FLYGEN_POWER_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_CRC);
}

/**
 * @brief Pack a flygen_power message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  Power OFF(0)/ON(1) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_power_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t state, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_POWER_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_POWER_LEN);
#else
    mavlink_flygen_power_t packet;
    packet.state = state;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_POWER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_POWER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_POWER_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_POWER_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_LEN);
#endif
}

/**
 * @brief Pack a flygen_power message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param state  Power OFF(0)/ON(1) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_power_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t state,uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_POWER_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_POWER_LEN);
#else
    mavlink_flygen_power_t packet;
    packet.state = state;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_POWER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_POWER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FLYGEN_POWER_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_CRC);
}

/**
 * @brief Encode a flygen_power struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param flygen_power C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_power_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_flygen_power_t* flygen_power)
{
    return mavlink_msg_flygen_power_pack(system_id, component_id, msg, flygen_power->state, flygen_power->dir);
}

/**
 * @brief Encode a flygen_power struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flygen_power C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_power_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_flygen_power_t* flygen_power)
{
    return mavlink_msg_flygen_power_pack_chan(system_id, component_id, chan, msg, flygen_power->state, flygen_power->dir);
}

/**
 * @brief Encode a flygen_power struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param flygen_power C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_power_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_flygen_power_t* flygen_power)
{
    return mavlink_msg_flygen_power_pack_status(system_id, component_id, _status, msg,  flygen_power->state, flygen_power->dir);
}

/**
 * @brief Send a flygen_power message
 * @param chan MAVLink channel to send the message
 *
 * @param state  Power OFF(0)/ON(1) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_flygen_power_send(mavlink_channel_t chan, uint8_t state, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_POWER_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_POWER, buf, MAVLINK_MSG_ID_FLYGEN_POWER_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_CRC);
#else
    mavlink_flygen_power_t packet;
    packet.state = state;
    packet.dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_POWER, (const char *)&packet, MAVLINK_MSG_ID_FLYGEN_POWER_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_CRC);
#endif
}

/**
 * @brief Send a flygen_power message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_flygen_power_send_struct(mavlink_channel_t chan, const mavlink_flygen_power_t* flygen_power)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_flygen_power_send(chan, flygen_power->state, flygen_power->dir);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_POWER, (const char *)flygen_power, MAVLINK_MSG_ID_FLYGEN_POWER_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_CRC);
#endif
}

#if MAVLINK_MSG_ID_FLYGEN_POWER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_flygen_power_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t state, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_POWER, buf, MAVLINK_MSG_ID_FLYGEN_POWER_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_CRC);
#else
    mavlink_flygen_power_t *packet = (mavlink_flygen_power_t *)msgbuf;
    packet->state = state;
    packet->dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_POWER, (const char *)packet, MAVLINK_MSG_ID_FLYGEN_POWER_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_LEN, MAVLINK_MSG_ID_FLYGEN_POWER_CRC);
#endif
}
#endif

#endif

// MESSAGE FLYGEN_POWER UNPACKING


/**
 * @brief Get field state from flygen_power message
 *
 * @return  Power OFF(0)/ON(1) or 100 at request
 */
static inline uint8_t mavlink_msg_flygen_power_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field dir from flygen_power message
 *
 * @return  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
static inline uint8_t mavlink_msg_flygen_power_get_dir(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a flygen_power message into a struct
 *
 * @param msg The message to decode
 * @param flygen_power C-struct to decode the message contents into
 */
static inline void mavlink_msg_flygen_power_decode(const mavlink_message_t* msg, mavlink_flygen_power_t* flygen_power)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    flygen_power->state = mavlink_msg_flygen_power_get_state(msg);
    flygen_power->dir = mavlink_msg_flygen_power_get_dir(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FLYGEN_POWER_LEN? msg->len : MAVLINK_MSG_ID_FLYGEN_POWER_LEN;
        memset(flygen_power, 0, MAVLINK_MSG_ID_FLYGEN_POWER_LEN);
    memcpy(flygen_power, _MAV_PAYLOAD(msg), len);
#endif
}
