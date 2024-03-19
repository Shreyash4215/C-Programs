#include<conio.h>
#include<stdio.h>

char check(int n)
{
 if(n%2==0)
 	return 'y';
 else
 	return 'n';
}

main()
{
 int n;
 char ans;

 printf("\n\t Enter the Number = ");
 scanf("%d",&n);

 ans=check(n);

 if(ans=='y')
	 printf("\n\t %d is Even Number",n);
 else
 	printf("\n\t %d is Odd Number",n);
}
