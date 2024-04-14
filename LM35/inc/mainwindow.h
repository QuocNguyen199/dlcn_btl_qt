#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QObject>
#include <QThread>
#include <QList>
#include <QIODevice>
#include <QVector>
#include <QElapsedTimer>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "crc16.h"

#define READ_SENSOR_1			0x01
#define READ_SENSOR_2 			0x02
#define SETTING     			0x03
#define STOP_READ_SENSOR_1		0x04
#define STOP_READ_SENSOR_		0x05
#define DATA_SENSOR_1			0x06
#define DATA_SENSOR_2			0x07
#define SETTING_SUCCESSFULLY	0x08
#define ERROR_FRAME     		0x09

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
    void saveFile_Sen1();

    void saveFile_Sen2();

    void show_notice(const QString mess, const Qt::GlobalColor textColor);

    void send_data(uint8_t mode);

    void received_data_from_STM32();

    void on_btn_Connect_clicked();

    void on_btn_Close_clicked();

    void init_window();

    void on_btn_ReadTemp1_clicked();

    void on_btn_ClearData_clicked();

    void on_btn_ClearNoti_clicked();

    void on_btn_ReadTemp2_clicked();

    void on_btn_Refresh_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort serial;
    QSerialPortInfo info;
};
#endif // MAINWINDOW_H
