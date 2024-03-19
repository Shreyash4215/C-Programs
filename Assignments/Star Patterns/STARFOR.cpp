#include<stdio.h>

main()
 {
 int i,j,n,b=0;

 printf("\n Enter Number : ");
 scanf("%d",&n);

 for(i=n;i>=1;i--)
 {
  printf("\n");

  for(j=1;j<=i;j++)
   printf("*");

  for(j=1;j<=b*2;j++)
   printf(" ");

  for(j=1;j<=i;j++)
   printf("*");

  b++;
 }

}
