#include<conio.h>
#include<stdio.h>

void disp()
{
 static int n=0;
 n++;
 printf("\n\t n= %d",n);
}

main()
{
 int i;

 for(i=0;i<5;i++)
 {
  disp();
 }
}
