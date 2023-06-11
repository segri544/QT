/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qfi/qfi_EADI.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QQuickWidget *quickWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboport;
    QLabel *label_2;
    QComboBox *combobaud;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Pconnect;
    QPushButton *Pdisconnect;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QSlider *horizontalSlider;
    QProgressBar *progressBar_2;
    QLabel *label_5;
    QLabel *label_3;
    QProgressBar *progressBar_3;
    QLabel *label_4;
    QProgressBar *progressBar_4;
    QLabel *label_6;
    QProgressBar *progressBar;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLineEdit *lineComing;
    QLabel *label_13;
    QLineEdit *lineGoing;
    QLabel *label_11;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_21;
    QLineEdit *lineEdit_7;
    QLabel *label_22;
    QLineEdit *lineEdit_8;
    QLabel *label_28;
    QLabel *label_25;
    QSlider *verticalSlider;
    qfi_EADI *graphicsEDAI;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QLineEdit *lineFlightMode;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QProgressBar *progressBar_5;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(1263, 763);
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(false);
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(false);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("edit-redo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        quickWidget = new QQuickWidget(centralwidget);
        quickWidget->setObjectName("quickWidget");
        quickWidget->setGeometry(QRect(0, 0, 1261, 801));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 221, 141));
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(12, 33, 201, 60));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboport = new QComboBox(layoutWidget);
        comboport->setObjectName("comboport");

        gridLayout->addWidget(comboport, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        combobaud = new QComboBox(layoutWidget);
        combobaud->setObjectName("combobaud");

        gridLayout->addWidget(combobaud, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(12, 99, 201, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Pconnect = new QPushButton(layoutWidget1);
        Pconnect->setObjectName("Pconnect");
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(42, 42, 42, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        Pconnect->setPalette(palette);

        horizontalLayout_3->addWidget(Pconnect);

        Pdisconnect = new QPushButton(layoutWidget1);
        Pdisconnect->setObjectName("Pdisconnect");
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        Pdisconnect->setPalette(palette1);

        horizontalLayout_3->addWidget(Pdisconnect);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 150, 221, 261));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(11, 211, 201, 26));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(12, 180, 201, 24));
        horizontalSlider = new QSlider(groupBox_2);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(12, 158, 201, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        progressBar_2 = new QProgressBar(groupBox_2);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(71, 64, 141, 25));
        progressBar_2->setValue(24);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(13, 95, 52, 16));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(13, 33, 52, 16));
        progressBar_3 = new QProgressBar(groupBox_2);
        progressBar_3->setObjectName("progressBar_3");
        progressBar_3->setGeometry(QRect(71, 95, 141, 25));
        progressBar_3->setValue(24);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(13, 64, 52, 16));
        progressBar_4 = new QProgressBar(groupBox_2);
        progressBar_4->setObjectName("progressBar_4");
        progressBar_4->setGeometry(QRect(71, 126, 141, 25));
        progressBar_4->setValue(24);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(13, 126, 52, 16));
        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(71, 33, 141, 25));
        progressBar->setValue(24);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 430, 211, 121));
        groupBox_3->setFlat(false);
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName("gridLayout_4");
        lineComing = new QLineEdit(groupBox_3);
        lineComing->setObjectName("lineComing");
        lineComing->setReadOnly(true);

        gridLayout_4->addWidget(lineComing, 0, 1, 1, 1);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName("label_13");

        gridLayout_4->addWidget(label_13, 1, 0, 1, 1);

        lineGoing = new QLineEdit(groupBox_3);
        lineGoing->setObjectName("lineGoing");
        lineGoing->setReadOnly(true);

        gridLayout_4->addWidget(lineGoing, 1, 1, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(0, 710, 541, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget2);
        label_21->setObjectName("label_21");

        horizontalLayout_2->addWidget(label_21);

        lineEdit_7 = new QLineEdit(layoutWidget2);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_7);

        label_22 = new QLabel(layoutWidget2);
        label_22->setObjectName("label_22");

        horizontalLayout_2->addWidget(label_22);

        lineEdit_8 = new QLineEdit(layoutWidget2);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_8);

        label_28 = new QLabel(layoutWidget2);
        label_28->setObjectName("label_28");
        label_28->setMinimumSize(QSize(53, 25));

        horizontalLayout_2->addWidget(label_28);

        label_25 = new QLabel(layoutWidget2);
        label_25->setObjectName("label_25");
        label_25->setMinimumSize(QSize(53, 25));

        horizontalLayout_2->addWidget(label_25);

        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName("verticalSlider");
        verticalSlider->setGeometry(QRect(1240, 30, 16, 241));
        verticalSlider->setOrientation(Qt::Vertical);
        graphicsEDAI = new qfi_EADI(centralwidget);
        graphicsEDAI->setObjectName("graphicsEDAI");
        graphicsEDAI->setEnabled(false);
        graphicsEDAI->setGeometry(QRect(960, 340, 301, 401));
        graphicsEDAI->setMinimumSize(QSize(301, 401));
        graphicsEDAI->setMaximumSize(QSize(301, 401));
        graphicsEDAI->setFrameShape(QFrame::NoFrame);
        graphicsEDAI->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsEDAI->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsEDAI->setInteractive(false);
        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(960, 310, 301, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName("label_9");

        horizontalLayout->addWidget(label_9);

        lineFlightMode = new QLineEdit(layoutWidget3);
        lineFlightMode->setObjectName("lineFlightMode");
        lineFlightMode->setAlignment(Qt::AlignCenter);
        lineFlightMode->setReadOnly(true);

        horizontalLayout->addWidget(lineFlightMode);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(980, 0, 271, 29));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget4);
        label_15->setObjectName("label_15");
        label_15->setMinimumSize(QSize(53, 25));

        horizontalLayout_5->addWidget(label_15);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(53, 25));

        horizontalLayout_4->addWidget(label_8);

        progressBar_5 = new QProgressBar(layoutWidget4);
        progressBar_5->setObjectName("progressBar_5");
        progressBar_5->setMinimumSize(QSize(91, 25));
        progressBar_5->setValue(24);

        horizontalLayout_4->addWidget(progressBar_5);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Horizon Flight Monitor", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "CONNECTION:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt; font-style:normal; color:#000000;\">Port</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt; font-style:normal;\">Baud Rate</span></p></body></html>", nullptr));
        Pconnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        Pdisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "MOTORS", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Stop Motors", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-style:normal; color:#000000; vertical-align:super;\">Control Speed </span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt; font-style:normal;\">Motor #3</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt; font-style:normal;\">Motor #1</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt; font-style:normal;\">Motor #2</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt; font-style:normal;\">Motor #4</span></p></body></html>", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "TRAFFIC DATA", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt; color:#000000;\">Going</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt; color:#000000;\">Coming</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-style:normal; color:#000000;\">Latitude: </span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-style:normal; color:#000000;\">Longtitude: </span></p></body></html>", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Flight Mode", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:8pt;\">DISCONNECTED</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Battery: </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
