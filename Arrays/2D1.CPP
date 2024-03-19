#include<stdio.h>

// Fixed 2d Array

main()
{
 int i,j,a[2][2];

 printf("\n\t Enter 4 Elements : ");
 for(i=0;i<2;i++)
  for(j=0;j<2;j++)
   scanf("%d",&a[i][j]);

  printf("\n\t The MATRIX Form is : ");
  for(i=0;i<2;i++)
  {
   printf("\n\n\t");

   for(j=0;j<2;j++)
    printf("%3d",a[i][j]);
  }

  printf("\n\n\t Their location are : ");
  for(i=0;i<2;i++)
   for(j=0;j<2;j++)
    printf("\n\t Location of %d Element is (%d,%d)",a[i][j],i,j);

}
