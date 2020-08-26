#ifndef MY_CONFIG_H
#define MY_CONFIG_H

#include <QObject>
#include <QtDebug>
#include <QPoint>
#include <QtSerialPort/QSerialPort>
#include <stdio.h>
class My_config : public QObject
{
    Q_OBJECT
public:
    explicit My_config(QObject *parent = nullptr); 
public slots:
    void send_dial(int value);
    void send_button();
    void send_switch(bool value);
    void send_slide(int value);
    void send_port(QString text);
signals:
    void increaseOne(QString ms);
private:
    int count;
    QString msg;
};

#endif // MY_CONFIG_H
