#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("HORIZON UAV - FLIGHT MONITOR");
//    w.setFixedSize(1000,700);  buraya pencerenin genişliğini gir
    w.show();
    return a.exec();
}
