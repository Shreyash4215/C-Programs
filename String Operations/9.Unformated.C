#include<stdio.h>
#include<string.h>
#include<conio.h>
 main()
{
 char ch,s[20];

 puts("\n Enter the String = ");
 gets(s);

 puts("\n Your String = ");
 puts(s);

 puts("\n\n Enter the Caracter = ");
 ch = getchar();

 puts("\n Your Character = ");
 putchar(ch);

 puts("\n\n Character = ");
 putchar(ch-32);

 getch();
}
