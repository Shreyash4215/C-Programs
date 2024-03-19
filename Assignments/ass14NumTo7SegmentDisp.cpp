#include<stdio.h>

main()
{
	int n;
      
	while(1)
    {

	printf("\n\n Enter Number You Want: ");	
	scanf("%d",&n);
		
		if(n>9)
		break;
		
	else if(n==0)
	{
		printf("\n -\n| |\n| |\n -");
		}	
	else if(n==1)
	{
			printf("\n |\n |");
				}	
	else if(n==2)
	{
			printf("\n -\n  |\n -\n|\n -");
				}
	else if(n==3)
	{
			printf("\n _\n _|\n _|"); 
				}			
	else if(n==4)
	{
			printf("\n |_|\n   |");
				}				
	else if(n==5)
	{
			printf("\n _\n|_\n _|");
				}		
	else if(n==6)
	{
			printf("\n _\n _|\n|_|");
				}				
	else if(n==7)
	{
			printf("\n _\n  |\n  |");
				}			
	if(n==8)
	{
		printf("\n _\n|_|\n|_|");
		}
	if(n==9)
	{
		printf("\n _\n|_|\n _|");
		}					
	}
}

