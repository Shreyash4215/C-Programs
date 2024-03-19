#include<string.h>
#include<stdio.h>
#include<conio.h>

# define found 1
# define notfound 0

main()
{
char list[6][10]={"akshay","parag","raman","shrinivas","gopal","rajesh"};
int i,flag,a;
char yourname[10];

printf("\n enter your name:");
scanf("%s",yourname);
flag=notfound;

for(i=0;i<=5;i++)
{
 a=strcmp(&list[i][0],yourname);
 if(a==0)
 {
  printf("welcome , you can enter the palace");
  flag=found;
  break;
 }
}

if(flag==notfound)
printf("sorry you are Not Allow.");
getch();
}
