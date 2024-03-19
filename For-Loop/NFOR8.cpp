#include<conio.h>
#include<stdio.h>

main()
{
 int i,j,n;

 printf("\n Enter the number : ");
 scanf("%d",&n);

 for(i=65;i<n+65;i++)
 {
  printf("\n");

  for(j=65;j<=i;j++)
  {
    printf("%c",j);
  }
 }

 getch();
}
