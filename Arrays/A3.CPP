#include<conio.h>
#include<stdio.h>

main()
{
 int num[20],i,n,sum=0;

 printf("\n\t How many number you want?:");
 scanf("%d",&n);

 printf("\n\t Enter %d Number:",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&num[i]);
  sum=sum+num[i];
 }

 printf("\n\t Addition of Array Elements = %d",sum);
 getch ();
}
