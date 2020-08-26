#include <stdio.h>
void print()
{
#ifdef _D
  printf("Debug");
#elsse
   printf("Release");
#endif
}
#define _D
int main()
{
    print();
    return 0;
}
