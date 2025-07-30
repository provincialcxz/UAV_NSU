#pragma once
// MESSAGE FLYGEN_ENDFREQ PACKING

#define MAVLINK_MSG_ID_FLYGEN_ENDFREQ 1342


typedef struct __mavlink_flygen_endfreq_t {
 uint64_t value; /*<  End frequency value (30 MHz - 6.5 GHz) or 0 at request*/
 char unit; /*<  End frequency unit (H/K/M/G/empty)*/
 uint8_t dir; /*<  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS*/
} mavlink_flygen_endfreq_t;

#define MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN 10
#define MAVLINK_MSG_ID_FLYGEN_ENDFREQ_MIN_LEN 10
#define MAVLINK_MSG_ID_1342_LEN 10
#define MAVLINK_MSG_ID_1342_MIN_LEN 10

#define MAVLINK_MSG_ID_FLYGEN_ENDFREQ_CRC 217
#define MAVLINK_MSG_ID_1342_CRC 217



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FLYGEN_ENDFREQ { \
    1342, \
    "FLYGEN_ENDFREQ", \
    3, \
    {  { "value", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_flygen_endfreq_t, value) }, \
         { "unit", NULL, MAVLINK_TYPE_CHAR, 0, 8, offsetof(mavlink_flygen_endfreq_t, unit) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_flygen_endfreq_t, dir) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FLYGEN_ENDFREQ { \
    "FLYGEN_ENDFREQ", \
    3, \
    {  { "value", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_flygen_endfreq_t, value) }, \
         { "unit", NULL, MAVLINK_TYPE_CHAR, 0, 8, offsetof(mavlink_flygen_endfreq_t, unit) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_flygen_endfreq_t, dir) }, \
         } \
}
#endif

/**
 * @brief Pack a flygen_endfreq message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param value  End frequency value (30 MHz - 6.5 GHz) or 0 at request
 * @param unit  End frequency unit (H/K/M/G/empty)
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_endfreq_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t value, char unit, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN];
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN);
#else
    mavlink_flygen_endfreq_t packet;
    packet.value = value;
    packet.unit = unit;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_ENDFREQ;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_CRC);
}

/**
 * @brief Pack a flygen_endfreq message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param value  End frequency value (30 MHz - 6.5 GHz) or 0 at request
 * @param unit  End frequency unit (H/K/M/G/empty)
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_endfreq_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t value, char unit, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN];
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN);
#else
    mavlink_flygen_endfreq_t packet;
    packet.value = value;
    packet.unit = unit;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_ENDFREQ;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN);
#endif
}

/**
 * @brief Pack a flygen_endfreq message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param value  End frequency value (30 MHz - 6.5 GHz) or 0 at request
 * @param unit  End frequency unit (H/K/M/G/empty)
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_endfreq_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t value,char unit,uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN];
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN);
#else
    mavlink_flygen_endfreq_t packet;
    packet.value = value;
    packet.unit = unit;
    packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_ENDFREQ;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_CRC);
}

/**
 * @brief Encode a flygen_endfreq struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param flygen_endfreq C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_endfreq_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_flygen_endfreq_t* flygen_endfreq)
{
    return mavlink_msg_flygen_endfreq_pack(system_id, component_id, msg, flygen_endfreq->value, flygen_endfreq->unit, flygen_endfreq->dir);
}

/**
 * @brief Encode a flygen_endfreq struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flygen_endfreq C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_endfreq_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_flygen_endfreq_t* flygen_endfreq)
{
    return mavlink_msg_flygen_endfreq_pack_chan(system_id, component_id, chan, msg, flygen_endfreq->value, flygen_endfreq->unit, flygen_endfreq->dir);
}

/**
 * @brief Encode a flygen_endfreq struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param flygen_endfreq C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_endfreq_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_flygen_endfreq_t* flygen_endfreq)
{
    return mavlink_msg_flygen_endfreq_pack_status(system_id, component_id, _status, msg,  flygen_endfreq->value, flygen_endfreq->unit, flygen_endfreq->dir);
}

/**
 * @brief Send a flygen_endfreq message
 * @param chan MAVLink channel to send the message
 *
 * @param value  End frequency value (30 MHz - 6.5 GHz) or 0 at request
 * @param unit  End frequency unit (H/K/M/G/empty)
 * @param dir  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_flygen_endfreq_send(mavlink_channel_t chan, uint64_t value, char unit, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN];
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_ENDFREQ, buf, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_CRC);
#else
    mavlink_flygen_endfreq_t packet;
    packet.value = value;
    packet.unit = unit;
    packet.dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_ENDFREQ, (const char *)&packet, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_CRC);
#endif
}

/**
 * @brief Send a flygen_endfreq message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_flygen_endfreq_send_struct(mavlink_channel_t chan, const mavlink_flygen_endfreq_t* flygen_endfreq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_flygen_endfreq_send(chan, flygen_endfreq->value, flygen_endfreq->unit, flygen_endfreq->dir);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_ENDFREQ, (const char *)flygen_endfreq, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_CRC);
#endif
}

#if MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_flygen_endfreq_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t value, char unit, uint8_t dir)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, value);
    _mav_put_char(buf, 8, unit);
    _mav_put_uint8_t(buf, 9, dir);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_ENDFREQ, buf, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_CRC);
#else
    mavlink_flygen_endfreq_t *packet = (mavlink_flygen_endfreq_t *)msgbuf;
    packet->value = value;
    packet->unit = unit;
    packet->dir = dir;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_ENDFREQ, (const char *)packet, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_CRC);
#endif
}
#endif

#endif

// MESSAGE FLYGEN_ENDFREQ UNPACKING


/**
 * @brief Get field value from flygen_endfreq message
 *
 * @return  End frequency value (30 MHz - 6.5 GHz) or 0 at request
 */
static inline uint64_t mavlink_msg_flygen_endfreq_get_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field unit from flygen_endfreq message
 *
 * @return  End frequency unit (H/K/M/G/empty)
 */
static inline char mavlink_msg_flygen_endfreq_get_unit(const mavlink_message_t* msg)
{
    return _MAV_RETURN_char(msg,  8);
}

/**
 * @brief Get field dir from flygen_endfreq message
 *
 * @return  Cmd direction, 0 - from GCS to AP, 1 - from AP to GCS
 */
static inline uint8_t mavlink_msg_flygen_endfreq_get_dir(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Decode a flygen_endfreq message into a struct
 *
 * @param msg The message to decode
 * @param flygen_endfreq C-struct to decode the message contents into
 */
static inline void mavlink_msg_flygen_endfreq_decode(const mavlink_message_t* msg, mavlink_flygen_endfreq_t* flygen_endfreq)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    flygen_endfreq->value = mavlink_msg_flygen_endfreq_get_value(msg);
    flygen_endfreq->unit = mavlink_msg_flygen_endfreq_get_unit(msg);
    flygen_endfreq->dir = mavlink_msg_flygen_endfreq_get_dir(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN? msg->len : MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN;
        memset(flygen_endfreq, 0, MAVLINK_MSG_ID_FLYGEN_ENDFREQ_LEN);
    memcpy(flygen_endfreq, _MAV_PAYLOAD(msg), len);
#endif
}
