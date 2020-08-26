#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_quickWidget = new QQuickWidget(this) ;
    m_quickWidget->setSource(QUrl("main.qml"));
    m_quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
    ui->gridLayout->addWidget(m_quickWidget, 1, 0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

