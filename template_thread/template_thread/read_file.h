#ifndef READ_FILE_H
#define READ_FILE_H

#include <stdio.h>
#include <stdint.h>
#include <QDebug>
#include <QFileDialog>

uint32_t calc_file_len(void);
void open_the_file(void);
uint32_t read_the_file(uint8_t *buffer, uint32_t len);
void close_the_file(void);
uint8_t word_to_byte(uint32_t addr, uint8_t index);
void set_file_bin(QString file_name);

#endif // READ_FILE_H
