#ifndef FLASH_MCU_H
#define FLASH_MCU_H

#include <QThread>
#include <QElapsedTimer>

#define FLASH_DONE          0
#define FLASH_ERROR         1
#define FLASH_TIMEOUT       2
#define FLASH_CHECK_ACK     3
#define FLASH_CHECK_NACK    4

#define ADDRESS_SECTOR_1 0x08008000
#define MAX_DATA         256
#define LEN_DATA(x)      (x+7)
class flash_mcu : public QThread
{
    Q_OBJECT
public:
    explicit flash_mcu(QObject *parent = nullptr);
    ~flash_mcu() override;
    int flag_status;
    int flag_check;
    uint8_t data_buf[MAX_DATA] = {0};

signals:
        void current_load(int value);
        void flash_status(int flag);
        void flash_send(uint8_t * data, int len);
public slots:
        void set_flag(int flag);

        // QThread interface
protected:
        void run() override;
};

#endif // FLASH_MCU_H
