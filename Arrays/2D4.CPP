#include<stdio.h>

// Multiplication of 2D Array

main()
{
 int i,j,a[10][10],b[10][10],k,sum=0,n;

 printf("\n\t Enter the Dimension of Matrix : ");
 scanf("%d",&n);

 printf("\n\t Enter %d Elements for First Matrix: ",n*n);
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);

 printf("\n\t Enter %d Elements for Second Matrix: ",n*n);
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   scanf("%d",&b[i][j]);

  printf("\n\n\t The First MATRIX is : ");
  for(i=0;i<n;i++)
  {
   printf("\n\n\t");

   for(j=0;j<n;j++)
    printf("%3d",a[i][j]);
  }

  printf("\n\n\t The Second MATRIX is : ");
  for(i=0;i<n;i++)
  {
   printf("\n\n\t");

   for(j=0;j<n;j++)
    printf("%3d",b[i][j]);
  }

 printf("\n\n\t Multiplication MATRIX is : ");
 for(i=0;i<n;i++)
 {
  printf("\n\n\t");
  for(j=0;j<n;j++)
  {
   for(k=0;k<n;k++)
   {
    sum=sum+a[i][k]*b[k][j];
   }

    printf("%3d",sum);
    sum=0;
  }
 }

	}
