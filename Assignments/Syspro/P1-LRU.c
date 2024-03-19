#include<stdio.h>
main()
{
	int i,j,k,s,string[30],frm[7],flg=0,cnt=0,n1,n2,flg2=0,pos[7];
	
	printf("Enter The Size Of Reference String: ");
	scanf("%d",&n1);
	
	printf("Enter The Reference String:");
	for(i=0;i<n1;i++)
		scanf("%d",&string[i]);
	
	printf("How Many Frames Do You Want: ");
	scanf("%d",&n2);
						
	printf("\n");	
		
	printf("Ref.\nString");
		
	for(i=0;i<n2;i++)
		 printf("\t F%d",i+1);
	
	printf("\tPage Faults ");
	
	for(i=0;i<n2;i++)
	{
		pos[i]=-1;
		frm[i]=-2;	
	}
	for(i=0;i<n1;i++)
	{		
		printf("\n\n ");
	
		printf("%d",string[i]);
	
		for(k=0;k<n2;k++)
			if(frm[k]==string[i])
			{
				cnt++;	
				flg=1;
				break;
			}	
			
		if(flg==0)
			for(k=0;k<n2;k++)
				if(frm[k]==pos[0] ||frm[k]==-2)
				{
					frm[k]=string[i];
					break;
				}
		
			for(s=0;s<n2;s++)
				if(pos[s]==string[i])
				{
					for(k=s;k<n2-1;k++)
						pos[k]=pos[k+1];	
					
					pos[k]=string[i];
					flg2=1;
					break;
				}
							
				if(flg2==0)
				{
					for(k=0;k<n2-1;k++)
						pos[k]=pos[k+1];	
		
					pos[k]=string[i];
				}

		for(j=0;j<n2;j++)
			if(frm[j]!=-2)
				printf("\t %d",frm[j]);
			else
				printf("\t");
		
		if(flg==0)
			printf("\t 1");
		else
			printf("\t 0");		
				
		flg=0;	
		flg2=0;
}
		printf("\n\n\n\t Total No Of Page Faults Is : %d \n",n1-cnt);
	
		printf("\n\n\t Note: \n\t 0 = Page Fault Not Occured \n\t 1 = Page Fault Occured\n");
}
