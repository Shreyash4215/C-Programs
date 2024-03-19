#include<stdio.h>
main()
{
	int i,j,k,string[30],frm[7],flg=0,cnt=0,n1,n2,flg2=0,t=0;
	
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
		frm[i]=-1;
		
	for(i=0;i<n1;i++)
	{		
		printf("\n\n ");
	
		printf("%d",string[i]);
			
		for(k=0;k<n2;k++)
			if(frm[k]==string[i])
			{		
				cnt++;	
				flg2=1;
				t=k;
				break;
			}	
	
		frm[t]=string[i];
	
		if(t==n2-1)
			flg=1;
					
		if(t<n2-1 && flg==0)
			t++;
			
		for(j=0;j<n2;j++)
			if(frm[j]!=-1)
				printf("\t %d",frm[j]);
			else
				printf("\t");
								
		if(flg2==0)
			printf("\t 1");
		else
			printf("\t 0");		
				
		flg2=0;
}
		printf("\n\n\n\t Total No Of Page Faults Is : %d \n",n1-cnt);
	
		printf("\n\n\t Note: \n\t 0 = Page Fault Not Occured \n\t 1 = Page Fault Occured\n");
}
