/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTextEdit *txt_TempSensor1;
    QCheckBox *cb_EnAlarm1;
    QLabel *label;
    QFrame *frame;
    QSpinBox *spb_TempHighThres1;
    QSpinBox *spb_TempLowThres1;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *alm_TempHigh1;
    QLabel *label_9;
    QPushButton *alm_TempHigh1_2;
    QLabel *label_10;
    QPushButton *btn_ReadTemp1;
    QGroupBox *groupBox_2;
    QTextEdit *txt_TempSensor2;
    QCheckBox *checkBox_2;
    QLabel *label_4;
    QFrame *frame_2;
    QSpinBox *spb_TempHighThres2;
    QSpinBox *spb_TempLowThres2;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *alm_TempHigh1_3;
    QPushButton *alm_TempHigh1_4;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *btn_ReadTemp2;
    QGroupBox *groupBox_3;
    QComboBox *cbb_SampleTime;
    QPushButton *btn_Setting;
    QGroupBox *groupBox_4;
    QComboBox *cbb_COM;
    QComboBox *cbb_Baudrate;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *btn_Connect;
    QPushButton *btn_Refresh;
    QGroupBox *groupBox_5;
    QTextEdit *txt_DataReceived;
    QPushButton *btn_ClearData;
    QPushButton *btn_ReadData;
    QGroupBox *groupBox_6;
    QTextEdit *txt_Notification;
    QPushButton *btn_ClearNoti;
    QCheckBox *checkBox_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1142, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 10, 491, 241));
        txt_TempSensor1 = new QTextEdit(groupBox);
        txt_TempSensor1->setObjectName("txt_TempSensor1");
        txt_TempSensor1->setGeometry(QRect(40, 70, 104, 61));
        cb_EnAlarm1 = new QCheckBox(groupBox);
        cb_EnAlarm1->setObjectName("cb_EnAlarm1");
        cb_EnAlarm1->setGeometry(QRect(40, 150, 121, 26));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 80, 63, 40));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        frame = new QFrame(groupBox);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(210, 50, 241, 141));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        spb_TempHighThres1 = new QSpinBox(frame);
        spb_TempHighThres1->setObjectName("spb_TempHighThres1");
        spb_TempHighThres1->setGeometry(QRect(30, 40, 61, 29));
        spb_TempLowThres1 = new QSpinBox(frame);
        spb_TempLowThres1->setObjectName("spb_TempLowThres1");
        spb_TempLowThres1->setGeometry(QRect(30, 100, 61, 29));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 221, 20));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 70, 221, 20));
        alm_TempHigh1 = new QPushButton(frame);
        alm_TempHigh1->setObjectName("alm_TempHigh1");
        alm_TempHigh1->setGeometry(QRect(110, 40, 31, 29));
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(150, 45, 63, 20));
        alm_TempHigh1_2 = new QPushButton(frame);
        alm_TempHigh1_2->setObjectName("alm_TempHigh1_2");
        alm_TempHigh1_2->setGeometry(QRect(110, 100, 31, 29));
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(150, 100, 63, 20));
        btn_ReadTemp1 = new QPushButton(groupBox);
        btn_ReadTemp1->setObjectName("btn_ReadTemp1");
        btn_ReadTemp1->setGeometry(QRect(50, 200, 83, 29));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 260, 491, 241));
        txt_TempSensor2 = new QTextEdit(groupBox_2);
        txt_TempSensor2->setObjectName("txt_TempSensor2");
        txt_TempSensor2->setGeometry(QRect(40, 70, 104, 61));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(40, 150, 121, 26));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(150, 80, 63, 40));
        label_4->setFont(font);
        frame_2 = new QFrame(groupBox_2);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(210, 50, 241, 141));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        spb_TempHighThres2 = new QSpinBox(frame_2);
        spb_TempHighThres2->setObjectName("spb_TempHighThres2");
        spb_TempHighThres2->setGeometry(QRect(30, 40, 61, 29));
        spb_TempLowThres2 = new QSpinBox(frame_2);
        spb_TempLowThres2->setObjectName("spb_TempLowThres2");
        spb_TempLowThres2->setGeometry(QRect(30, 100, 61, 29));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 221, 20));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 70, 221, 20));
        alm_TempHigh1_3 = new QPushButton(frame_2);
        alm_TempHigh1_3->setObjectName("alm_TempHigh1_3");
        alm_TempHigh1_3->setGeometry(QRect(110, 40, 31, 29));
        alm_TempHigh1_4 = new QPushButton(frame_2);
        alm_TempHigh1_4->setObjectName("alm_TempHigh1_4");
        alm_TempHigh1_4->setGeometry(QRect(110, 100, 31, 29));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(150, 40, 63, 20));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(150, 100, 63, 20));
        btn_ReadTemp2 = new QPushButton(groupBox_2);
        btn_ReadTemp2->setObjectName("btn_ReadTemp2");
        btn_ReadTemp2->setGeometry(QRect(50, 200, 83, 29));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(820, 340, 211, 121));
        cbb_SampleTime = new QComboBox(groupBox_3);
        cbb_SampleTime->addItem(QString());
        cbb_SampleTime->addItem(QString());
        cbb_SampleTime->addItem(QString());
        cbb_SampleTime->addItem(QString());
        cbb_SampleTime->addItem(QString());
        cbb_SampleTime->setObjectName("cbb_SampleTime");
        cbb_SampleTime->setGeometry(QRect(20, 40, 171, 28));
        btn_Setting = new QPushButton(groupBox_3);
        btn_Setting->setObjectName("btn_Setting");
        btn_Setting->setGeometry(QRect(60, 80, 83, 29));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(520, 330, 241, 171));
        cbb_COM = new QComboBox(groupBox_4);
        cbb_COM->addItem(QString());
        cbb_COM->setObjectName("cbb_COM");
        cbb_COM->setGeometry(QRect(100, 40, 121, 28));
        cbb_Baudrate = new QComboBox(groupBox_4);
        cbb_Baudrate->addItem(QString());
        cbb_Baudrate->setObjectName("cbb_Baudrate");
        cbb_Baudrate->setGeometry(QRect(100, 90, 121, 28));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 40, 60, 20));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 90, 63, 20));
        btn_Connect = new QPushButton(groupBox_4);
        btn_Connect->setObjectName("btn_Connect");
        btn_Connect->setGeometry(QRect(20, 130, 83, 29));
        btn_Refresh = new QPushButton(groupBox_4);
        btn_Refresh->setObjectName("btn_Refresh");
        btn_Refresh->setGeometry(QRect(130, 130, 83, 29));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(520, 10, 291, 311));
        txt_DataReceived = new QTextEdit(groupBox_5);
        txt_DataReceived->setObjectName("txt_DataReceived");
        txt_DataReceived->setGeometry(QRect(10, 30, 271, 231));
        btn_ClearData = new QPushButton(groupBox_5);
        btn_ClearData->setObjectName("btn_ClearData");
        btn_ClearData->setGeometry(QRect(180, 270, 83, 29));
        btn_ReadData = new QPushButton(groupBox_5);
        btn_ReadData->setObjectName("btn_ReadData");
        btn_ReadData->setGeometry(QRect(30, 270, 83, 29));
        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(820, 10, 291, 311));
        txt_Notification = new QTextEdit(groupBox_6);
        txt_Notification->setObjectName("txt_Notification");
        txt_Notification->setGeometry(QRect(10, 30, 271, 231));
        btn_ClearNoti = new QPushButton(groupBox_6);
        btn_ClearNoti->setObjectName("btn_ClearNoti");
        btn_ClearNoti->setGeometry(QRect(100, 270, 83, 29));
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(880, 480, 93, 26));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1142, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Temperature Sensor 1", nullptr));
        cb_EnAlarm1->setText(QCoreApplication::translate("MainWindow", "Enable Alarm", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\302\260C", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Temperature High Threshold [\302\260C]", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Temperature Low Threshold [\302\260C]", nullptr));
        alm_TempHigh1->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Alarm", nullptr));
        alm_TempHigh1_2->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Alarm", nullptr));
        btn_ReadTemp1->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Temperature Sensor 2", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Enable Alarm", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\302\260C", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Temperature High Threshold [\302\260C]", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Temperature Low Threshold [\302\260C]", nullptr));
        alm_TempHigh1_3->setText(QString());
        alm_TempHigh1_4->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "Alarm", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Alarm", nullptr));
        btn_ReadTemp2->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Sample Time (sec)", nullptr));
        cbb_SampleTime->setItemText(0, QCoreApplication::translate("MainWindow", "Select Sample Time", nullptr));
        cbb_SampleTime->setItemText(1, QCoreApplication::translate("MainWindow", "5", nullptr));
        cbb_SampleTime->setItemText(2, QCoreApplication::translate("MainWindow", "10", nullptr));
        cbb_SampleTime->setItemText(3, QCoreApplication::translate("MainWindow", "30", nullptr));
        cbb_SampleTime->setItemText(4, QCoreApplication::translate("MainWindow", "60", nullptr));

        btn_Setting->setText(QCoreApplication::translate("MainWindow", "Setting", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        cbb_COM->setItemText(0, QCoreApplication::translate("MainWindow", "Select COM", nullptr));

        cbb_Baudrate->setItemText(0, QCoreApplication::translate("MainWindow", "Select Baudrate", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "COM", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Baudrate", nullptr));
        btn_Connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        btn_Refresh->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Data Received", nullptr));
        btn_ClearData->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        btn_ReadData->setText(QCoreApplication::translate("MainWindow", "Read Data", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Notification", nullptr));
        btn_ClearNoti->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Save data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
