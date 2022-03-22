/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *btn_start;
    QPushButton *btn_stop;
    QProgressBar *probar_load;
    QPushButton *btn_connect;
    QPushButton *btn_openfile;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(390, 371);
        btn_start = new QPushButton(Widget);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));
        btn_start->setGeometry(QRect(30, 20, 161, 51));
        btn_stop = new QPushButton(Widget);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));
        btn_stop->setGeometry(QRect(200, 20, 161, 51));
        probar_load = new QProgressBar(Widget);
        probar_load->setObjectName(QString::fromUtf8("probar_load"));
        probar_load->setGeometry(QRect(30, 90, 331, 23));
        probar_load->setValue(0);
        btn_connect = new QPushButton(Widget);
        btn_connect->setObjectName(QString::fromUtf8("btn_connect"));
        btn_connect->setGeometry(QRect(110, 120, 161, 51));
        btn_openfile = new QPushButton(Widget);
        btn_openfile->setObjectName(QString::fromUtf8("btn_openfile"));
        btn_openfile->setGeometry(QRect(30, 200, 331, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btn_start->setText(QCoreApplication::translate("Widget", "Flash", nullptr));
        btn_stop->setText(QCoreApplication::translate("Widget", "Erase", nullptr));
        btn_connect->setText(QCoreApplication::translate("Widget", "Connect", nullptr));
        btn_openfile->setText(QCoreApplication::translate("Widget", "Open file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
