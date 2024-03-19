#include<stdio.h>
#include<conio.h>

 main()
{
 int i=3;

 printf("\n address of i = %u",&i);
 printf("\n value of i = %d",i);
 printf("\n value of i = %d",*(&i));
 printf("\n value of i = %d",*&i);

 getch();
}
