#include <string.h>
#include <stdio.h>
#include <conio.h>

main()
{
 char source[20]="welcome";
 char target[20]="Good Bye";

 printf("\n source string  =%s",source);
 printf("\n target string  =%s",target);
 strcpy(source,target);
 printf("\n\n source string  =%s",source);
 printf("\n target string  =%s",target);
 getch();
}
