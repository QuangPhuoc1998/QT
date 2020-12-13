#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>
#include <QDebug>

QSerialPort * serialPort;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    serialPort = new QSerialPort(this);

    serialPort = new QSerialPort();
    serialPort->setPortName("COM3");
    serialPort->setBaudRate(QSerialPort::Baud9600);
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setParity(QSerialPort::NoParity);
    serialPort->setStopBits(QSerialPort::OneStop);

    serialPort->open(QIODevice::ReadWrite);
    connect(serialPort, SIGNAL(readyRead()),this, SLOT(serialport_read()));
}

MainWindow::~MainWindow()
{
    serialPort->close();
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    serialPort->write(ui->lineEdit->text().toStdString().data());
}

void MainWindow::serialport_read()
{
    ui->plainTextEdit->moveCursor(QTextCursor::End);
    QString str = serialPort->readAll();
    data += str;
    ui->plainTextEdit->insertPlainText(str);
    if(str == 'W')
    {
        data = data.remove("W");
        qDebug() << data;
        QStringList list = data.split(",");
        qDebug() << list;

        data = "";
    }
}
