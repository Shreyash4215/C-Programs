#include<stdio.h>

main()
{
	int a,b,c,tot,avg;
	printf("\n\t Enter the marks of 3 Sub = ");
	scanf("%d %d %d",&a,&b,&c);
	
	tot = a+b+c;
	avg=tot/3;

	printf("\n\t Total Marks = %d",tot);
	printf("\n\t Avg Marks = %d",avg);
	
	if(avg<40)
		printf("\n\t You are fail");
	else if(avg>=40 && avg<50)		
		printf("\n\t You got C Grade");
	else if(avg>=50 && avg<60)		
		printf("\n\t You got B Grade");
	else if(avg>=60 && avg<70)		
		printf("\n\t You got A Grade");
	else		
		printf("\n\t You got A+ Grade");
}




