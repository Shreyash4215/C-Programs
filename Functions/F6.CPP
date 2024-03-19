#include<conio.h>
#include<stdio.h>

// 3) Parametarized Function Returning Value

int add (int p,int q)
{
 int r = p+q;
 return r;
}

main()
{
 int a=11,b=22,ans;
 ans=add(a,b);
 printf("\n\t Addition = %d",ans);
}
