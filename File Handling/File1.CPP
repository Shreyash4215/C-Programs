/* Reads string  from the file and display them on screen */

#include<stdio.h>
#include<conio.h>
#include<process.h>

main()
{
 FILE *fp;
 char s[100];

 fp=fopen("demo.txt","r");

     if(fp==NULL)
     {
          puts("\n\n\t cannot open file");  // same as like printf()
     }
     else
     {
         while(fgets(s,99,fp) != NULL)
          printf("%s",s);
    }

     fclose(fp);
     getch();
}
