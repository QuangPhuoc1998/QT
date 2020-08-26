#include "my_config.h"

extern QSerialPort * serialPort;

My_config::My_config(QObject *parent) : QObject(parent), count(0),msg("%1 Hits")
{
    msg.arg(count);
}

void My_config::send_button()
{
    qDebug() << "OKE";
    count++;
    emit increaseOne(msg.arg(count));
}

void My_config::send_switch(bool value)
{
    if(value == true) qDebug() << "true";
    else qDebug()<< "false";
}

void My_config::send_slide(int value)
{
    qDebug() << value;
}

void My_config::send_port(QString text)
{
    serialPort->write(text.toStdString().data());
}

void My_config::send_dial(int value)
{
    qDebug() << value;
}
