#include<conio.h>
#include<stdio.h>

 main()
{
 int r[10],i,n,max;

 printf("\n\t How many numbers you want? : ");
 scanf("%d",&n);

 printf("\n\t Enter %d numbers : ",n);
 for(i=0;i<n;i++)
  scanf("%d",&r[i]);

 max = r[0];

 for(i=0;i<n;i++)
 {
  if(max<r[i])
  {
   max = r[i];
  }
 }

 printf("\n\t Max No is : %d",max);
 getch();
}
