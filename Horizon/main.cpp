#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("HORIZON UAV - FLIGHT MONITOR");
    w.setFixedSize(1263,763);
    w.show();
    return a.exec();
}
