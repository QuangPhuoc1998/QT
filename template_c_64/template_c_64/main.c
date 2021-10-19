#include <stdio.h>

int main()
{
int a = 6;
float b = 2;
printf("Size of a: %ld\n", sizeof (a));
printf("Size of b: %ld\n", sizeof (b));
printf("%d", sizeof(++a + b)); printf("%d", a);
return 0;
}
