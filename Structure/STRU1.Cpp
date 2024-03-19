#include<stdio.h>

 struct date
 {
	int day, month,year;
 };

main()
{
 struct date today;     // structure variable/object
    
     printf("\n Enter Data ");
     
	scanf("%d %d %d",&today.day,&today.month,&today.year);
			 
 printf("\n The date is %d-%d-%d",today.day,today.month,today.year);
 
}

