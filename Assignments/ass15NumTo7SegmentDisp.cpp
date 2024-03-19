#include<conio.h>
#include<stdio.h>

main()
 {
 int i,j,n,b,l,k;

 printf("\n Enter Number : ");
 scanf("%d",&n);
 
  for(j=1;j<=1;j++)
  	printf("\n");

 for(i=1;i<=n-1;i++)
   printf(" ");
 printf("\n");
                                  //printf("\n _\n|_\n _|");
  for(l=1;l<=n-2;l++)
  printf("-");
   printf("\n");
   
  for(k=1;k<=n-3;k++)
   printf("|");
   printf("\n");
 
 getch();
 
}
