#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QFileDialog>
#include "read_file.h"
#define VAR_DECLS
#include "OP_Header_Main.h"

QString buffer;
QString serial_input;

char test_Qfile[128];

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->btn_start->setEnabled(false);
    ui->btn_stop->setEnabled(false);

    bootloader_process = new flash_mcu(this);

    connect(bootloader_process,&flash_mcu::current_load,this,&Widget::current_load);

    connect(bootloader_process,&flash_mcu::flash_status,this,&Widget::flash_status);

    connect(bootloader_process,&flash_mcu::flash_send,this,&Widget::flash_send);

    connect(bootloader_process,&QThread::started,[](){
        qDebug() << "Thread started";
    });

    connect(bootloader_process,&QThread::finished,[](){
        qDebug() << "Thread finished";
    });
}

Widget::~Widget()
{
    bootloader_process->exit();
    delete ui;
}


void Widget::on_btn_start_clicked()
{
    bootloader_process->start();
}


void Widget::on_btn_stop_clicked()
{
    uint8_t data[2];
    data[0] = 1;
    data[1] = 0x56;
    serialPort->write((char *) data, 2);
}

void Widget::current_load(int value)
{
    ui->probar_load->setValue(value);
}


void Widget::on_btn_connect_clicked()
{
    serialport_init();
    if(serialPort->isOpen())
    {
        ui->btn_start->setEnabled(true);
        ui->btn_stop->setEnabled(true);
    }
}

void Widget::flash_status(int flag)
{
    switch (flag)
    {
        case FLASH_DONE:
            qDebug() << "Flash done" ;
            break;
        case FLASH_TIMEOUT:
            qDebug() << "Flash timeout" ;
            break;
        case FLASH_ERROR:
            qDebug() << "Flash error" ;
            break;
        default:
            break;
    }
}

void Widget::serialport_init()
{
    serialPort = new QSerialPort();
    serialPort->setPortName("COM4");
    serialPort->setBaudRate(QSerialPort::Baud115200);
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setParity(QSerialPort::NoParity);
    serialPort->setStopBits(QSerialPort::OneStop);

    serialPort->open((QIODevice::ReadWrite));

    connect(serialPort,SIGNAL(readyRead()),this,SLOT(serialport_read()));
}

void Widget::serialport_read()
{
    serial_input = serialPort->read(32);

    serialPort->clear();
    if( serial_input != "W")
    {
        buffer += serial_input;
    }
    else
    {
        /*---*/
        if(buffer[0] == '1')
        {
            bootloader_process->set_flag(FLASH_CHECK_ACK);
        }
        else if(buffer[0] == '2')
        {
            QMessageBox msgBox;
            msgBox.setText("Erase flash done");
            msgBox.exec();
        }
        /*---*/
        buffer = "";
    }
    serial_input = "";

}

void Widget::flash_send(uint8_t * data, int len)
{
    serialPort->write((char *)data, len);
}


void Widget::on_btn_openfile_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open a file");
    set_file_bin(file_name);
    qDebug() << calc_file_len() ;
    /*
    QFile myFile(file_name);
    myFile.open(QFile::ReadWrite);
    myFile.read(test_Qfile, 10);
    serialPort->write(test_Qfile, 10);
    */
}

