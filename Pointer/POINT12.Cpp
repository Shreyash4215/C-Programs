#include<stdio.h>
#include<conio.h>

/* exchange names using 2-d character */

main()
{
 char names[][10]={"akshay","parag","raman","shrinivas","gopal","ragesh"};
 int i;
 char t;
 printf("\n Original String : %s  %s",&names[3][0],&names[4][0]);

 for(i=0;i<10;i++)
 {
  t=names[3][i];
  names[3][i]=names[4][i];
  names[4][i]=t;
 }
 printf("\n After Swapping : %s  %s",&names[3][0],&names[4][0]);
 getch();
}
