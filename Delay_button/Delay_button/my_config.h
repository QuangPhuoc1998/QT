#ifndef MY_CONFIG_H
#define MY_CONFIG_H

#include <QObject>
#include <QtDebug>
#include <QPoint>
#include <QtSerialPort/QSerialPort>

class My_config : public QObject
{
    Q_OBJECT
public:
    explicit My_config(QObject *parent = nullptr);

signals:

public slots:
    void send_data(bool value);
};

#endif // MY_CONFIG_H
