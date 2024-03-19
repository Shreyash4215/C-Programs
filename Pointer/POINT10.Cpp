#include<stdio.h>
#include<conio.h>

/* using array + functions +pointer */

void show(int **r)
{
 printf("\n %d",**r);
}

void disp(int *n)
{
 show(&n);
}

 main()
{
 int i;
 int marks[]={55,65,75,56,78,78,90};

 for(i=0;i<=6;i++)
 disp(&marks[i]);
 getch();
}
