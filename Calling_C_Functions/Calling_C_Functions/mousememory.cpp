#include "mousememory.h"

MouseMemory::MouseMemory(QObject *parent) : QObject(parent)
{

}

void MouseMemory::test()
{
    qDebug() << "Hello from C++";
}

void MouseMemory::clear()
{
    qDebug() << "clear";
}

void MouseMemory::save()
{
    qDebug() << "save";
}

void MouseMemory::add(double x, double y)
{
    QPoint p(x,y);
    qDebug() << "Adding " << p;
}

void MouseMemory::add(QPoint point)
{
    qDebug() << "Adding float " << point;
}
