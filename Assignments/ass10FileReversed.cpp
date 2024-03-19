#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<process.h>

main()
{
 FILE *fp,*ft;
 char s;

 fp=fopen("inp.txt","r");
 ft=fopen("REV.txt","w");
     if(fp==NULL)
     {
          puts("\n\n\t cannot open file");  // same as like printf()
     }
     else
     {
         while(fgets(s,fp) == EOF)
         {
          strrev(s);
          printf("%s",s);
          fputs(s,ft);
    }
     printf("\n\t File Reversed Successfully ....");
     fclose(fp);
     fclose(ft);
     getch();
}
}
