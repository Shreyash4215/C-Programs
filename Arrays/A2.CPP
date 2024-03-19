#include<conio.h>
#include<stdio.h>

main()
{
 int num[20],i,n;

 printf("\n\t How many Numbers you want? : ");
 scanf("%d",&n);

 printf("\n\t Enter %d Elements for Array : ",n);
 for(i=0;i<n;i++)
  scanf("%d",&num[i]);

 printf("\n\t Array Elements are : ");
 for(i=0;i<n;i++)
  printf("%5d",num[i]);

 getch();
}
