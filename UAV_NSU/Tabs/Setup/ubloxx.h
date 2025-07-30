#ifndef UBLOXX_H
#define UBLOXX_H

#include <QByteArray>
#include <QObject>
#include <QDebug>
#include <QMap>

#include <stdint.h>

#include "ublox_structs.h"

#define UBX_SYNC_1 0xb5
#define UBX_SYNC_2 0x62

#define UBX_NAV_PVT_CLASS       0x01
#define UBX_NAV_PVT_ID          0x07
#define UBX_NAV_PVT_LEN         92

#define UBX_NAV_SVIN_CLASS      0x01
#define UBX_NAV_SVIN_ID         0x3b
#define UBX_NAV_SVIN_LEN        40

#define UBX_CFG_TMODE3_CLASS    0x06
#define UBX_CFG_TMODE3_ID       0x71
#define UBX_CFG_TMODE3_LEN      40

#define UBX_CFG_MSG_CLASS       0x06
#define UBX_CFG_MSG_ID          0x01

enum ParseState {
    
};

class ubloxx : public QObject
{ Q_OBJECT
public:

private:
    
signals:
   
};

#endif // UBLOXX_H
