/* recieves string from keyboard and writes them to file */

#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
 FILE *fp;
 char s[100],end[]="stop";;

// fp=fopen("source.txt","w");    // write mode
 fp=fopen("inp.txt","a");    // append mode

 printf("\n Enter a few lines of text :\n");

// while(strlen(gets(s))>0)
 while(strcmp(end,gets(s)) != 0)
 {
  fputs(s,fp);
  fputs("\n",fp);
 }
 fclose(fp);

 getch();
}
