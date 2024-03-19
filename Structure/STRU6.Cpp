#include<stdio.h>
#include<conio.h>

main()
{
 struct address
 {
	char phone[15];
	char city [25];
	int pin;
 };

 struct emp
 {
	char name[25];
	struct address a;
 };

 struct emp e={"shri","53106","baramati",13110};

 printf("\n Name = %s \n Phone = %s",e.name,e.a.phone);
 printf("\n City = %s \n Pin = %d",e.a.city,e.a.pin);
 getch();
}
