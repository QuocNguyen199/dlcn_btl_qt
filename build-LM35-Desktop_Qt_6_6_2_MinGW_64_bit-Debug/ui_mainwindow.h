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
    QCheckBox *checkBox;
    QLabel *label;
    QFrame *frame;
    QSpinBox *spb_TempHighThres1;
    QSpinBox *spb_TempLowThres1;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btn_ReadTemp1;
    QPushButton *btn_Stop1;
    QGroupBox *groupBox_2;
    QTextEdit *txt_TempSensor2;
    QCheckBox *checkBox_2;
    QLabel *label_4;
    QFrame *frame_2;
    QSpinBox *spb_TempHighThres2;
    QSpinBox *spb_TempLowThres2;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *btn_ReadTemp2;
    QPushButton *btn_Stop2;
    QGroupBox *groupBox_3;
    QComboBox *ccb_SampleTime;
    QGroupBox *groupBox_4;
    QComboBox *ccb_COM;
    QComboBox *ccb_Baudrate;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *btn_Connect;
    QPushButton *btn_Close;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(936, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 10, 491, 241));
        txt_TempSensor1 = new QTextEdit(groupBox);
        txt_TempSensor1->setObjectName("txt_TempSensor1");
        txt_TempSensor1->setGeometry(QRect(40, 70, 104, 61));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(40, 150, 121, 26));
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
        btn_ReadTemp1 = new QPushButton(groupBox);
        btn_ReadTemp1->setObjectName("btn_ReadTemp1");
        btn_ReadTemp1->setGeometry(QRect(50, 200, 83, 29));
        btn_Stop1 = new QPushButton(groupBox);
        btn_Stop1->setObjectName("btn_Stop1");
        btn_Stop1->setGeometry(QRect(210, 200, 83, 29));
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
        btn_ReadTemp2 = new QPushButton(groupBox_2);
        btn_ReadTemp2->setObjectName("btn_ReadTemp2");
        btn_ReadTemp2->setGeometry(QRect(50, 200, 83, 29));
        btn_Stop2 = new QPushButton(groupBox_2);
        btn_Stop2->setObjectName("btn_Stop2");
        btn_Stop2->setGeometry(QRect(210, 200, 83, 29));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(650, 30, 211, 81));
        ccb_SampleTime = new QComboBox(groupBox_3);
        ccb_SampleTime->setObjectName("ccb_SampleTime");
        ccb_SampleTime->setGeometry(QRect(20, 40, 131, 28));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(650, 140, 211, 191));
        ccb_COM = new QComboBox(groupBox_4);
        ccb_COM->setObjectName("ccb_COM");
        ccb_COM->setGeometry(QRect(100, 60, 100, 28));
        ccb_Baudrate = new QComboBox(groupBox_4);
        ccb_Baudrate->setObjectName("ccb_Baudrate");
        ccb_Baudrate->setGeometry(QRect(100, 110, 100, 28));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 60, 60, 20));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 110, 63, 20));
        btn_Connect = new QPushButton(groupBox_4);
        btn_Connect->setObjectName("btn_Connect");
        btn_Connect->setGeometry(QRect(20, 150, 83, 29));
        btn_Close = new QPushButton(centralwidget);
        btn_Close->setObjectName("btn_Close");
        btn_Close->setGeometry(QRect(820, 460, 83, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 936, 25));
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
        checkBox->setText(QCoreApplication::translate("MainWindow", "Enable Alarm", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\302\260C", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Temperature High Threshold [\302\260C]", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Temperature Low Threshold [\302\260C]", nullptr));
        btn_ReadTemp1->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        btn_Stop1->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Temperature Sensor 2", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Enable Alarm", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\302\260C", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Temperature High Threshold [\302\260C]", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Temperature Low Threshold [\302\260C]", nullptr));
        btn_ReadTemp2->setText(QCoreApplication::translate("MainWindow", "Read", nullptr));
        btn_Stop2->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Sample Time", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "COM", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Baudrate", nullptr));
        btn_Connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        btn_Close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
