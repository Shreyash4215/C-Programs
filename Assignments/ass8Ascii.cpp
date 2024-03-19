#include<stdio.h>
#include<string.h>
main()
{
    char str1[20],i;
    printf("Enter any string: ");
    gets(str1);
    
    for(i=0;i<strlen(str1);i++)                  
    {
    	if(str1[i]>=65 && str1[i]<=90)
    	str1[i]=str1[i]+32;   
       else
    	str1[i]=str1[i]-32;
	}				
    	printf("\n new string: %s",str1);    	
    	
}
