#include<stdio.h>

main()
{
 int i,j,n;

 printf("\n Enter the number : ");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  printf("\n");

  for(j=1;j<=i;j++)
  {
    printf("%d",i);
  }
 }

}
