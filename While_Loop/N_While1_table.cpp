#include<stdio.h>
#include<conio.h>
// Factorial
main()
{
	int n,i=1,j;
	printf("\n\t Enter the Number = ");
	scanf("%d",&n);
	while(i<=10)
	{
        j=1;
        printf("\n");
        while(j<=n)
        {
            printf("%4d",i*j);
            j++;
        }
        i++;
	}
	getch();
}

