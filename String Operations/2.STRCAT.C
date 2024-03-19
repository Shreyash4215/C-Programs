#include<conio.h>
#include<stdio.h>
#include<string.h>

main()
{
 char source[20]="welcome";
 char target[20]="Hello ! ";

 printf("\n source = %s",source);
 printf("\n target = %s",target);

 strcat(target,source);
 printf("\n\n source = %s",source);
 printf("\n target = %s",target);
 getch();
}
