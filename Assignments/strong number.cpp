#include<stdio.h>

main()
{
	int i,n,sum=0,b,x,j,fact=1,k=1,bup;
	printf("\n\t Enter the number = ");
	scanf("%d",&n);
	
	bup=n;
		
		for(;n>0;n=n/10)
    	{
    		i=n%10;
    		 
    	for(j=1;j<=i;j++)	 
    		{
    			fact=fact*j;	
			}
		//	printf("\n\t %d ",fact);
    			sum=sum+fact;
				fact=1;
    	}
    	
    	if(sum == bup)
    	{
    		printf("\n\t %d number is strong number",bup);
		}
		else
		{
			printf("\n\t %d number is NOT strong number",bup);
		}
	}
    		
    
 

