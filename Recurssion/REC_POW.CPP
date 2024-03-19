#include<conio.h>
#include<stdio.h>

long pow(long a,long n)
{
 long p,i;

 if(n==1)
  return a;
 else
  p=a*pow(a,n-1);

 return p;
}

main()
 {
  long x,y,a;

  printf("\n\t Enter the value x & y = ");
  scanf("%ld %ld",&x,&y);

  a=pow(x,y);
  printf("\n\t %ld ^ %ld = %ld",x,y,a);

 }
