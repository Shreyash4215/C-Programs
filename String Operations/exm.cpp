#include<stdio.h>
#include<string.h>
main()
{
	char s1[10],s2[20];
	int ch;
	
	printf("\n enter string you want:");
		scanf("%s",s1);
		
		while(1)
		{
			printf("\n *********menu**********");
			printf("\n 1.length");
			printf("\n 2.copy");
			printf("\n 3.upper");
			printf("\n 4.exit");
			printf("\n Enter option you want");
			scanf("%d",ch);
			
			if(ch==4)
			break;
			
			switch(ch)
			{
				case 1:
					strlen(s1);
					printf("\n ur string:%d",s1);
					break;
				case 2:
					strcpy(s2,s1);
					printf("\n ur string:%s",s2);
					break;
				case 3:
					strupr(s1);
					printf("\n ur string:%s",s1);
					break;
			}
		}
}
