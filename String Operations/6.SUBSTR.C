#include <string.h>
#include <stdio.h>
#include <conio.h>

main()
{
   char str1[50],str2[50];

    printf("\n Enter the main strings :");
    gets(str1);
   printf("\n Enter the sub-strings :");
   gets(str2);

    if(strstr(str1, str2)==NULL)
     puts("\n sub-String not found in the string");
    else
     puts("\n sub-String is found in the string");

  getch();
}
