#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QThread>
#include <QTimer>
#include <QQuickItem>

#include "Worker/Generator/generatorparamworker.h"
#include "Worker/Generator/generatorcontrol.h"
#include "Worker/Mavlink/mavlinkworker.h"
#include "Tabs/Mission/missioncontrol.h"
#include "Worker/Drone/droneworker.h"
#include "Tabs/Setup/serialsetup.h"
#include "Circle/circlestatus.h"
#include "Tabs/Setup/ubloxx.h"
#include "Tabs/Map/peleng.h"
#include "Tabs/Map/map.h"
#include "settings.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
   
private:
    
};

#endif // MAINWINDOW_H
