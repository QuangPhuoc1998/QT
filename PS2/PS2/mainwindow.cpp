#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    for(int i = 0; i < 8;i++)
    {
        ui->lw->addItem(QString::number(i) + " item here");
    }
    for(int i = 0; i < 8;i++)
    {
        ui->cb->addItem(QString::number(i) + " item here");
    }
    ui->cb->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_1_clicked()
{
    qDebug() << ui->lw->count();
    /*
    QListWidgetItem *itm = ui->lw->currentItem();
    itm->setText("hihi");
    itm->setForeground(Qt::red);
    itm->setBackgroundColor(Qt::black);
    */
    //ui->lw->m
    uint8_t x = ui->lw->currentIndex().row();
    x++;
    ui->lw->setCurrentRow(x++);
}

void MainWindow::on_btn_2_clicked()
{
    qDebug() << ui->lw->currentIndex().row();
}

void MainWindow::on_lw_pressed(const QModelIndex &index)
{
    //qDebug() << index.row();
}

void MainWindow::on_lw_clicked(const QModelIndex &index)
{
    qDebug() << index.row();
}



void MainWindow::on_cb_activated(int index)
{
    qDebug() << index;
}

void MainWindow::on_btn_up_2_clicked()
{
    ui->cb->showPopup();
}

void MainWindow::on_btn_up_clicked()
{
    if(cb_count < ui->cb->count()-1)
    {
        cb_count++;
        ui->cb->setCurrentIndex(cb_count);
        on_cb_activated(cb_count);
    }
}

void MainWindow::on_btn_down_clicked()
{
    if(cb_count > 0)
    {
        cb_count--;
        ui->cb->setCurrentIndex(cb_count);
        on_cb_activated(cb_count);
    }
}
