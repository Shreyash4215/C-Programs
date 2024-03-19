#include<stdio.h>


main()
{
 int a[20],cnt=0,i,j,n,flag=0;

 printf("\n\t How many numbers you want? : ");
 scanf("%d",&n);

 printf("\n\t Enter %d Numbers for array : ",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);

      for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
          
		  if(a[i]==a[j])
		   {
		   	cnt++;
		   }
		    
			for(j=0;j<i;j++)
		   
		   if(a[i]==a[j])
			{
				flag=1;
			}
			
		if(flag==0)
		{
			printf("\n\t %d element  count is %d",a[i],cnt);
			}	
		
		cnt=0;
		flag=0;	
			
		}
}
