#include "flash_mcu.h"
#include "read_file.h"
#include <QDebug>
#include "OP_Header_Main.h"

flash_mcu::flash_mcu(QObject *parent) : QThread(parent)
{

}

flash_mcu::~flash_mcu()
{

}

void flash_mcu::set_flag(int flag)
{
    flag_check = flag;
}


void flash_mcu::run()
{
    uint32_t bytes_remaining=0;
    uint32_t t_len_of_file=0;
    uint32_t bytes_so_far_sent = 0,len_to_read=0;
    uint32_t base_mem_address = ADDRESS_SECTOR_1;
    uint8_t probar = 0;
    t_len_of_file =calc_file_len();


    open_the_file();

    bytes_remaining = t_len_of_file - bytes_so_far_sent;
    qDebug() << "Flash start:";

    probar = (t_len_of_file / 128) + 1;
    uint8_t index = 0;
    while(bytes_remaining)
    {
        if(bytes_remaining >= 128)
        {
            len_to_read = 128;
        }else
        {
            len_to_read = bytes_remaining;
        }

        data_buf[0] = LEN_DATA(len_to_read)-1;
        data_buf[1] = 0x57;
        data_buf[2] = len_to_read;
        data_buf[3] = word_to_byte(base_mem_address,1);
        data_buf[4] = word_to_byte(base_mem_address,2);
        data_buf[5] = word_to_byte(base_mem_address,3);
        data_buf[6] = word_to_byte(base_mem_address,4);

        read_the_file(&data_buf[7],len_to_read);

        emit flash_send(data_buf, LEN_DATA(len_to_read));

        /*--- Timer out ---*/
        flag_check = FLASH_CHECK_NACK;
        QElapsedTimer timeout;
        timeout.start();

        while(flag_check != FLASH_CHECK_ACK)
        {
            if(timeout.elapsed() > 5000)
            {
                goto out;
            }
        }
        index++;

        emit current_load(index * 100 / probar);

        /*---*/
        base_mem_address+=len_to_read;
        bytes_so_far_sent+=len_to_read;
        bytes_remaining = t_len_of_file - bytes_so_far_sent;
    }
    out:;
    if(flag_check == FLASH_CHECK_NACK)
    {
        flag_status = FLASH_TIMEOUT;
    }
    else if(flag_check == FLASH_CHECK_ACK)
    {
        flag_status = FLASH_DONE;
    }
    close_the_file();
    emit flash_status(flag_status);
}
