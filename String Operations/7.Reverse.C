#include <string.h>
#include <stdio.h>

main()
{
   char s1[10];

   printf("\n\t Enter the String : ");
   scanf("%s",&s1);

   printf("\n\t Before strrev(): %s",s1);
   strrev(s1);
   printf("\n\t After strrev():  %s",s1);

  
}

