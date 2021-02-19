#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

volatile size_t n = 0;
char *readFile(char *fileName) {
    FILE *file = fopen(fileName, "r");
    char *code;
    int c;

    if (file == NULL) return NULL; //could not open file
    fseek(file, 0, SEEK_END);
    long f_size = ftell(file);
    fseek(file, 0, SEEK_SET);
    code = malloc(f_size);

    while ((c = fgetc(file)) != EOF) {
        code[n++] = (char)c;
    }

    code[n] = '\0';

    return code;
}
int main()
{

    char *data;
    data = readFile("program.c");
    for(int i= 0;i < (int)n;i++)
    {
        printf("%c",data[i]);
        if(data[i] == 'a' && data[i-1] == ' ') data[i] = 'b';
    }

    FILE *fp;

   fp = fopen("program.c", "w+");
   fprintf(fp, "%s", data);
   fclose(fp);

    return 0;
}
