#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qserialport.h"
#include <QSerialPortInfo>
#include <QDebug>

QSerialPort * serialPort1;
QSerialPort * serialPort2;
void Serial_config();
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    foreach (const QSerialPortInfo &ThisPort, QSerialPortInfo::availablePorts())
    {
        ui->cb_name1->addItem(ThisPort.portName());
        ui->cb_name2->addItem(ThisPort.portName());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_btn_connect_clicked()
{
    Serial_config();
    connect(serialPort1,SIGNAL(readyRead()),this,SLOT(serialport_read1()));
    connect(serialPort2,SIGNAL(readyRead()),this,SLOT(serialport_read2()));

    ui->groupBox_2->setEnabled(true);
    ui->groupBox_3->setEnabled(true);
    ui->btn_connect->setEnabled(false);
    ui->btn_stop->setEnabled(true);
}
void MainWindow::on_btn_stop_clicked()
{
    serialPort1->close();
    serialPort2->close();
    ui->groupBox_2->setEnabled(false);
    ui->groupBox_3->setEnabled(false);
    ui->btn_connect->setEnabled(true);
    ui->btn_stop->setEnabled(false);
}

void MainWindow::on_btn_send1_clicked()
{
    try
    {
        if(serialPort1->isOpen())
        {
            serialPort1->write(ui->txt_send1->toPlainText().toStdString().data());
        }
        else
        {
            qDebug() << "Chua mo cong COM";
        }
    }
    catch (...)
    {
         qDebug() << "ERROR";
    }
}

void MainWindow::serialport_read1()
{
    ui->txt_receiver1->moveCursor(QTextCursor::End);
    QString data = serialPort1->readAll();
    ui->txt_receiver1->insertPlainText(data);
    serialPort2->write(data.toStdString().data());
}

void MainWindow::serialport_read2()
{
    ui->txt_receiver2->moveCursor(QTextCursor::End);
    ui->txt_receiver2->insertPlainText(serialPort2->readAll());
}

void MainWindow::on_btn_send2_clicked()
{
    if(serialPort1->isOpen())
    {
        serialPort2->write(ui->txt_send2->toPlainText().toStdString().data());
    }
    else
    {
        qDebug() << "Chua mo cong COM";
    }
}

void MainWindow::Serial_config()
{
    serialPort1 = new QSerialPort();
    serialPort1->setPortName(ui->cb_name1->currentText());
    serialPort1->setBaudRate(QSerialPort::Baud57600);
    serialPort1->setDataBits(QSerialPort::Data8);
    serialPort1->setParity(QSerialPort::NoParity);
    serialPort1->setStopBits(QSerialPort::OneStop);

    serialPort1->open((QIODevice::ReadWrite));

    serialPort2 = new QSerialPort();
    serialPort2->setPortName(ui->cb_name2->currentText());
    serialPort2->setBaudRate(QSerialPort::Baud9600);
    serialPort2->setDataBits(QSerialPort::Data8);
    serialPort2->setParity(QSerialPort::NoParity);
    serialPort2->setStopBits(QSerialPort::OneStop);

    serialPort2->open((QIODevice::ReadWrite));
}
