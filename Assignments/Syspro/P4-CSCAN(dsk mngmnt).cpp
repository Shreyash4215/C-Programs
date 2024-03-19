#include<stdio.h>
#include <stdlib.h>

main()
{
	int n,ih,i,j,sum=0,sub=0,temp,minofque=0,maxofque,dir,flg=0;
	
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
	
	printf("\n\tEnter The Total No. Of Track = ");
	scanf("%d",&maxofque);
		
	for(i=0;i<n;i++)
	  for(j=i+1;j<n;j++)
		   if(rq[i]>rq[j])
		   {
	    	   temp=rq[i];
	    	   rq[i]=rq[j];
	   		   rq[j]=temp;
	   		}
	
	printf("\n\tHead Movements: %d->",ih);
	 	
	if(dir==0)
	{
		for(i=n-1;i>=0;i--)
		{
			if(ih>rq[i]	&&  flg==0)				
				printf("%d-> ",rq[i]);
			else if(ih<rq[i]  &&  flg==1)
			{
				printf("-> %d",rq[i]);
				temp=rq[i];	
			}
			if(i==0 && flg==0)
			{
				sub=abs(ih-minofque);
				sum=sum+sub;
				i=n;
				printf("%d-> %d",minofque,maxofque-1);
				flg=1;
			}
		}
		sub=abs((maxofque-1)-temp);
		sum=sum+sub;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(ih<rq[i]	&&  flg==0)				
				printf("%d-> ",rq[i]);
			else if(ih>rq[i]  &&  flg==1)
			{
				printf("-> %d",rq[i]);
				temp=rq[i];		
			}
			if(i+1==n && flg==0)
			{
				sub=abs(ih-(maxofque-1));
				sum=sum+sub;
				i=-1;
				printf("%d-> %d",maxofque-1,minofque);
				flg=1;
			}
		}		
		sub=abs(minofque-temp);
		sum=sum+sub;
	}	
		printf("\n\n\tTotal Head Movement = %d",sum);
}
