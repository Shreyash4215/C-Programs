#include<conio.h>
#include<stdio.h>

void fibo(int a,int b,int n)
{
 printf("\n\t %d",a);
 int c=a+b;
 a=b;
 b=c;

 if(n>1)
  fibo(a,b,n-1);
}


main()
{
 int n;

 printf("\n\t Enter the Number = ");
 scanf("%d",&n);

 fibo(0,1,n);
 
}
