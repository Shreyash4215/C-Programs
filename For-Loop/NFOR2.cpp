#include<stdio.h>

main()
{
 int i,j,n;

 printf("\n Enter the Number :");
 scanf("%d",&n);

 for(i=n;i>0;i--)
 {
  printf("\n");

  for(j=1;j<=i;j++)
  {
   printf("*");
  }
 }

}
