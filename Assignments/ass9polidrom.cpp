#include<stdio.h>
#include<string.h>
main()
{
    char str1[50];
    int i,m,n,l=0;
    
    printf("Enter any string: ");
    gets(str1);
    
    while(str1[l]!=NULL)
    l++;
	    
	    printf("size: %d",l);
	    
    n=l-1;   
    m=l/2;   
	    
    for(i=0;i<n;i++)
    {    	    	
        if(str1[i]!=str1[n])
        {
            printf("\n\n\t Entered string is Non Polindrom");
			break;
		}
		n--;
	}
		if(i==m)
        printf("\n\n\t Entered string is Polindrom");        
        
    }

	
 
