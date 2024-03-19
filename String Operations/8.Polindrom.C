#include<string.h>
#include<stdio.h>
#include<conio.h>

 main()
{
   char s1[20],s2[20];
   int i;

   printf("\n\t Enter the String : ");
   scanf("%s",&s1);

   strcpy(s2,s1);	       // Tacking Backup.

   printf("\n\t Entered String : %s",s1);
   strrev(s1);                 // Reversing string.
   printf("\n\t Reverse String : %s",s1);

   i=strcmp(s1,s2);           // Comparing string.
   if(i==0)
    printf("\n\n\t Entered string is Polindrom");
   else
    printf("\n\n\t Entered string NOT is Polindrom");

   getch();
}
