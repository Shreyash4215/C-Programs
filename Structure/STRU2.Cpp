#include<stdio.h>
#include<conio.h>

 struct stud
 {
	char name[20],sub[10];
	float marks;
 };

 main()
{
 struct stud s;

 printf("\n Enter student name : ");
 scanf("%s",&s.name);
 printf("\n Enter the subject : ");
 scanf("%s",&s.sub);
 printf("\n Enter the marks : ");
 scanf("%f",&s.marks);

 printf("\n Name of Student is : %s",s.name);
 printf("\n Name of Subject is : %s",s.sub);
 printf("\n Marks are :%.2f",s.marks);
 getch();
}
