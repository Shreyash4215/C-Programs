#include<stdio.h>
main()
{
   int ch,a,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0;
   
        while(1)
	{
	printf("\n*********WELCOME TO TOLL PLAZA*******");
	printf("\n\t 1.Local vehicle");
	printf("\n\t 2.Outside vehicle");
	printf("\n\t 3.Exit");
	printf("\n**************************************");
	printf("\n Enter the option: ");
	scanf("%d",&ch);
      
       if(ch>3)
       break;
       
       switch(ch)
	{ 
	  case 1:
	  	 a=a+1;
		 printf("\n No charge for local vehicle ");
		 break;
					 
	 case 2:
    	  printf("\n\t 1. Bike   --- 10.00 Rs/-");
		  printf("\n\t 2. Car    --- 20.00 Rs/-");
		  printf("\n\t 3. Bus    --- 25.00 Rs/-");
          printf("\n\t 4. Truck  --- 35.00 Rs/-");        
          
		  printf("\n Enter Your Choice : ");
		  scanf("%d",&c);
		  

	     switch(c)
	       {
		     case 1:
		            b=b+10;
		            f=f+1;
					printf("\n Vehicle type :- Bike");
					printf("\n Please pay 10 Rs/-");		                              
		            break;

		     case 2:
		            c=c+20;
		            g=g+1;
					printf("\n Vehicle type :- Car");
					printf("\n Please pay 20 Rs/-");                   
		            break;

	       
		     case 3:
		            d=d+25;
		            h=h+1;
					printf("\n Vehicle type :- Bus");
					printf("\n Please pay 25 Rs/-");                           
		            break;
                     
             case 4:
		            e=e+35;
		            i=i+1;
					printf("\n Vehicle type :- Truck");
					printf("\n Please pay 35 Rs/-");				                       
		            break;        
                    }
		       break;
                                               
	 case 3:
	 	  printf("\n********* Total Collection *******");
	   	  printf("\n Total Amount = %d",b+c+d+e);
	   	  printf("\n\n********* Total Vehicles *******");
		  printf("\n Total Traffic = %d",a+f+g+h+i);
		  printf("\n Total Local Vehicles = %d",a);
		  printf("\n Total Outside Vehicles = %d",f+g+h+i);
		  printf("\n Total Bikes = %d",f);
		  printf("\n Total Cars = %d",g);
		  printf("\n Total Buses = %d",h);
		  printf("\n Total Trucks = %d",i);
		  
		  break;
     }
}
}



 		       

