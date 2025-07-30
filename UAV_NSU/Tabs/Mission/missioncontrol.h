#ifndef MISSIONCONTROL_H
#define MISSIONCONTROL_H

#include <QObject>
#include <QPushButton>
#include <QMessageBox>
#include <QTableWidget>
#include <QJsonArray>
#include <QJsonDocument>
#include <QRegularExpression>
#include <QComboBox>
#include <QDir>
#include <QFile>
#include <QFileDialog>
#include <QDateTime>
#include <QDebug>
#include <QHeaderView>
#include "../../Worker/Mavlink/mavlinkworker.h"
#include "missionpoint.h"
#include "../Map/map.h"

class MissionControl : public QObject
{
    Q_OBJECT
public:

signals:
    
private:
   
};

#endif // MISSIONCONTROL_H
