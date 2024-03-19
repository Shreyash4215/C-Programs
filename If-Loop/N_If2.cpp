#include<stdio.h>

main()
{
	int a,b,c;
	printf("\n\t Enter the  3 Numbers = ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c)
		printf("\n\t %d Greater Number",a);
	else if(b>a && b>c)
		printf("\n\t %d Greater Number",b);
	else if(c>a && c>b)
		printf("\n\t %d Greater Number",c);
	else 
		printf("\n\t All numbers are qual");
}




