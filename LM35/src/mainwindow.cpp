#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include "frame_data.h"

/*Initialize global variables*/
QByteArray test_frame;
uint8_t test_frame_buff[20] = {0};
uint16_t test_frame_buff_length;
frame_data frame_data_sensor;
uint8_t length_data_rx = 0;
/*--------------------------*/

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init_window();
    connect(&serial,SIGNAL(readyRead()),this,SLOT(received_data_from_STM32()));
}

MainWindow::~MainWindow()
{
    delete ui;
    serial.close();
}

void MainWindow::init_window()
{
    setFixedSize(width(),height());
    setWindowTitle("LM35 Temperature");

    ui->txt_DataReceived->setReadOnly(true);
    ui->txt_Notification->setReadOnly(true);
    ui->txt_TempSensor1->setReadOnly(true);
    ui->txt_TempSensor2->setReadOnly(true);
    ui->btn_ReadTemp1->setDisabled(true);
    ui->btn_ReadTemp2->setDisabled(true);
    ui->btn_Setting->setDisabled(true);
    ui->btn_ReadData->setDisabled(true);

    //Find COM on Computer
    QList<QSerialPortInfo> ports = info.availablePorts();
    QList<QString> strPorts;
    for (int i = 0; i < ports.size();i++)
    {
        strPorts.append(ports.at(i).portName());
    }
    ui->cbb_COM->addItems(strPorts);

    //List all Baudrates your computer support
    QList<qint32> baudRates = info.standardBaudRates();
    QList<QString> strBaudRates;
    for (int i = 0; i < baudRates.size();i++)
    {
        strBaudRates.append(QString::number(baudRates.at(i)));
    }
    ui->cbb_Baudrate->addItems(strBaudRates);
}

void MainWindow::saveFile_Sen1()
{
    QFile file("D:\\StufdyQt\\HelloWorld\\DLCN_BTL\\Temp_Report\\Temperature_Sensor_1.txt");

    if (file.open(QIODevice::Append | QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        QString text = ui->txt_TempSensor1->toPlainText();
        QString DateTime = QDateTime::currentDateTime().toString("dd-MM-yyyy HH:mm:ss");
        stream << "Sensor 1: " + text + "℃ " + DateTime << Qt::endl;
        qDebug()<<1;
    }
    else
    {
        qDebug()<<0;
    }
    file.close();
}

void MainWindow::saveFile_Sen2()
{
    QFile file("D:\\StufdyQt\\HelloWorld\\DLCN_BTL\\Temp_Report\\Temperature_Sensor_2.txt");

    if (file.open(QIODevice::Append | QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        QString text = ui->txt_TempSensor2->toPlainText();
        QString DateTime = QDateTime::currentDateTime().toString("dd-MM-yyyy HH:mm:ss");
        stream << "Sensor 1: " + text + "℃ " + DateTime << Qt::endl;
        qDebug()<<1;
    }
    else
    {
        qDebug()<<0;
    }
    file.close();
}

void MainWindow::show_notice(const QString mess, const Qt::GlobalColor textColor)
{
    ui->txt_Notification->setTextColor(textColor);
    ui->txt_Notification->append(mess);
    ui->txt_Notification->setTextColor(textColor);
}

void MainWindow::show_received_data(const QString mess, const Qt::GlobalColor textColor)
{
    ui->txt_DataReceived->setTextColor(textColor);
    ui->txt_DataReceived->append(mess);
}

void MainWindow::send_data(uint8_t cmd, QByteArray data,  const QString mess)
{
    frame_data_sensor.clear_frame_tx();;
    /*Create raw frame to transmit*/
    frame_data_sensor.write_data.clear();
    frame_data_sensor.write_data.append(cmd);
    if(data.toInt() != 0)
    {
        frame_data_sensor.write_data.append(data);
    }
    /*create frame that needed to STM32 by frame data layer*/
    uint8_t length_frame_to_STM32 = frame_data_sensor.create_frame_data(reinterpret_cast<uint8_t *>(frame_data_sensor.write_data.data()),frame_data_sensor.write_data.size(),frame_data_sensor.frame_data_tx);
    QByteArray frame_to_STM32 = QByteArray(reinterpret_cast<char *>(frame_data_sensor.frame_data_tx),length_frame_to_STM32);
    /*transmit to STM32*/
    show_notice("---------------------------",Qt::black);
    show_notice(mess,Qt::black);
    show_notice("---------------------------",Qt::black);
    serial.write(frame_to_STM32);
}

void MainWindow::on_btn_Connect_clicked()
{
    if (ui->btn_Connect->text() == "Connect")
    {
        QString selected_com = ui->cbb_COM->currentText();
        if (!(selected_com == "Select COM"))
        {
            serial.setPortName(selected_com);
            /*create connection between computer and STM32F1 blue pill*/
            serial.open(QIODevice::ReadWrite);
            if (!serial.isOpen())
            {
                /*Connect failed*/
                show_notice("Connect unsucessfully !",Qt::red);
            }
            else
            {
                /*Connect sucessfully*/
                /*Step 1: set baudrate for interacting between computer and microcontroller*/
                QString current_baudrate_str = ui->cbb_Baudrate->currentText();
                if (!(current_baudrate_str == "Select Baudrate"))
                {
                    serial.setBaudRate(current_baudrate_str.toInt());

                    /*Step 2: set data bits for frame data to communicate*/
                    serial.setDataBits(QSerialPort::Data8);
                    /*Step 3: set stop bits for frame data*/
                    serial.setStopBits(QSerialPort::OneStop);
                    /*Step 4: set parity bit for frame data*/
                    serial.setParity(QSerialPort::NoParity);
                    show_notice("Connect sucessfully !",Qt::black);


                    ui->btn_Connect->setText("DISCONNECT");
                    ui->btn_ReadTemp1->setDisabled(false);
                    ui->btn_ReadTemp2->setDisabled(false);
                    ui->btn_Setting->setDisabled(false);
                }
                else
                {
                    QMessageBox::warning(this,"Warning","You have to select baud rate before starting !");
                    serial.close();
                }
            }
        }
        else
        {
            QMessageBox::warning(this,"Warning","You have to select COM before starting !");
        }

    }
    else
    {
        serial.close();
        show_notice("Disconnect sucessfully !",Qt::black);
        ui->btn_Connect->setText("Connect");
        ui->btn_ReadTemp1->setDisabled(true);
        ui->btn_ReadTemp2->setDisabled(true);
        ui->btn_Setting->setDisabled(true);
    }

}

void MainWindow::on_btn_Refresh_clicked()
{
    QList<QSerialPortInfo> com_list = info.availablePorts();
    QList<QString> com_str;
    for (int i = 0; i < com_list.size(); i++)
    {
        com_str.append(com_list.at(i).portName());
    }
    ui->cbb_COM->clear();
    ui->cbb_COM->addItem("Select COM");
    ui->cbb_COM->addItems(com_str);
}

void MainWindow::on_btn_ReadTemp1_clicked()
{
    if (ui->btn_ReadTemp1->text() == "Read")
    {
        ui->btn_ReadTemp1->setText("Stop");
        ui->btn_ReadData->setDisabled(false);
        send_data(READ_SENSOR_1, 0, "Read Sensor 1");
    }
    else
    {
        ui->btn_ReadTemp1->setText("Read");
        if(ui->btn_ReadTemp2->text() == "Read")
        {
            ui->btn_ReadData->setDisabled(true);
        }
        send_data(STOP_READ_SENSOR_1, 0, "Stop Read Sensor 1");
    }
}

void MainWindow::on_btn_ReadTemp2_clicked()
{
    if (ui->btn_ReadTemp2->text() == "Read")
    {
        ui->btn_ReadTemp2->setText("Stop");
        ui->btn_ReadData->setDisabled(false);
        send_data(READ_SENSOR_2, 0, "Read Sensor 2");
    }
    else
    {
        ui->btn_ReadTemp2->setText("Read");
        if(ui->btn_ReadTemp1->text() == "Read")
        {
            ui->btn_ReadData->setDisabled(true);
        }
        send_data(STOP_READ_SENSOR_2, 0, "Stop Read Sensor 2");
    }
}


void MainWindow::on_btn_ClearData_clicked()
{
    ui->txt_DataReceived->clear();
}


void MainWindow::on_btn_ClearNoti_clicked()
{
    ui->txt_Notification->clear();
}

void MainWindow::on_btn_Setting_clicked()
{
    QString sample_time = ui->cbb_SampleTime->currentText();
    if (!(sample_time == "Select Sample Time"))
    {
        QByteArray sample_time_array = sample_time.toUtf8();
        send_data(SETTING, sample_time_array, "Setting Sample Time: " + sample_time);
    }
    else
    {
        QMessageBox::warning(this,"Warning","You have to select Sample Time before setting!");
    }
}

//  ON/OFF Alarm

//  Save file


void MainWindow::on_btn_ReadData_clicked()
{

}

void MainWindow::received_data_from_STM32()
{

}
