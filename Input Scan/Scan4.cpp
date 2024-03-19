#include<stdio.h>

main()
{
	float amt,dis,bill;

	printf("\n\t Enter the Amount = ");
	scanf("%f",&amt);

	printf("\n\t Enter the discount = ");
	scanf("%f",&dis);

	bill = amt - (amt*dis)/100;

	printf("\n\t Final Bill = %f",bill);
}

