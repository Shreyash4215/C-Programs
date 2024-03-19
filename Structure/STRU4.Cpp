#include<stdio.h>
#include<conio.h>
main()
{
 struct product
 {
	char name[9];
	float price;
	int qty,no,tamt;
 };
 struct product p1,p2;

 printf("\n Enter number,name,price and qty for First Product : \n");
 scanf("%d %s %f %d",&p1.no,&p1.name,&p1.price,&p1.qty);

 printf("\n Enter number,name,price and qty for Second Product : \n");
 scanf("%d %s %f %d",&p2.no,&p2.name,&p2.price,&p2.qty);

 p1.tamt=p1.qty*p1.price;
 p2.tamt=p2.qty*p2.price;

 printf("\n Total Amount of %s = %d",p1.name,p1.tamt);
 printf("\n Total Amount of %s = %d",p2.name,p2.tamt);
 getch();
}
