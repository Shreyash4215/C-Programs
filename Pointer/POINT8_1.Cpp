#include<stdio.h>
#include<conio.h>

// call by reference

void swapv(int *x, int *y)
{
 int t;
 t=*x;
 *x=*y;
 *y=t;
}

main()
{
 int a=10,b=20;
 printf("\n Before Swap a=%d and b=%d",a,b);
 swapv(&a,&b);
 printf("\n After Swap a=%d and b=%d",a,b);
 getch();
}
