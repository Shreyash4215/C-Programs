#include<stdio.h>

main()
{
	int i,n,sum=0,b,x,j,fact=1,k;
	printf("\n\t Enter the number = ");
	scanf("%d",&x);
		
		b=n;
		for(k=1;k<=x;k++)
		{
		
    	for(n=k;n>0;n=n/10)
    	{
    		i=n%10;
    		 
    	for(j=1;j<=i;j++)	 
    		{
    			fact=fact*j;	
			}
			 // printf("\n\t %d ",fact);
    			sum=sum+fact;
				fact=1;
    	}
    	
    	if(sum == k)
    	{
    		printf("\n\ %d",k);
		}
	
    }
    }
 

