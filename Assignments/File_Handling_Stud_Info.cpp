   printf("\n Enter  student rno to search");
	scanf("%d",&srch);
   
  fp=fopen("student.dat","rb");
  fp1=fopen("new_student.dat","wb");
 
 for(i=0;i<count;i++)
 {
 fread(&s,sizeof(s),1,fp);
 {
 if(srch!=s.rno)
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

