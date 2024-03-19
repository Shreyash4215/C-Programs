#include<conio.h>
#include<stdio.h>

main()
{
 int num[5],i;

 printf("\n\t Enter 5 Elements for Array : ");
 for(i=0;i<5;i++)
  scanf("%d",&num[i]);

 printf("\n\t Array Elements are : ");
 for(i=0;i<5;i++)
  printf("%5d",num[i]);

 getch();
}
