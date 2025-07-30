#pragma once
// MESSAGE FLYGEN_INIT PACKING

#define MAVLINK_MSG_ID_FLYGEN_INIT 1347


typedef struct __mavlink_flygen_init_t {
 uint64_t freq; /*<  Initial frequency value, Hz*/
 uint8_t serial; /*<  FC serial port number*/
 uint8_t mavch; /*<  Mavlink channel send messages to*/
 int8_t lvl; /*<  Initial level value, dBm*/
} mavlink_flygen_init_t;

#define MAVLINK_MSG_ID_FLYGEN_INIT_LEN 11
#define MAVLINK_MSG_ID_FLYGEN_INIT_MIN_LEN 11
#define MAVLINK_MSG_ID_1347_LEN 11
#define MAVLINK_MSG_ID_1347_MIN_LEN 11

#define MAVLINK_MSG_ID_FLYGEN_INIT_CRC 122
#define MAVLINK_MSG_ID_1347_CRC 122



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_FLYGEN_INIT { \
    1347, \
    "FLYGEN_INIT", \
    4, \
    {  { "serial", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_flygen_init_t, serial) }, \
         { "mavch", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_flygen_init_t, mavch) }, \
         { "freq", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_flygen_init_t, freq) }, \
         { "lvl", NULL, MAVLINK_TYPE_INT8_T, 0, 10, offsetof(mavlink_flygen_init_t, lvl) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_FLYGEN_INIT { \
    "FLYGEN_INIT", \
    4, \
    {  { "serial", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_flygen_init_t, serial) }, \
         { "mavch", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_flygen_init_t, mavch) }, \
         { "freq", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_flygen_init_t, freq) }, \
         { "lvl", NULL, MAVLINK_TYPE_INT8_T, 0, 10, offsetof(mavlink_flygen_init_t, lvl) }, \
         } \
}
#endif

/**
 * @brief Pack a flygen_init message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param serial  FC serial port number
 * @param mavch  Mavlink channel send messages to
 * @param freq  Initial frequency value, Hz
 * @param lvl  Initial level value, dBm
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_init_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t serial, uint8_t mavch, uint64_t freq, int8_t lvl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_INIT_LEN];
    _mav_put_uint64_t(buf, 0, freq);
    _mav_put_uint8_t(buf, 8, serial);
    _mav_put_uint8_t(buf, 9, mavch);
    _mav_put_int8_t(buf, 10, lvl);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_INIT_LEN);
#else
    mavlink_flygen_init_t packet;
    packet.freq = freq;
    packet.serial = serial;
    packet.mavch = mavch;
    packet.lvl = lvl;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_INIT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_INIT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FLYGEN_INIT_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_CRC);
}

/**
 * @brief Pack a flygen_init message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param serial  FC serial port number
 * @param mavch  Mavlink channel send messages to
 * @param freq  Initial frequency value, Hz
 * @param lvl  Initial level value, dBm
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_init_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t serial, uint8_t mavch, uint64_t freq, int8_t lvl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_INIT_LEN];
    _mav_put_uint64_t(buf, 0, freq);
    _mav_put_uint8_t(buf, 8, serial);
    _mav_put_uint8_t(buf, 9, mavch);
    _mav_put_int8_t(buf, 10, lvl);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_INIT_LEN);
#else
    mavlink_flygen_init_t packet;
    packet.freq = freq;
    packet.serial = serial;
    packet.mavch = mavch;
    packet.lvl = lvl;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_INIT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_INIT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_INIT_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_FLYGEN_INIT_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_LEN);
#endif
}

/**
 * @brief Pack a flygen_init message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param serial  FC serial port number
 * @param mavch  Mavlink channel send messages to
 * @param freq  Initial frequency value, Hz
 * @param lvl  Initial level value, dBm
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_flygen_init_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t serial,uint8_t mavch,uint64_t freq,int8_t lvl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_INIT_LEN];
    _mav_put_uint64_t(buf, 0, freq);
    _mav_put_uint8_t(buf, 8, serial);
    _mav_put_uint8_t(buf, 9, mavch);
    _mav_put_int8_t(buf, 10, lvl);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLYGEN_INIT_LEN);
#else
    mavlink_flygen_init_t packet;
    packet.freq = freq;
    packet.serial = serial;
    packet.mavch = mavch;
    packet.lvl = lvl;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_FLYGEN_INIT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_FLYGEN_INIT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_FLYGEN_INIT_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_CRC);
}

/**
 * @brief Encode a flygen_init struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param flygen_init C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_init_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_flygen_init_t* flygen_init)
{
    return mavlink_msg_flygen_init_pack(system_id, component_id, msg, flygen_init->serial, flygen_init->mavch, flygen_init->freq, flygen_init->lvl);
}

/**
 * @brief Encode a flygen_init struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param flygen_init C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_init_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_flygen_init_t* flygen_init)
{
    return mavlink_msg_flygen_init_pack_chan(system_id, component_id, chan, msg, flygen_init->serial, flygen_init->mavch, flygen_init->freq, flygen_init->lvl);
}

/**
 * @brief Encode a flygen_init struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param flygen_init C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_flygen_init_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_flygen_init_t* flygen_init)
{
    return mavlink_msg_flygen_init_pack_status(system_id, component_id, _status, msg,  flygen_init->serial, flygen_init->mavch, flygen_init->freq, flygen_init->lvl);
}

/**
 * @brief Send a flygen_init message
 * @param chan MAVLink channel to send the message
 *
 * @param serial  FC serial port number
 * @param mavch  Mavlink channel send messages to
 * @param freq  Initial frequency value, Hz
 * @param lvl  Initial level value, dBm
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_flygen_init_send(mavlink_channel_t chan, uint8_t serial, uint8_t mavch, uint64_t freq, int8_t lvl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_FLYGEN_INIT_LEN];
    _mav_put_uint64_t(buf, 0, freq);
    _mav_put_uint8_t(buf, 8, serial);
    _mav_put_uint8_t(buf, 9, mavch);
    _mav_put_int8_t(buf, 10, lvl);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_INIT, buf, MAVLINK_MSG_ID_FLYGEN_INIT_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_CRC);
#else
    mavlink_flygen_init_t packet;
    packet.freq = freq;
    packet.serial = serial;
    packet.mavch = mavch;
    packet.lvl = lvl;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_INIT, (const char *)&packet, MAVLINK_MSG_ID_FLYGEN_INIT_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_CRC);
#endif
}

/**
 * @brief Send a flygen_init message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_flygen_init_send_struct(mavlink_channel_t chan, const mavlink_flygen_init_t* flygen_init)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_flygen_init_send(chan, flygen_init->serial, flygen_init->mavch, flygen_init->freq, flygen_init->lvl);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_INIT, (const char *)flygen_init, MAVLINK_MSG_ID_FLYGEN_INIT_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_CRC);
#endif
}

#if MAVLINK_MSG_ID_FLYGEN_INIT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_flygen_init_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t serial, uint8_t mavch, uint64_t freq, int8_t lvl)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, freq);
    _mav_put_uint8_t(buf, 8, serial);
    _mav_put_uint8_t(buf, 9, mavch);
    _mav_put_int8_t(buf, 10, lvl);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_INIT, buf, MAVLINK_MSG_ID_FLYGEN_INIT_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_CRC);
#else
    mavlink_flygen_init_t *packet = (mavlink_flygen_init_t *)msgbuf;
    packet->freq = freq;
    packet->serial = serial;
    packet->mavch = mavch;
    packet->lvl = lvl;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_FLYGEN_INIT, (const char *)packet, MAVLINK_MSG_ID_FLYGEN_INIT_MIN_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_LEN, MAVLINK_MSG_ID_FLYGEN_INIT_CRC);
#endif
}
#endif

#endif

// MESSAGE FLYGEN_INIT UNPACKING


/**
 * @brief Get field serial from flygen_init message
 *
 * @return  FC serial port number
 */
static inline uint8_t mavlink_msg_flygen_init_get_serial(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field mavch from flygen_init message
 *
 * @return  Mavlink channel send messages to
 */
static inline uint8_t mavlink_msg_flygen_init_get_mavch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field freq from flygen_init message
 *
 * @return  Initial frequency value, Hz
 */
static inline uint64_t mavlink_msg_flygen_init_get_freq(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field lvl from flygen_init message
 *
 * @return  Initial level value, dBm
 */
static inline int8_t mavlink_msg_flygen_init_get_lvl(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  10);
}

/**
 * @brief Decode a flygen_init message into a struct
 *
 * @param msg The message to decode
 * @param flygen_init C-struct to decode the message contents into
 */
static inline void mavlink_msg_flygen_init_decode(const mavlink_message_t* msg, mavlink_flygen_init_t* flygen_init)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    flygen_init->freq = mavlink_msg_flygen_init_get_freq(msg);
    flygen_init->serial = mavlink_msg_flygen_init_get_serial(msg);
    flygen_init->mavch = mavlink_msg_flygen_init_get_mavch(msg);
    flygen_init->lvl = mavlink_msg_flygen_init_get_lvl(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_FLYGEN_INIT_LEN? msg->len : MAVLINK_MSG_ID_FLYGEN_INIT_LEN;
        memset(flygen_init, 0, MAVLINK_MSG_ID_FLYGEN_INIT_LEN);
    memcpy(flygen_init, _MAV_PAYLOAD(msg), len);
#endif
}
