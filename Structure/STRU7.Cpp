#include<stdio.h>
#include<conio.h>

main()
{
 struct virus
 {
	char signature[25];
	char status[20];
	int size;
 };
 struct virus v[2]={"Trojan","Active",1831,"dark avenger","killer",1795};
 int i;

 for(i=0;i<2;i++)
  printf("\n %s  %s  %d",v[i].signature,v[i].status,v[i].size);

 getch();
}
