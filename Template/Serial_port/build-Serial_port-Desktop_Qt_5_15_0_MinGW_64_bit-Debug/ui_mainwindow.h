/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *led_send;
    QPushButton *send;
    QPlainTextEdit *pte_receive;
    QGroupBox *groupBox;
    QComboBox *cb_com;
    QComboBox *cb_baud;
    QComboBox *cb_parity;
    QComboBox *cb_data;
    QComboBox *cb_stop;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1012, 365);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        led_send = new QLineEdit(centralwidget);
        led_send->setObjectName(QString::fromUtf8("led_send"));
        led_send->setGeometry(QRect(30, 40, 311, 31));
        send = new QPushButton(centralwidget);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(360, 40, 151, 31));
        pte_receive = new QPlainTextEdit(centralwidget);
        pte_receive->setObjectName(QString::fromUtf8("pte_receive"));
        pte_receive->setGeometry(QRect(30, 90, 481, 241));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(550, 30, 401, 281));
        cb_com = new QComboBox(groupBox);
        cb_com->addItem(QString());
        cb_com->addItem(QString());
        cb_com->addItem(QString());
        cb_com->setObjectName(QString::fromUtf8("cb_com"));
        cb_com->setGeometry(QRect(160, 20, 221, 22));
        cb_baud = new QComboBox(groupBox);
        cb_baud->addItem(QString());
        cb_baud->setObjectName(QString::fromUtf8("cb_baud"));
        cb_baud->setGeometry(QRect(160, 60, 221, 22));
        cb_parity = new QComboBox(groupBox);
        cb_parity->addItem(QString());
        cb_parity->setObjectName(QString::fromUtf8("cb_parity"));
        cb_parity->setGeometry(QRect(160, 140, 221, 22));
        cb_data = new QComboBox(groupBox);
        cb_data->addItem(QString());
        cb_data->setObjectName(QString::fromUtf8("cb_data"));
        cb_data->setGeometry(QRect(160, 100, 221, 22));
        cb_stop = new QComboBox(groupBox);
        cb_stop->addItem(QString());
        cb_stop->setObjectName(QString::fromUtf8("cb_stop"));
        cb_stop->setGeometry(QRect(160, 180, 221, 22));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 220, 201, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1012, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        send->setText(QCoreApplication::translate("MainWindow", "CLICK", nullptr));
        groupBox->setTitle(QString());
        cb_com->setItemText(0, QCoreApplication::translate("MainWindow", "COM1", nullptr));
        cb_com->setItemText(1, QCoreApplication::translate("MainWindow", "COM10", nullptr));
        cb_com->setItemText(2, QCoreApplication::translate("MainWindow", "COM11", nullptr));

        cb_baud->setItemText(0, QCoreApplication::translate("MainWindow", "9600", nullptr));

        cb_parity->setItemText(0, QCoreApplication::translate("MainWindow", "No parity", nullptr));

        cb_data->setItemText(0, QCoreApplication::translate("MainWindow", "8 bit", nullptr));

        cb_stop->setItemText(0, QCoreApplication::translate("MainWindow", "1 bit stop", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
