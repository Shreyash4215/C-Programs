#include<stdio.h>

main()
{
 FILE *fp;
 char name[40],ch;
 int rollno,i,n,roll,r;
 float per;

 fp=fopen("student.txt","a");
  
  printf("\n Enter how many students info you want to store: ");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
 {
  printf("\n Enter Roll number , name and percentage :\n");
  scanf("%d %s %f",&rollno,&name,&per);

  fprintf(fp,"%d %s %f\n",rollno,name,per);

  }
 fclose(fp);

 // Reading the File

  fp=fopen("student.txt","r");
 
 ch=fgetc(fp);
  
 printf("\n Enter roll no you want search: ");
 scanf("%d",&roll);

 if(ch==roll) 
 {
 printf("\n\n Roll no \t\t Name \t\t Percentage \n");
 printf("\n-----------------------------------------\n");
 printf("\n %d \t\t %s \t\t %.2f",rollno,name,per);
 printf("\n-----------------------------------------\n");
 }
else
{
 printf("\n Student Not Found");
}

 fclose(fp);

}

