#include<stdio.h>
#include<string.h>
main()
{
    char str1[50],i,str2[50]={'a','e','i','o','u','A','E','I','O','U'},j;
    printf("Enter any string: ");
    gets(str1);
    
    for(i=0;i<=strlen(str1);i++)
    {
    	for(j=0;j<=9;j++)
        if(str1[i]==str2[j])
        {
            str1[i] = '*';
        }
    }
    printf("\nNew String = %s",str1);      
}
