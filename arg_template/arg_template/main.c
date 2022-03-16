#include "stdio.h"
#include "stdint.h"
typedef void (* callback_t)(void *);

typedef struct
{
    uint16_t time_out;
    callback_t * callback;
} task_t;

task_t my_task;
callback_t * test;
void task_1(void * pv_param);
int main(void)
{
    test = task_1;

    (* test)(0);
    return 0;
}
void task_1(void * pv_param)
{
    printf("Hello\n");
}
