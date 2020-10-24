#include <stdio.h>

int main()
{
    char text[50] = "ABCD";
    char *p = "hihi";
    int number[3][2][2][2];
    number[0][0][0][0] = 2;
    int i;
    printf("%d\n", number[0][0][0][0]);
    for(i=0;p[i]!='\0';i++)
    {
        printf("%c\n", p[i]);
    }
    return 0;
}
