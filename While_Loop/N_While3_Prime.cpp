#include<stdio.h>
#include<conio.h>
// Prime Numbers in Range
main()
{
	int i,n,flg,x,j=1;
	printf("\n\t Enter the Range = ");
	scanf("%d",&x);
	
	while(j<=x)
	{
        n=j;        // IMP
        i=2;
        flg=0;
        
    	while(i<n)
    	{
    		if(n%i == 0)
    		{
    			flg=1;
    			break;
    		}
    		
    		i++;
    	}
    	
    	if(flg==0)
    		printf("\n\t %d is Prime Number",n);
    
        j++;		
    }
    
    getch();
}

