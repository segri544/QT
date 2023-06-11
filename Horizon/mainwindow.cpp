
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QQuickItem>
#include<QSerialPortInfo>
#include <QSerialPort>
#include<iostream>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cout<<"contsructor here\n";
    setCenterCounter=100;
    ui->label_15->setText("<html><font color='red'><b> DISCONNECTED </b></font></html>");
    ui->progressBar->setRange(1000,2000);
    ui->progressBar_2->setRange(1000,2000);
    ui->progressBar_3->setRange(1000,2000);
    ui->progressBar_4->setRange(1000,2000);
    ui->progressBar_5->setRange(1060,1260);
    ui->verticalSlider->setRange(1,18);

    ui->verticalSlider->setValue(17);
    ui->progressBar->setValue(1000);
    ui->progressBar_2->setValue(1000);
    ui->progressBar_3->setValue(1000);
    ui->progressBar_4->setValue(1000);
    ui->progressBar_5->setValue(1100);

//    ui->progressBar->setTextVisible(false);

    ui->progressBar->setAlignment(Qt::AlignCenter);
    ui->progressBar_2->setAlignment(Qt::AlignCenter); // Set the alignment to center
    ui->progressBar_3->setAlignment(Qt::AlignCenter); // Set the alignment to center
    ui->progressBar_4->setAlignment(Qt::AlignCenter); // Set the alignment to center
    ui->progressBar_5->setAlignment(Qt::AlignCenter); // Set the alignment to center
    ui->lineGoing->setText("N/A");
    ui->lineFlightMode->setText("Manual");
    ui->lineComing->setText("N/A");
    ui->lineEdit_7->setText("N/A");
    ui->lineEdit_8->setText("N/A");

    ui->combobaud->addItems({"9600", "115200", "230400"});



    // Set up the timer for update ports 0.5 snyde bir update
    connect(&timerUpdatePorts, &QTimer::timeout, this, &MainWindow::updatePorts);
    timerUpdatePorts.start(500);

    ui->horizontalSlider->setRange(1000,2000);
    ui->quickWidget->setSource(QUrl(QStringLiteral("qrc:/map.qml")));
//    ui->quickWidget->show();


    auto obj = ui->quickWidget->rootObject();
    connect(this, SIGNAL(setCenter(QVariant, QVariant)), obj, SLOT(setCenter(QVariant, QVariant)));
    connect(this, SIGNAL(setZoomLevel(QVariant)), obj, SLOT(setZoomLevel(QVariant)));
    connect(this, SIGNAL(addMarker(QVariant, QVariant)), obj, SLOT(addMarker(QVariant, QVariant)));
    emit setCenter(39.93955, 32.82172);
    emit addMarker(39.93955, 32.82172);
//    emit setZoomLevel(ui->verticalSlider->value());
}

MainWindow::~MainWindow()
{
    delete ui;
}




// connect port named in combobox and baudrate
void MainWindow::on_Pconnect_clicked()
{
    // Set up the serial port
    if (!ui->comboport->currentText().isEmpty()){
        connectedPort=ui->comboport->currentText();
        m_serialPort.setPortName(connectedPort);
        m_serialPort.setBaudRate(ui->combobaud->currentText().toInt());
        m_serialPort.setDataBits(QSerialPort::Data8);
        m_serialPort.setParity(QSerialPort::NoParity);
        m_serialPort.setStopBits(QSerialPort::OneStop);

        // connect(&m_serialPort, &QSerialPort::readyRead, this, &MainWindow::readSerialData);

        // Open the serial port
        m_serialPort.open(QIODevice::ReadWrite);

        // Set up the timer for readSerialData
        ui->label_15->setText("<html><font color='green'><b> CONNECTED </b></font></html>");
        connect(&timerReadSerialData, &QTimer::timeout, this, &MainWindow::readSerialData);
        timerReadSerialData.start(50);
        connect(&timerUpdateLocation, &QTimer::timeout, this, &MainWindow::updateLocation);
        timerUpdateLocation.start(50);
    }
}

// Disconnect from port
void MainWindow::on_Pdisconnect_clicked()
{
    if (m_serialPort.isOpen()){
        timerReadSerialData.stop();
        timerUpdateLocation.stop();
        m_buffer.remove(0, DATA_SIZE);
        m_serialPort.clear();
        m_serialPort.close();
        ui->progressBar->setValue(1000);
        ui->progressBar_2->setValue(1000);
        ui->progressBar_3->setValue(1000);
        ui->progressBar_4->setValue(1000);
        ui->progressBar_5->setValue(1110);

        //    ui->progressBar->setTextVisible(false);
        ui->label_15->setText("<html><font color='red'><b> DISCONNECTED </b></font></html>");
        //    ui->progressBar->setAlignment(Qt::AlignCenter);
        //    ui->progressBar_2->setAlignment(Qt::AlignCenter); // Set the alignment to center
        //    ui->progressBar_3->setAlignment(Qt::AlignCenter); // Set the alignment to center
        //    ui->progressBar_4->setAlignment(Qt::AlignCenter); // Set the alignment to center
        //    ui->progressBar_5->setAlignment(Qt::AlignCenter); // Set the alignment to center
        ui->lineComing->setText("N/A");
        ui->lineGoing->setText("N/A");
        ui->lineEdit_7->setText("N/A");
        ui->lineEdit_8->setText("N/A");
    }

}

// Update ports
void MainWindow::updatePorts(){


    QStringList currentPorts;
    auto infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos) {
        currentPorts << info.portName(); //+"--"+info.description();
    }

    // Remove disconnected ports
    for (const QString &port : m_availablePorts) {
        if (!currentPorts.contains(port)) {
            ui->comboport->removeItem(ui->comboport->findText(port));
        }
    }

    // Add new ports
    for (const QString &port : currentPorts) {
        if (!m_availablePorts.contains(port)) {
            ui->comboport->addItem(port);
        }
    }

    // check if connectedPort is still in comboport
    if(!(ui->comboport->findText(connectedPort) != -1)){
        MainWindow::on_Pdisconnect_clicked();

    }
    m_availablePorts = currentPorts;

}

// Read Serial Data
void MainWindow::readSerialData(){
    m_buffer.clear();

    m_buffer.append(m_serialPort.readAll());

    while (m_buffer.size() >= DATA_SIZE)
    {
        QDataStream stream(&m_buffer, QIODevice::ReadOnly);
        stream.setByteOrder(QDataStream::LittleEndian);

//        uint16_t uint16Array[8];
//        int16_t int16Array[3];
//        int32_t int32Array[2];
//        int16_t lastInt16;

        stream >> unlem;
        stream >> status;
        stream >> motor1;
        stream >> motor2;
        stream >> motor3;
        stream >> motor4;
        stream >> battery;
        stream >> roll;
        stream >> pitch;
        stream >> yaw;
        stream >> altitude;
        stream >> longtitude;
        stream >> latitude;
        stream >> bos;
        cout<<"status:"<<status<<endl;
        cout<<"roll:"<<roll/100.0<<endl;
        cout<<"pitch:"<<pitch/100.0<<endl;
        cout<<"yaw:"<<yaw/100.0<<endl;
        cout<<"battery: "<<battery<<endl;
        cout<<"-----------:"<<endl;
//        cout << "unlem: "<<unlem<< endl;
//        cout<<"status:"<<status<<endl;
//        cout<<"motor1:"<<motor1<<endl;
//        cout<<"motor2:"<<motor2<<endl;
//        cout<<"motor3:"<<motor3<<endl;
//        cout<<"motor4:"<<motor4<<endl;
//        cout<<"battery:"<<battery<<endl;
//        cout<<"roll:"<<roll<<endl;
//        cout<<"pitch:"<<pitch<<endl;
//        cout<<"yaw:"<<yaw<<endl;
//        cout<<"altitude:"<<altitude<<endl;
//        cout<<"longtitude:"<<longtitude<<endl;
//        cout<<"latitude:"<<latitude<<endl;
//        cout<<"bos:"<<bos<<endl;
        if (status==1){
            ui->lineFlightMode->setText("Manual");
        }
        else if  (status==2){
            ui->lineFlightMode->setText("Altitude Hold");
        }
        else if (status == 3) {
            ui->lineFlightMode->setText("Alt&Gps Hold");
        }
        ui->progressBar->setValue(motor1);
        ui->progressBar_2->setValue(motor2);
        ui->progressBar_3->setValue(motor3);
        ui->progressBar_4->setValue(motor4);
        ui->graphicsEDAI->setAltitude(altitude/10.0);
        ui->graphicsEDAI->setPitch((pitch/100.0));
        ui->graphicsEDAI->setRoll(((-1)*roll/100.0));
        ui->graphicsEDAI->setHeading((yaw/100.0));

        ui->graphicsEDAI->redraw();

        // batarya için şey ekle eger motorlar %5 ten küçükse vaya sıfırsa değerini güncellesin
        ui->progressBar_5->setValue(battery);
//        cout<< "hello"<<(latitude / 10000000.0)<<endl;
        ui->lineEdit_7->setText(QString::number(latitude / 10000000.0, 'f', 8));
        ui->lineEdit_8->setText(QString::number(longtitude / 10000000.0, 'f', 8));


        m_buffer.remove(0, DATA_SIZE);

    }

}
void MainWindow::updateLocation(){
//    emit setCenter(39.939550, 32.821720);
//    emit addMarker(39.93960, 32.82180);
    if (setCenterCounter==100){ // 100*50ms =5s de bir markere center yapar. tabi geçici çözüm
//        emit setCenter(QString::number(latitude / 10000000.0, 'f', 6), QString::number(longtitude / 10000000.0, 'f', 6));  //BU PEK MANTIKLI DEĞİL MOUSE EKLİCEM
        emit setCenter((latitude / 10000000.0), (longtitude / 10000000.0));

        setCenterCounter=0;
    }
    setCenterCounter++;
//    emit addMarker(QString::number(latitude / 10000000.0, 'f', 6), QString::number(longtitude / 10000000.0, 'f', 6));
    emit addMarker((latitude / 10000000.0), (longtitude / 10000000.0));

}


void MainWindow::on_MainWindow_destroyed()
{
    MainWindow::on_Pdisconnect_clicked();
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    if (m_serialPort.isOpen()){
        uint16_t dataToSend=35; //i_am_sending_control_motor_command=35
        uint16_t sliderValue=value;
        cout<<"Slider Value:"<<sliderValue<<endl;
        QByteArray data(32,0); //32byte
        QDataStream stream(&data, QIODevice::WriteOnly);
        stream.setByteOrder(QDataStream::LittleEndian);
        stream << dataToSend << sliderValue;

        m_serialPort.write(data);
    }

}


void MainWindow::on_pushButton_3_clicked()
{
    if (m_serialPort.isOpen()){
        cout<<"stop motor clicked"<<endl;
        uint16_t dataToSend=33; //i_am_sending_stop_motor_command=33
        QByteArray data(32,0); //32byte
        QDataStream stream(&data, QIODevice::WriteOnly);
        stream.setByteOrder(QDataStream::LittleEndian);
        stream << dataToSend;

        m_serialPort.write(data);
    }

}


void MainWindow::on_verticalSlider_valueChanged(int value){
    emit setZoomLevel(value);
//    QMetaObject::invokeMethod(ui->quickWidget->rootObject(), "setZoomLevel", Q_ARG(int, value));
    cout<< "zoom changed to: "<<value<<endl;
}

