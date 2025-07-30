#ifndef MAVLINKWORKER_H
#define MAVLINKWORKER_H

#include <iostream>
#include <QObject>
#include <QJsonArray>
#include <QSerialPort>
#include <QJsonObject>
#include <QJsonDocument>
#include <QSerialPortInfo>
#include <QMutex>
#include <QTimer>

#include <cstring>
#include "../../mavlink_flygen_c/flygen_cmd/mavlink.h"
#include "../settings.h"
#include "../../Tabs/Mission/missionpoint.h"

class MavlinkWorker : public QObject {
    Q_OBJECT
public:
    
signals:
    
private slots:
   
private:
    
};

#endif // MAVLINKWORKER_H
