#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   int num_read;
   FILE *fptr;
   fptr = fopen("D:\\data\\code\\qt_project\\template_c\\template_c\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error\n");
      exit(1);
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);

   fclose(fptr);

   fptr = fopen("D:\\data\\code\\qt_project\\template_c\\template_c\\program.txt","r");
   fscanf(fptr,"%d", &num_read);
   printf("Value of n=%d", num_read);

   fclose(fptr);

   return 0;
}
