#include<stdio.h>

main()
{
	int i,n,sum=0,b,x,j,k=1,m=1,s;
	printf("\n\t Enter the number = ");
	scanf("%d",&x);
		
		
		for(k=1;k<=x;k++)
		{
	      sum=0;
	      
	      s=k*k;
	    	    	
    	for(;s>0;s=s/10)
    	{
    		i=s%10;
    		 
    		sum=sum+i;	
    	
	
    	}
           			         
					    
    	if(sum == k)
    	{
    		printf("\n\t %d number is neon number",k);
		}
 
}
}
    
    	
    	
