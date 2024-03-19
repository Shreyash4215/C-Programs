#include<stdio.h>

main()
{
 int a[20],b[20],i,j,n,flag=0;

 printf("\n\t How many numbers you want? : ");
 scanf("%d",&n);

 printf("\n\t Enter %d Numbers for array 1 : ",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
		
	printf("\n\t Enter %d Numbers for array 2 : ",n);
	 for(i=0;i<n;i++)
	  scanf("%d",&b[i]);
 
      for(i=n;i<n*2;i++) 
      {
      	 a[i]=b[i];
       }
     
      printf("\n\t Entered Numbers of array : ");  
	 for(i=0;i<n*2;i++)
 		printf("\n\t %d  ",a[i]);
     
           
}
