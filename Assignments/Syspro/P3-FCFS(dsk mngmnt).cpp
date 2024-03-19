#include<stdio.h>
#include <stdlib.h>

main()
{
	int n,ih,i,sum=0,sub=0;
	
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
			
		sub=abs(ih-rq[i]);			
		sum=sum+sub;
		ih=rq[i];
	}
	printf("%d\n\n\tTotal Head Movement = %d",ih,sum);
}
