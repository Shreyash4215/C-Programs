#include<stdio.h>
#include <stdlib.h>

main()
{
	int n,ih,i,j,sum=0,sub,temp,minofque=0,maxofque,dir,flg=0;
	
	printf("\n\tEnter The Size Of Request Que=");
	scanf("%d",&n);
	
	int rq[n];
	
	printf("\n\tEnter Request Que=");
	for(i=0;i<n;i++)	
		scanf("%d",&rq[i]);
	
	printf("\n\tEnter The Initial Head Position=");
	scanf("%d",&ih);
	
	printf("\n\tEnter The Direction(For Left Enter 0 For Right Enter 1)= ");
	scanf("%d",&dir);
	
	if(dir==1)
	{
		printf("\n\tEnter The Total No. Of Track = ");
		scanf("%d",&maxofque);
	}
	
	for(i=0;i<n;i++)
	  for(j=i+1;j<n;j++)
		   if(rq[i]>rq[j])
		   {
	    	   temp=rq[i];
	    	   rq[i]=rq[j];
	   		   rq[j]=temp;
	   		}
	
	printf("\n\tHead Movements: %d->",ih);
	
	if(dir==0 )
	{
		for(i=0;i<n;i++)
		{
			if(ih<rq[i])
				printf("->%d",rq[i]);
			
			if(flg==0)
			{
				for(i=n-1;i>=0;i--)
					if(ih>rq[i])
						printf("%d->",rq[i]);
				printf("%d",minofque);		
			}
			flg=1;
		}
		sub=abs(ih-minofque);
		sum=sum+sub;
		sub=abs(minofque-rq[i-1]);
		sum=sum+sub;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(ih<rq[i])
				printf("%d->",rq[i]);
			
			if(i+1==n)
			{
				printf("%d",maxofque-1);		
				for(j=n-1;j>=0;j--)
					if(ih>rq[j])
						printf("->%d",rq[j]);
			}
		}
		sub=abs(ih-(maxofque-1));
		sum=sum+sub;
		sub=abs((maxofque-1)-rq[j+1]);
		sum=sum+sub;
	}
	
	printf("\n\n\tTotal Head Movement = %d",sum);
}
