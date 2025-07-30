#pragma once
// MESSAGE FLYGEN_RFSWITCH PACKING

#define MAVLINK_MSG_ID_FLYGEN_RFSWITCH 1345


typedef struct __mavlink_flygen_rfswitch_t {
 uint8_t state; /*<  Channel on state (0/1) or 100 at request*/
 uint8_t dir; /*<  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS*/
} mavlink_flygen_rfswitch_t;

#define MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN 2
#define MAVLINK_MSG_ID_FLYGEN_RFSWITCH_MIN_LEN 2
#define MAVLINK_MSG_ID_1345_LEN 2
#define MAVLINK_MSG_ID_1345_MIN_LEN 2

#define MAVLINK_MSG_ID_FLYGEN_RFSWITCH_CRC 213
#define MAVLINK_MSG_ID_1345_CRC 213



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FLYGEN_RFSWITCH { \
    1345, \
    "FLYGEN_RFSWITCH", \
    2, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_flygen_rfswitch_t, state) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_flygen_rfswitch_t, dir) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FLYGEN_RFSWITCH { \
    "FLYGEN_RFSWITCH", \
    2, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_flygen_rfswitch_t, state) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_flygen_rfswitch_t, dir) }, \
         } \
}
#endif

/**
 * @brief Pack a flygen_rfswitch message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  Channel on state (0/1) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_rfswitch_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t state, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN);
#else
    mavlink_flygen_rfswitch_t packet;
    packet.state = state;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_RFSWITCH;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_CRC);
}

/**
 * @brief Pack a flygen_rfswitch message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  Channel on state (0/1) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_rfswitch_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t state, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN);
#else
    mavlink_flygen_rfswitch_t packet;
    packet.state = state;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_RFSWITCH;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN);
#endif
}

/**
 * @brief Pack a flygen_rfswitch message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param state  Channel on state (0/1) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_rfswitch_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t state,uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN);
#else
    mavlink_flygen_rfswitch_t packet;
    packet.state = state;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_RFSWITCH;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_CRC);
}

/**
 * @brief Encode a flygen_rfswitch struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param flygen_rfswitch C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_rfswitch_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_flygen_rfswitch_t* flygen_rfswitch)
{
    return mavlink_msg_flygen_rfswitch_pack(system_id, component_id, msg, flygen_rfswitch->state, flygen_rfswitch->dir);
}

/**
 * @brief Encode a flygen_rfswitch struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flygen_rfswitch C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_rfswitch_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_flygen_rfswitch_t* flygen_rfswitch)
{
    return mavlink_msg_flygen_rfswitch_pack_chan(system_id, component_id, chan, msg, flygen_rfswitch->state, flygen_rfswitch->dir);
}

/**
 * @brief Encode a flygen_rfswitch struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param flygen_rfswitch C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_rfswitch_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_flygen_rfswitch_t* flygen_rfswitch)
{
    return mavlink_msg_flygen_rfswitch_pack_status(system_id, component_id, _status, msg,  flygen_rfswitch->state, flygen_rfswitch->dir);
}

/**
 * @brief Send a flygen_rfswitch message
 * @param chan MAVLink channel to send the message
 *
 * @param state  Channel on state (0/1) or 100 at request
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_flygen_rfswitch_send(mavlink_channel_t chan, uint8_t state, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN];
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_RFSWITCH, buf, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_CRC);
#else
    mavlink_flygen_rfswitch_t packet;
    packet.state = state;
    packet.dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_RFSWITCH, (const char *)&packet, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_CRC);
#endif
}

/**
 * @brief Send a flygen_rfswitch message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_flygen_rfswitch_send_struct(mavlink_channel_t chan, const mavlink_flygen_rfswitch_t* flygen_rfswitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_flygen_rfswitch_send(chan, flygen_rfswitch->state, flygen_rfswitch->dir);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_RFSWITCH, (const char *)flygen_rfswitch, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_CRC);
#endif
}

#if MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_flygen_rfswitch_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t state, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, state);
    _mav_put_uint8_t(buf, 1, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_RFSWITCH, buf, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_CRC);
#else
    mavlink_flygen_rfswitch_t *packet = (mavlink_flygen_rfswitch_t *)msgbuf;
    packet->state = state;
    packet->dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_RFSWITCH, (const char *)packet, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_CRC);
#endif
}
#endif

#endif

// MESSAGE FLYGEN_RFSWITCH UNPACKING


/**
 * @brief Get field state from flygen_rfswitch message
 *
 * @return  Channel on state (0/1) or 100 at request
 */
static inline uint8_t mavlink_msg_flygen_rfswitch_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field dir from flygen_rfswitch message
 *
 * @return  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
static inline uint8_t mavlink_msg_flygen_rfswitch_get_dir(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a flygen_rfswitch message into a struct
 *
 * @param msg The message to decode
 * @param flygen_rfswitch C-struct to decode the message contents into
 */
static inline void mavlink_msg_flygen_rfswitch_decode(const mavlink_message_t* msg, mavlink_flygen_rfswitch_t* flygen_rfswitch)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    flygen_rfswitch->state = mavlink_msg_flygen_rfswitch_get_state(msg);
    flygen_rfswitch->dir = mavlink_msg_flygen_rfswitch_get_dir(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN? msg->len : MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN;
        memset(flygen_rfswitch, 0, MAVLINK_MSG_ID_FLYGEN_RFSWITCH_LEN);
    memcpy(flygen_rfswitch, _MAV_PAYLOAD(msg), len);
#endif
}
