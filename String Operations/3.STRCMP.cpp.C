#include <string.h>
#include <stdio.h>
#include <conio.h>

main()
{ 
/*     char string1[]="Jerry";
     int i,j,k;
    
     i=strcmp(string1,string1);
     j=strcmp(string1,"Apple");
     k=strcmp(string1,"Zebra");*/
     
     int i,j,k;
    
     i=strcmp("Abc","Abc");
     j=strcmp("Cat","Apple");
     k=strcmp("Ball","Zebra");
     printf("\n i = %d  \n j = %d  \n k = %d",i,j,k);
     getch();
}

