#include<conio.h>
#include<stdio.h>

main()
{
 int i,a[5];

 a[0]=10;
 a[1]=15;
 a[2]=18;
 a[3]=25;
 a[4]=29;

 printf("\n\t Array elements are = ");

 for(i=0;i<5;i++)
  printf("\t %d",a[i]);

 getch();
}
