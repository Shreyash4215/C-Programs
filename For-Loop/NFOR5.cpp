#include<stdio.h>

main()
{
 int i,j,n,k=1;

 printf("\n Enter the number : ");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
  printf("\n");

  for(j=1;j<=i;j++,k++)
  {
    printf("%3d",k);
  }
 }

}
