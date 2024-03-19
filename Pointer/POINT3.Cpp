#include<stdio.h>
#include<conio.h>

main()
{
 char c ;
 char *ptr;

 ptr=&c;

 printf("\n Enter a character =");
 scanf("%c",&c);

 printf("\n Character is : %c",c);
 printf("\n *ptr is : %c",*ptr);

 printf("\n\n Address of c is : %u",&c);
 printf("\n value of c is : %u",ptr);

 printf("\n\n Address of ptr is : %u",&ptr);
 getch();
}
