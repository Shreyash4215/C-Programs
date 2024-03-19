#include<stdio.h>

// 2D Array

main()
{
 int i,j,a[10][10],r,c;

 printf("\n\t Enter the row and col of Matrix : ");
 scanf("%d %d",&r,&c);
 printf("\n\t Enter %d Elements : ",r*c);

 for(i=0;i<r;i++)
  for(j=0;j<c;j++)
   scanf("%d",&a[i][j]);

  printf("\n\t The MATRIX Form is : ");
  for(i=0;i<r;i++)
  {
   printf("\n\n\t");
   for(j=0;j<c;j++)
    printf("%3d",a[i][j]);
  }

  printf("\n\n\t Their location are : ");
  for(i=0;i<r;i++)
   for(j=0;j<c;j++)
    printf("\n\t Location of %d Element is (%d,%d)",a[i][j],i,j);

}
