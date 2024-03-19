#include<stdio.h>
#include<conio.h>
#include<process.h>

main()
{
 FILE *fp;
 char another='y';
 char name[40];
 int rno,i,n,count=0,srch,k;
 float bs;

 fp=fopen("Employee.txt","a");

 while(another=='y')
 {
  printf("\n Enter name , age and basic salary :\n");
  scanf("%s %d %f",&name,&rno,&bs);

  fprintf(fp,"%s %d %f\n",name,rno,bs);

  printf("another employee (y/n)");
  another=getche();
  n=count++;
 }

 fclose(fp);


 // Reading the File

  fp=fopen("employee.txt","r");
  fp=fopen("employee.txt","w");

 printf("\n\t *** File Content ***");

 printf("\n\n Name \t\t Age \t\t B_Sal \n");
 printf("\n-----------------------------------------\n");
 while(fscanf(fp,"%s %d %f",&name,&rno,&bs)!=EOF)
 {
   for(i=0;i<n;i++)
 		{
		 if(srch==rno[i])
 		 { 	
		   for(k=i;k<n-1;k++)
 	      {	
 	      s[k]=s[k+1];
 	      flag=1;								
		    }
		 break;
		}
 {
  
  fprintf(fp,"%s %d %f\n",name,age,bs);

 }
 }
 printf("\n-----------------------------------------\n");

 fclose(fp);

 getch();
}
