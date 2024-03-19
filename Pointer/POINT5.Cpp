#include<stdio.h>
#include<conio.h>

main()
{
 int i=3,*j;
 j=&i;
 
 printf("\n address of i=%u",&i);
 printf("\n address of i=%u",j);

 printf("\n\n address of j=%u",&j);

 printf("\n\n value of i=%d",i);
 printf("\n value of i=%d",*(&i));
 printf("\n value of i=%d",*j);

 getch();
}
