#include<stdio.h>
#include<conio.h>

main()
{
 int a;
 int *ptr;

 ptr=&a;

 printf("\n enter number:");
 scanf("%d",&a);

 printf("\n\n a is %d",a);
 printf("\n *ptr is %d",*ptr);

 printf("\n\n  ++*ptr is %d",++*ptr);
 printf("\n  ++a  is %d",++a);

 printf("\n\n *ptr is %d",*ptr);
 getch();
}
