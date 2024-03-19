#include<stdio.h>
#include<conio.h>

main()
{
 char nm[10];

 printf("\n\t Enter your name = ");
// scanf("%s",&nm);     // to scan single word (upto sapce)
  gets(nm);             // to scan single line (upto enter)

 printf("\n\t Welcome %s",nm);
 getch();
}
