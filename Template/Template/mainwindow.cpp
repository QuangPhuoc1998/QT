#include "mainwindow.h"
#include "ui_mainwindow.h"

bool status = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->dial->setValue(50);
    ui->lcdNumber->display(ui->dial->value());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_dial_valueChanged(int value)
{
    ui->lcdNumber->display(value);
}

void MainWindow::on_pushButton_clicked()
{
    if(status == false)
    {
        ui->pushButton->setStyleSheet("border-image: url(:off.png);");
        status = true;
    }
    else
    {
        ui->pushButton->setStyleSheet("border-image: url(:on.png);");
        status = false;
    }
}
