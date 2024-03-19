#include<stdio.h>
#include<conio.h>
// Factorial
main()
{
	int n,fact=1;
	printf("\n\t Enter the Number = ");
	scanf("%d",&n);
	
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	printf("\n\t Factorial = %d",fact);
	getch();
}

