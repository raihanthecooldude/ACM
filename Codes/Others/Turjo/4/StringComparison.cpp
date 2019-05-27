#include <stdio.h>
#include <string.h>

int main()
{
   char a[100], b[100];

   printf("Enter the first string\n");
   gets(a);

   printf("Enter the second string\n");
   gets(b);

   if (strcmp(a,b) == 0)
      printf("\nY\n");
   else
      printf("\nN\n");

   return 0;
}
