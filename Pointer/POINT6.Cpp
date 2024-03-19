#include<stdio.h>
#include<conio.h>

/* pointer to pointer */

main()
{
 int i=3,*j,**k;
 j=&i;
 k=&j;

 printf("\n\n address of i=%u",&i);
 printf("\n address of i=%u",j);
 printf("\n address of i=%u",*k);

 printf("\n\n address of j=%u",&j);
 printf("\n address of j=%u",k);

 printf("\n\n address of k=%u",&k);

 printf("\n\n value of i=%d",i);
 printf("\n value of i=%d",*(&i));
 printf("\n value of i=%d",*j);
 printf("\n value of i=%d",**k);
 getch();
}
