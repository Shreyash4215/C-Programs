#include<stdio.h>
#include<conio.h>

main()
{
 struct book
 {
	char name[8];
	float price;
	int pages ;
 };
 struct book b1,b2,b3;

printf("\n Enter name, price, no. of pages of for 3 books\n");
scanf("%s %f %d",&b1.name,&b1.price,&b1.pages);
scanf("%s %f %d",&b2.name,&b2.price,&b2.pages);
scanf("%s %f %d",&b3.name,&b3.price,&b3.pages);

printf("\n\n Entered Info. is : ");

printf("\nFirst Book having Name : %s, Price : %.2f and Pages : %d",b1.name,b1.price,b1.pages);
printf("\nSecond Book having Name : %s, Price : %.2f and Pages : %d",b2.name,b2.price,b2.pages);
printf("\nThird Book having Name : %s, Price : %.2f and Pages : %d",b3.name,b3.price,b3.pages);
getch();
}


