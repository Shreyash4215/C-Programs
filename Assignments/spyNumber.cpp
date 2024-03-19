#include<stdio.h>

main()
{
	int i,n,sum=0,b,x,j,fact=1,k=1,m=1;
	printf("\n\t Enter the number = ");
	scanf("%d",&n);
		
     	b=n;
    	for(;n>0;n=n/10)
    	{
    		i=n%10;
    		 
    		sum=sum+i;	
    	
            m=m*i;  	
	
    	}
    	
    	if(sum == m)
    	{
    		printf("\n\t %d number is spy number",b);
		}
 	else
		{
			printf("\n\t %d number is NOT spy number",b);
		}
}
 

