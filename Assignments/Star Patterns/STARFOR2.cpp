#include<conio.h>
#include<stdio.h>

main()
 {
 int i,j,n,b;

 printf("\n Enter Number : ");
 scanf("%d",&n);
 b=n-1;
 for(i=1;i<=n;i++)
 {
  printf("\n");

  for(j=1;j<=i;j++)
   printf("-");

  for(j=1;j<=b*2;j++)
   printf(" ");

  for(j=1;j<=i;j++)
   printf("|");

  b--;
 }
 getch();
 
}
