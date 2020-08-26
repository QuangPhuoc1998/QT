#include "my_config.h"

My_config::My_config(QObject *parent) : QObject(parent)
{

}

void My_config::buffer()
{
    qDebug() << "OKE";
}
