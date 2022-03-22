#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#define STX_DATA        0x31
#define ETX_DATA        0x32
#define STX_INDEX       0
#define LENTH_INDEX     1
#define FRAME_ID        2
#define MAX_DATA_LENTH  64

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    uint8_t g_aubDataSerial[MAX_DATA_LENTH] = {0};

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
