#include<stdio.h>
#include<conio.h>

main()
{
 int min,i,n,num[20];

 printf("\n Enter how many elements : ");
 scanf("%d",&n);

 printf("\n\t Enter %d Numbers = ",n);
 min=num[0];
 for(i=0;i<n;i++)
 {
  scanf("%d",&num[i]);
  min = min<num[i]? min : num[i];
 }

 printf("\n minimum number is %d",min);
 getch();
	}
