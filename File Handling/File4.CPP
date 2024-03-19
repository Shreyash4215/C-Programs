/* a file copy program */

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<process.h>

main()
{
 FILE *fs,*ft;
 char ch;

 fs=fopen("source.txt","r");
 ft=fopen("copy.txt","w");

 while(1)
 {
  ch=fgetc(fs);

  if(ch==EOF)
   break;
  else
  
   strrev(ch);
   fputc(ch,ft);
 }

 printf("\n\t File Copied Successfully ....");
 fclose(fs);
 fclose(ft);

 getch();
}
