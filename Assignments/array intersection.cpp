#include<stdio.h>

main()
{
 int a[20],b[20],k,i,j,l=0,n,s[20],temp;

 printf("\n\t How many numbers you want? : ");
 scanf("%d",&n);

 printf("\n\t Enter %d Numbers for array 1 : ",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
		
	printf("\n\t Enter %d Numbers for array 2 : ",n);
	 for(i=0;i<n;i++)
	  scanf("%d",&b[i]);
 
     
		
		 for(i=0;i<n;i++)
 		{
 			for(j=0;j<n;j++)
 			{
 			
	 			if(a[i] == b[j])
	 		   {
	 		   	l++;
	 		   	for(k=l-1;k<l;k++)
	 		   	{
	 		   	 s[k] = b[j];
 		   	  
				}
				}
			}
			
		 }
		
		
         for(i=0;i<l;i++)
		 {
			  for(j=i+1;j<l;j++)
				  {
			   		if(s[i]>s[j])
			   		{
				    temp=s[i];
				    s[i]=s[j];
				    s[j]=temp;
				    }
		  		   }
		}
		
	 printf("\n\t intersection of two array elements : ");  
	 for(i=0;i<l;i++)
 		printf("\n\t %d  ",s[i]);	  
 		
  
}
