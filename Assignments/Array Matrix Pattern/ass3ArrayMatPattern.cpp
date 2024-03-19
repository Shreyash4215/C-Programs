#include<stdio.h>
main()
{
	int n,a[10][10],i,j;
	printf("\n Enter the daimension of matrix: ");
	scanf("%d",&n);
	printf("\n\t Enter %d Elements for Matrix: ",n*n);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
         printf("\n\n\t The Entered MATRIX is : ");
         for(i=0;i<n;i++)
        {
          printf("\n\n\t");
           for(j=0;j<n;j++)
          printf("%3d",a[i][j]);
        }
        printf("\n\n\t the daigonal MATRIX is : ");
          for(i=0;i<n;i++)
           {
           	printf("\n\n\t");
           	
           	for(j=0;j<n-i;j++)
           	  
           	   printf("%3d",a[i][j]);
			} 
  
  
     
}
