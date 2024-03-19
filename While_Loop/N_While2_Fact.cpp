
#include<stdio.h>
#include<conio.h>
// Factorial in Range

main()
{
	int i,n,fact,x,j=1;
	printf("\n\t Enter the Range = ");
	scanf("%d",&x);
	while(j<=x)
	{
        n=j;        // IMP
        i=1;
        fact=1;
        
    	while(i<=n)
    	{
    		fact=fact*i;
    		i++;
    	}
    	printf("\n\t %d Factorial = %d",n,fact);
    
        j++;	
    }
	getch();
}

