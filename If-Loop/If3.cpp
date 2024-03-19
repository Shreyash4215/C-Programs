#include<stdio.h>

main()
{
	int n,ans;
	printf("\n\t Enter the Number = ");
	scanf("%d",&n);
	
	ans = n%2;

	if(ans == 0)
		printf("\n\t %d is Even Number",n);
	else
		printf("\n\t %d is Odd Number",n);
}

