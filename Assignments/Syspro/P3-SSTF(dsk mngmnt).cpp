#include<stdio.h>
#include <stdlib.h>

main()
{
	int n,ih,i,j,sum=0,sub=0,temp=1000,temp2;
	
	printf("\n\tEnter The Size Of Request Que=");
	scanf("%d",&n);
	
	int rq[n];
	
	printf("\n\tEnter Request Que=");
	for(i=0;i<n;i++)	
		scanf("%d",&rq[i]);
	
	printf("\n\tEnter The Initial Head Position=");
	scanf("%d",&ih);
	
	printf("\n\tHead Movements = ");
	
	for(i=0;i<n;i++)
	{
		printf("%d -> ",ih);
	
		for(j=i;j<n;j++)
		{
			sub=abs(ih-rq[j]);		
		
			if(temp>sub)
			{
				temp=sub;
				temp2=rq[i];
				rq[i]=rq[j];
				rq[j]=temp2;
			}
		}
		sub=abs(ih-rq[i]);
				
		sum=sum+sub;
		
		ih=rq[i];	
		
		temp=1000;
	}
	printf("%d\n\n\tTotal Head Movement = %d",ih,sum);
}
