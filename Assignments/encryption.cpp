#include<stdio.h>
#include <string.h>

main()
{
 int m,j,n,k,d,a,l;
 char str1[20],i;
  
 printf("\n Enter the message : ");
 gets(str1);
 
 printf("\n Enter the number : ");
 scanf("%d",&n);
 
 	j=n;
 	  
for(i=0;i<strlen(str1);i++)                  
    {
    	if(str1[i] == 32 )
		{		
		  l=str1[i];
		}
		
		if((str1[i]+j) >= 123 )
		{
			j=str1[i]+j;
		            
		  for(d=j;d>=122;d--)
		  {
	         j=j-26;
	         
		  	if(j<=122)
		     {
		     	break;
		      }  	
		  }	
			  if(l == 32 )
				{		
				  j=l;
				}
		  
    		str1[i]=j;
        }
			
		else
		{
			if(l == 32 )
				{		
				  str1[i]=l;
				  j=0;
				}
				
			str1[i]=str1[i]+j;
		}
    	
    	j=n;
    	l=0;
	} 
 
  printf("\t\n the msg is: %s",str1); 
}
