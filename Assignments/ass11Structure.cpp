#include<stdio.h>
#include<string.h>

struct student
{
	char name[25];
	int sub1,sub2,sub3,roll,avg;
 } s[10];
 
 void get(int n)
 {
 	int i;
 	for(i=0;i<n;i++)
 	{
 		printf("\n Enter the info. for %d student (Roll no,Name,Marks of 3 sub): \n",i+1);
 		scanf("%d %s %d %d %d",&s[i].roll,&s[i].name,&s[i].sub1,&s[i].sub2,&s[i].sub3);
	 }
	 for(i=0;i<n;i++)
	 s[i].avg=((s[i].sub1+s[i].sub2+s[i].sub3)/3);
 }
 
 void disp(int n)
 {
 	int i; 
	printf("\n\t Roll \t Name \t S1 \t S2 \t S3 \t Avg");
	printf("\n\t--------------------------------------------------- ");
	
	for(i=0;i<n;i++)
	printf("\n\t %d \t %s \t %d \t %d \t %d \t %d",s[i].roll,s[i].name,s[i].sub1,s[i].sub2,s[i].sub3,s[i].avg);

	printf("\n\t--------------------------------------------------- ");
 }
 void sortbyavg(int n)
 {
 	int i,j; 
 	
 	struct student temp;
 	{
 		for(i=0;i<n;i++)
 		{
 			for(j=0;j<n;j++)
 			{
 				if(s[i].avg > s[j].avg)
 				{
				temp=s[i];
 				s[i]=s[j];
 				s[j]=temp;
			 }
		}
	}
	printf("\n\t Roll \t Name \t S1 \t S2 \t S3 \t Avg");
	printf("\n\t--------------------------------------------------- ");
	
	for(i=0;i<n;i++)
	printf("\n\t %d \t %s \t %d \t %d \t %d \t %d",s[i].roll,s[i].name,s[i].sub1,s[i].sub2,s[i].sub3,s[i].avg);

	printf("\n\t--------------------------------------------------- ");
 }
}
void sbyn(int n)
{
	
    int i,flag=0;
	char srch[50];
	 
	printf("\n Enter student name you want search: ");
 	scanf("%s",&srch);
	
  	{
 	   for(i=0;i<n;i++)
 		{
		 if(strcmp(srch,s[i].name)==0)
 		 { 		 
		  flag=1;
 		 	
				printf("\n\t Roll \t Name \t S1 \t S2 \t S3 \t Avg");
				printf("\n\t--------------------------------------------------- ");
				
				
				printf("\n\t %d \t %s \t %d \t %d \t %d \t %d",s[i].roll,s[i].name,s[i].sub1,s[i].sub2,s[i].sub3,s[i].avg);
			
				printf("\n\t--------------------------------------------------- ");	
			
			break;		
		    }
			 
		}
		if(flag==0)
		printf("\n\t Student NOT Found");
	}
}
void sbyr(int n)
{
	
    int i,flag=0,srch;
		 
	printf("\n Enter student Roll No you want search: ");
 	scanf("%d",&srch);
	
  	{
 	   for(i=0;i<n;i++)
 		{
		 if(srch==s[i].roll)
 		 { 		 
		  flag=1;
 		 	
				printf("\n\t Roll \t Name \t S1 \t S2 \t S3 \t Avg");
				printf("\n\t--------------------------------------------------- ");
				
				
				printf("\n\t %d \t %s \t %d \t %d \t %d \t %d",s[i].roll,s[i].name,s[i].sub1,s[i].sub2,s[i].sub3,s[i].avg);
			
				printf("\n\t--------------------------------------------------- ");	
			
			break;		
		    }
			 
		}
		if(flag==0)
		printf("\n\t Student NOT Found");
	}
}
 
   main()
 {
 	int i,n,ch;
 	printf("\n Enter the how many student you want?: ");
 	scanf("%d",&n);
 	
 	get(n);
  
  while(1)
  	{
  printf("\n\n\t ********* Menu *************");
  printf("\n\t 1. Display Roll No.");
  printf("\n\t 2. Sort By Avg");
  printf("\n\t 3. Search By Name");
  printf("\n\t 4. Search By Roll No.");
  
  printf("\n\t 6. Exit");
  
  printf("\n\n\t Enter your Choice : ");
  scanf("%d",&ch);
    if(ch==6)
   break;

  switch(ch)
  {
	case 1:
			disp(n);
			break;
	case 2:
			sortbyavg(n);
			break;
	case 3:
			sbyn(n);
			break;
	case 4:
			sbyr(n);
			break;
		
	default:
			printf("\n\t This is NOT a valid Choice");
  }
 	
}
}
