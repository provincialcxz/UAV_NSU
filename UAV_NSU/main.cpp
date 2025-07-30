#include <QApplication>
#include <QMetaType>
#include "mainwindow.h"
#include "Tabs/Setup/ubloxx.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
