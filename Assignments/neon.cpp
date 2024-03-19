#include<stdio.h>

main()
{
	int i,n,sum=0,b,x,j,k=1,m=1,s;
	printf("\n\t Enter the number = ");
	scanf("%d",&n);
		
	   s=n*n;
	    	    	
    	for(;s>0;s=s/10)
    	{
    		i=s%10;
    		 
    		sum=sum+i;	
    	
	
    	}
           			         
					    
    	if(sum == n)
    	{
    		printf("\n\t %d number is neon number",n);
		}
 	else
		{
			printf("\n\t %d number is NOT neon number",n);
		}
}
    
    	
    	
