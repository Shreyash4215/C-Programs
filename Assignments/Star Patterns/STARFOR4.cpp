#include<conio.h>
#include<stdio.h>

main()
 {
 int i,j,n;

 printf("\n Enter Number : ");
 scanf("%d",&n);
 for(i=1;i<=n*2;i++)
 {
    printf("\n");
     if(i%2==0)
     {
      for(j=1;j<=i;j++)
       printf("#");
     }
     else
     {
      for(j=1;j<=i;j++)
       printf("$");
     }
 }
 getch();
 
}
