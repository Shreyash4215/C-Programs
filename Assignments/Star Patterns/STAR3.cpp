#include<stdio.h>

main()
{
 int i,n,j;

 printf("\n Enter Number : ");
 scanf("%d",&n);

 for(i=n;i>=0;i--)
 {
  for(j=1;j<=n-i;j++)
   printf(" ");

  for(j=1;j<=2*i-1;j++)
   printf("*");

  printf("\n");
 }

}
