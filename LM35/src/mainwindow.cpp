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

void MainWindow::send_data(uint8_t mode)
{
    frame_data_sensor.clear_frame_tx();;
    /*Create raw frame to transmit*/
    frame_data_sensor.write_data.clear();
    frame_data_sensor.write_data.append(mode);
    /*create frame that needed to STM32 by frame data layer*/
    uint8_t length_frame_to_STM32 = frame_data_sensor.create_frame_data(reinterpret_cast<uint8_t *>(frame_data_sensor.write_data.data()),frame_data_gui.write_data.size(),frame_data_gui.frame_data_tx);
    QByteArray frame_to_STM32 = QByteArray(reinterpret_cast<char *>(frame_data_sensor.frame_data_tx),length_frame_to_STM32);
    /*transmit to STM32*/
    show_notice("---------------------------",Qt::black);
    show_notice("Turn on led",Qt::black);
    show_notice("Data is transmitted",Qt::black);
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
        ui->btn_Connect->setText("CONNECT");
    }

}


void MainWindow::on_btn_Close_clicked()
{
    delete ui;
    serial.close();
}


void MainWindow::on_btn_ReadTemp1_clicked()
{
    if (ui->btn_ReadTemp1->text() == "Read")
    {
        ui->btn_ReadTemp1->setText("Stop");
    }
    else
    {
        ui->btn_ReadTemp1->setText("Read");
    }
}

void MainWindow::on_btn_ReadTemp2_clicked()
{
    if (ui->btn_ReadTemp2->text() == "Read")
    {
        ui->btn_ReadTemp2->setText("Stop");
    }
    else
    {
        ui->btn_ReadTemp2->setText("Read");
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

void MainWindow::received_data_from_STM32()
{
    uint8_t length_raw_data_rx;
    if (serial.isOpen())
    {
        frame_data_sensor.read_data = serial.readAll();
        qDebug() << frame_data_sensor.read_data;
        qDebug() << serial.bytesAvailable();
        length_data_rx = frame_data_sensor.read_data.size();
        qDebug() << length_data_rx;
        if (length_data_rx == 10)
        {
            uint8_t check = frame_data_sensor.decode_received_frame_data(reinterpret_cast<uint8_t *>(frame_data_sensor.read_data.data()),&length_data_rx,frame_data_sensor.frame_data_rx,&length_raw_data_rx);
            if (check == 0)
            {
                show_notice("Data is true",Qt::black);
                uint8_t *raw_data = frame_data_sensor.frame_data_rx;
                float *velocity_data = reinterpret_cast<float *>(raw_data + 2);
                qDebug() << *velocity_data;
                QString velocity_str = QString("Velocity is %1").arg(*(velocity_data));
                qDebug() << velocity_str;
                show_notice(velocity_str,Qt::black);
            }else
            {
                show_notice("Data is wrong",Qt::red);
            }
        }

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
    ui->cbb_COM->addItem("SELECT COM");
    ui->cbb_COM->addItems(com_str);
}

