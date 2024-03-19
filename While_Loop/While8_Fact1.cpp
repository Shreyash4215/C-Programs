#include<stdio.h>
#include<conio.h>
// Factorial
main()
{
	int i=1,n,fact=1;
	printf("\n\t Enter the Number = ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("\n\t Factorial = %d",fact);
	getch();
}

