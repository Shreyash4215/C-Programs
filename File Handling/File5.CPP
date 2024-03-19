#include<stdio.h>
#include<conio.h>
#include<process.h>

main()
{
 FILE *fp;
 char another='y';
 char name[40];
 int age;
 float bs;

 fp=fopen("Employee.txt","a");

 while(another=='y')
 {
  printf("\n Enter name , age and basic salary :\n");
  scanf("%s %d %f",&name,&age,&bs);

  fprintf(fp,"%s %d %f\n",name,age,bs);

  printf("another employee (y/n)");
  another=getche();
 }

 fclose(fp);


 // Reading the File

  fp=fopen("employee.txt","r");

 printf("\n\t *** File Content ***");

 printf("\n\n Name \t\t Age \t\t B_Sal \n");
 printf("\n-----------------------------------------\n");
 while(fscanf(fp,"%s %d %f",&name,&age,&bs)!=EOF)
 {
  printf("\n %s \t\t %d \t\t %.2f",name,age,bs);
 }
 printf("\n-----------------------------------------\n");

 fclose(fp);

 getch();
}
