#include<stdio.h>
#include<conio.h>


void disp()
{
	static int n=0;
	n++;
  	printf("\n\t %d",n);
}

main()
{
	for(int i=0;i<5;i++)
		disp();
}

