/* counts the number of line,tabs,space,characters */

#include<stdio.h>
#include<conio.h>

main()
{
 FILE *fp;
 char ch;
 int nl=0,nt=0,nb=0,nc=0;

 fp=fopen("inp.txt","r");

 while(1)
 {
  ch=fgetc(fp);

  if(ch==EOF)
  break;

  nc++;

  if(ch==' ')
   nb++;

  if(ch=='\n')
   nl++;

  if(ch=='\t')
   nt++;
 }

 fclose(fp);
 
 printf("\n Number of character =%d",nc);
 printf("\n Number of blank space =%d",nb);
 printf("\n Number of tabs =%d",nt);
 printf("\n Number of lines =%d",nl);
 getch();
}
