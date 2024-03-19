#include<stdio.h>

main()
{
 int a[20],i,j,k,l=0,n,flag=0;

 printf("\n\t How many numbers you want? : ");
 scanf("%d",&n);

 printf("\n\t Enter %d Numbers for array 1 : ",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
		
	         
	 for(i=0;i<n;i++)
 		{
 			for(j=i+1;j<n;j++)
 			{
 			
 			if(a[i] == a[j])
 		    {
 		   		for(k=j;k<n;k++)
 		   		{
 		   	 		a[k] = a[k+1];
				}
			
			j--; 
 		 	
			}
			}
			
		 }
 		      printf("\n\t Entered Numbers of array 1 : ");  
	 for(i=0;i<n;i++)
 		printf("\n\t %d  ",a[i]);

 		
 	}
    
