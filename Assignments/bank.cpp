#include<stdio.h>
main()
{
   int ch,amt=0,n,blc;
        while(1)
	{
	printf("\n\n*********WELCOME TO BANK*******");
	printf("\n\t 1.credit");
	printf("\n\t 2.withdrawl");
	printf("\n\t 3.Exit");
	printf("\n**************************************");
	printf("\n Enter your choice: ");
	scanf("%d",&ch);
      
       if(ch==3)
       break;
       
	switch(ch)
	{ 
	  case 1:
		 printf("\n Enter the total Amount to Insert:");
                 scanf("%d",&n);
                 
                 amt=amt+n;
                 
                 blc=amt;
                 printf("\n Remaining balance is: %d",amt);
                 break;

	  case 2:
		 printf("\n Enter the total Amount to Withdrawl: ");
                 scanf("%d",&n);
                 
                 blc=amt-n;
                 
                 if(blc<500)
                 printf("\n Insufficient balance");                                      
                 else				                  
                 printf("\n Remaining balance is:%d",amt=amt-n);
		 break;
}
}
}

