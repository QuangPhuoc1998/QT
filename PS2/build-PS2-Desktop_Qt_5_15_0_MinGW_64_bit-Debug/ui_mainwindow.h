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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *lw;
    QComboBox *cb;
    QPushButton *btn_up;
    QPushButton *btn_down;
    QPushButton *btn_up_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setFocusPolicy(Qt::NoFocus);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lw = new QListWidget(centralwidget);
        lw->setObjectName(QString::fromUtf8("lw"));
        lw->setGeometry(QRect(440, 140, 331, 321));
        cb = new QComboBox(centralwidget);
        cb->setObjectName(QString::fromUtf8("cb"));
        cb->setGeometry(QRect(20, 160, 271, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(14);
        cb->setFont(font);
        cb->setLayoutDirection(Qt::LeftToRight);
        cb->setInsertPolicy(QComboBox::InsertAtBottom);
        btn_up = new QPushButton(centralwidget);
        btn_up->setObjectName(QString::fromUtf8("btn_up"));
        btn_up->setGeometry(QRect(190, 40, 101, 41));
        btn_down = new QPushButton(centralwidget);
        btn_down->setObjectName(QString::fromUtf8("btn_down"));
        btn_down->setGeometry(QRect(190, 90, 101, 41));
        btn_up_2 = new QPushButton(centralwidget);
        btn_up_2->setObjectName(QString::fromUtf8("btn_up_2"));
        btn_up_2->setGeometry(QRect(320, 60, 101, 41));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 60, 95, 65));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_1 = new QPushButton(widget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));

        verticalLayout->addWidget(btn_1);

        btn_2 = new QPushButton(widget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));

        verticalLayout->addWidget(btn_2);

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
        btn_up->setText(QCoreApplication::translate("MainWindow", "UP", nullptr));
        btn_down->setText(QCoreApplication::translate("MainWindow", "DOWN", nullptr));
        btn_up_2->setText(QCoreApplication::translate("MainWindow", "SHOW", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
