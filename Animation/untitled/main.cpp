#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include "my_class.h"

using namespace std;
My_class obj;
struct My_struct
{
    uint32_t c;
    uint16_t b;
    uint8_t a;
};

int main()
{
    cout << sizeof (My_struct) << "\n";
    obj.set();
    return 0;
}
