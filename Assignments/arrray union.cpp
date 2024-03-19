#include<stdio.h>


main()
{
 int a[20],b[20],k,i,j,l=0,n,s,temp;

 printf("\n\t How many numbers you want? : ");
 scanf("%d",&n);

 printf("\n\t Enter %d Numbers for array 1 : ",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
		
	printf("\n\t Enter %d Numbers for array 2 : ",n);
	 for(i=0;i<n;i++)
	  scanf("%d",&b[i]);
 
      for(i=n;i<n*2;i++) 
      {
      	l++;
      	
      	for(j=l-1;j<=l-1;j++)
      	
      	 a[i]=b[j];
       }
		
		s=n*2;
       
     	     for(i=0;i<s;i++)
		 {
		  for(j=i+1;j<s;j++)
		  {
			   if(a[i]>a[j])
			   {
			    temp=a[i];
			    a[i]=a[j];
			    a[j]=temp;
			   }
		  }
		}
		
		
		 for(i=0;i<s;i++)
   		{
 			for(j=i+1;j<s;j++)
 			{
 			
 			if(a[i] == a[j])
 		   {
 		   	for(k=j;k<s;k++)
 		   	{
 		   	 a[k] = a[k+1];
			}
			s--;
			
			j--;
 		 	
	}
		}
			
		 }
		
	 printf("\n\t union of two array elements : ");  
	 for(i=0;i<s;i++)
 		printf("\n\t %d  ",a[i]);	  
 		

}
