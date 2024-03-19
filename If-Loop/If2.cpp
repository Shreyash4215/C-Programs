#include<stdio.h>

main()
{
	int a,b;
	printf("\n\t Enter two Numbers = ");
	scanf("%d %d",&a,&b);

	if(a>b)
		printf("\n\t %d is Greater Number",a);
	else
		printf("\n\t %d is Greater Number",b);
}

