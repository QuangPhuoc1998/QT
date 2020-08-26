#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_connect_clicked();

    void on_btn_stop_clicked();

    void on_btn_send1_clicked();

private slots:
    void serialport_read1();
    void serialport_read2();
    void on_btn_send2_clicked();
private:
    Ui::MainWindow *ui;
    void Serial_config();
};
#endif // MAINWINDOW_H
