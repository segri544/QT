
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTimer>
#include<qserialport.h>
#include<QQuickWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;    


    QTimer timerUpdatePorts;
    QTimer timerReadSerialData;
    QTimer timerUpdateLocation;
    QSerialPort m_serialPort;
    QStringList m_availablePorts;
    static const int DATA_SIZE = 32;
    QByteArray m_buffer;

    quint16 unlem;
    quint16 status;
    quint16 motor1;
    quint16 motor2;
    quint16 motor3;
    quint16 motor4;
    quint16 battery;
    qint16 roll;
    qint16 pitch;
    quint16 yaw;
    quint16 altitude;
    qint32 longtitude;
    qint32 latitude;
    qint16 bos;
    void readSerialData();
    void updatePorts();
    void updateLocation();
    QString connectedPort;
    int setCenterCounter;


signals:
    void setCenter(QVariant,QVariant);
    void addMarker(QVariant, QVariant);
    void setZoomLevel(QVariant);


private slots:
    void on_Pconnect_clicked();
    void on_Pdisconnect_clicked();
    void on_MainWindow_destroyed();
    void on_horizontalSlider_valueChanged(int value);
    void on_pushButton_3_clicked();

    void on_verticalSlider_valueChanged(int value);
};

#endif // MAINWINDOW_H
