#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <flash_mcu.h>
#include "QDebug"
#include "qserialport.h"
#include <QSerialPortInfo>

#define MAX_DATA_UART 32

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    uint8_t Rx_Data, Rx_Buffer[MAX_DATA_UART];
    uint8_t Rx_Indx = 0;

private slots:
    void on_btn_start_clicked();

    void on_btn_stop_clicked();

    void current_load(int value);

    void on_btn_connect_clicked();

    void flash_status(int flag);

    void serialport_init(void);

    void serialport_read(void);

    void flash_send(uint8_t * data, int len);

    void on_btn_openfile_clicked();

private:
    Ui::Widget *ui;
    flash_mcu * bootloader_process;
    QSerialPort * serialPort;
};
#endif // WIDGET_H
