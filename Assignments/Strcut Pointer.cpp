#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stud
{
	int rno;
	char name[20];
	float per;
};
main()
{
	FILE *fp;
	FILE *fp1;
	int   f=0,i,n,k,count=0,flag=0,srch,c=0;
	char m[20];
struct stud s;
	fp=fopen("student.dat","wb");
    if(fp==NULL)
    {
    	
    	printf("\n file NOT Found");
    	exit(0);
	}
	printf("\n Enter how many student you want");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter roll no,name and per:  ");
		scanf("%d%s%f",&s.rno,&s.name,&s.per);
 
      fwrite(&s,sizeof(s),1,fp);
      count++;
 }
 fclose(fp);

   printf("\n Enter  student name to search");
	scanf("%s",&m);
   
  fp=fopen("student.dat","rb");
  fp1=fopen("new_student.dat","wb");
 
 for(i=0;i<count;i++)
 {
 fread(&s,sizeof(s),1,fp);
 {
if(strcmp(m,s.name)!=0)
 {
     fwrite(&s,sizeof(s),1,fp1);
     c++;
 }
 else
 { 
   f=1;
   printf("record found and deletd");
 }
}
}
if(f==0)
{
	printf("NO found");
}
  
  fclose(fp);
  fclose(fp1);
  remove("student.dat");
  rename("new_student.dat","student.dat");
 
fp1=fopen("student.dat","rb");

for(i=0;i<c;i++)
 {
 
fread(&s,sizeof(s),1,fp1);


 printf("\n rno=%d \t name=%s \t per=%f",s.rno,s.name,s.per);
}
 
 fclose(fp1);
}

