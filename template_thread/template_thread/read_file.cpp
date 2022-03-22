#include "read_file.h"

//#define USER_APP "D:\\data\\code\\share with the community\\OTA\\template_thread\\template_thread\\user_app.bin"

QString bin_file;
QFile File_bin;

void set_file_bin(QString file_name)
{
    bin_file = file_name;
}
//This function opens the file, calculates and returns total length in bytes
uint32_t calc_file_len(void)
{
    uint32_t fileLen;

    QFile myFile(bin_file);
    myFile.open(QFile::ReadWrite);

    fileLen = myFile.size();

    myFile.close();

    return fileLen;
}
//This function opens the file , global file handle is used to store the file pointer
void open_the_file(void)
 {
    File_bin.setFileName(bin_file);
    File_bin.open(QFile::ReadWrite);
 }
//This function reads the file for a given "len" bytes
uint32_t read_the_file(uint8_t *buffer, uint32_t len)
{
    File_bin.read((char *)buffer, len);
    return 0;
}

//close the global file handle
void close_the_file(void)
{
    File_bin.close();
}
uint8_t word_to_byte(uint32_t addr, uint8_t index)
{

      uint8_t value = (addr >> ( 8 * ( index -1)) & 0x000000FF );
      return value;

}

