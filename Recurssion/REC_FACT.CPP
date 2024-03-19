#include<stdio.h>
#include<conio.h>

int factorial(int n)
{
 int fact;

 if(n==1)
  return 1;
 else
  fact = n * factorial(n-1);    // Recursion

  return fact;
}

main()
{
 int n,ans;

 printf("\n\t Enter the Number = ");
 scanf("%d",&n);

 ans = factorial(n);

  printf("\n\t Factorial = %d",ans);
}
