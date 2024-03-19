#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	printf("\n\t Enter the Number = ");
	scanf("%d",&n);

	printf("\n\t Reverse Number = ");
	for(;n>0;n=n/10)
	{
		i=n%10;
		printf("%d",i);
	}
	
	getch();
}

