#include<stdio.h>
#include<conio.h>
// Perfect Numbers in Range
main()
{
	int i,n,sum,x,j=1;
	printf("\n\t Enter the Range = ");
	scanf("%d",&x);
	
	while(j<=x)
	{
        n=j;        // IMP
        i=1;
        sum=0;
        
    	while(i<n)
    	{
    		if(n%i == 0)
    		{
    			sum=sum+i;
    		}
    		
    		i++;
    	}
    	
    	if(sum==n)
    		printf("\n\t %d is Perfect Number",n);
    
        j++;		
    }
    getch();
}

