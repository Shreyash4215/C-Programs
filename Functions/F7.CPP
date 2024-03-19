#include<conio.h>
#include<stdio.h>

int factorial (int n)
{
 int i,fact=1;

 for(i=1;i<=n;i++)
  fact=fact*i;

 return fact;
}

main()
{
 int n,ans;

 printf("\n\t Enter the Number = ");
 scanf("%d",&n);

 ans=factorial(n);
 printf("\n\t Factorial = %d",ans);

}
