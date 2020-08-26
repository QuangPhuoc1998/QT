#ifndef MY_CONFIG_H
#define MY_CONFIG_H

#include <QObject>
#include <QtDebug>
#include <QPoint>

class My_config : public QObject
{
    Q_OBJECT
public:
    explicit My_config(QObject *parent = nullptr);
    Q_INVOKABLE void buffer();

signals:

};

#endif // MY_CONFIG_H
