#include<stdio.h>
#include<conio.h>
// Armstrong Numbers in Range
main()
{
	int i,n,sum,x,j;
	printf("\n\t Enter the Range = ");
	scanf("%d",&x);
		
	for(j=1;j<=x;j++)
    {	
    	for(n=j,sum=0;n>0;n=n/10)
    	{
    		i=n%10;
    		sum=sum+(i*i*i);
    	}
    	
    	if(sum == j)
    		printf("\n\t %d is Armstrong Number",j);
    }
 getch();
}
