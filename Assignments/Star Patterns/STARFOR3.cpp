#include<conio.h>
#include<stdio.h>

main()
 {
 int i,j,n;

 printf("\n Enter Number : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    printf("\n");
  for(j=1;j<=2*i-1;j++)
   printf("#");

    printf("\n");
  for(j=1;j<=2*i;j++)
   printf("$");
 }
 getch();
 
}
