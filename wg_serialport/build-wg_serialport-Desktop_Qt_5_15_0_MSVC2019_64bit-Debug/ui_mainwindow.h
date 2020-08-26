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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QComboBox *cb_name1;
    QComboBox *cb_name2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_connect;
    QPushButton *btn_stop;
    QGroupBox *groupBox_2;
    QTextEdit *txt_receiver1;
    QTextEdit *txt_send1;
    QPushButton *btn_send1;
    QGroupBox *groupBox_3;
    QTextEdit *txt_receiver2;
    QTextEdit *txt_send2;
    QPushButton *btn_send2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(24, 24, 24);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 0, 721, 91));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        cb_name1 = new QComboBox(groupBox);
        cb_name1->setObjectName(QString::fromUtf8("cb_name1"));
        cb_name1->setGeometry(QRect(260, 10, 301, 31));
        QFont font;
        font.setPointSize(16);
        cb_name1->setFont(font);
        cb_name1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        cb_name2 = new QComboBox(groupBox);
        cb_name2->setObjectName(QString::fromUtf8("cb_name2"));
        cb_name2->setGeometry(QRect(260, 50, 301, 31));
        cb_name2->setFont(font);
        cb_name2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 221, 65));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_connect = new QPushButton(widget);
        btn_connect->setObjectName(QString::fromUtf8("btn_connect"));
        btn_connect->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));

        verticalLayout->addWidget(btn_connect);

        btn_stop = new QPushButton(widget);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));
        btn_stop->setEnabled(false);
        btn_stop->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));

        verticalLayout->addWidget(btn_stop);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(false);
        groupBox_2->setGeometry(QRect(20, 140, 341, 401));
        txt_receiver1 = new QTextEdit(groupBox_2);
        txt_receiver1->setObjectName(QString::fromUtf8("txt_receiver1"));
        txt_receiver1->setGeometry(QRect(20, 20, 291, 151));
        txt_receiver1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        txt_send1 = new QTextEdit(groupBox_2);
        txt_send1->setObjectName(QString::fromUtf8("txt_send1"));
        txt_send1->setGeometry(QRect(20, 190, 291, 151));
        txt_send1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_send1 = new QPushButton(groupBox_2);
        btn_send1->setObjectName(QString::fromUtf8("btn_send1"));
        btn_send1->setGeometry(QRect(70, 350, 201, 28));
        btn_send1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setEnabled(false);
        groupBox_3->setGeometry(QRect(430, 140, 341, 401));
        txt_receiver2 = new QTextEdit(groupBox_3);
        txt_receiver2->setObjectName(QString::fromUtf8("txt_receiver2"));
        txt_receiver2->setGeometry(QRect(30, 20, 291, 151));
        txt_receiver2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        txt_send2 = new QTextEdit(groupBox_3);
        txt_send2->setObjectName(QString::fromUtf8("txt_send2"));
        txt_send2->setGeometry(QRect(30, 190, 291, 151));
        txt_send2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_send2 = new QPushButton(groupBox_3);
        btn_send2->setObjectName(QString::fromUtf8("btn_send2"));
        btn_send2->setGeometry(QRect(80, 350, 201, 28));
        btn_send2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        groupBox->setTitle(QString());
        btn_connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        btn_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        groupBox_2->setTitle(QString());
        btn_send1->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        groupBox_3->setTitle(QString());
        btn_send2->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
