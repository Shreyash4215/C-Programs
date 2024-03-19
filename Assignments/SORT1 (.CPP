#include<conio.h>
#include<stdio.h>

// Number in Asending Order

main()
{
 int a[10],i,j,n,temp;

 printf("\n\t How many ele you want? : ");
 scanf("%d",&n);
 printf("\n\t Enter %d elements : ",n);

 for(i=0;i<n;i++)
  scanf("%d",&a[i]);

 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
   if(a[i]>a[j])
   {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   }
  }
 }

 printf("\n\n\t Sorted Elements are : ");
 for(i=0;i<n;i++)
  printf("%3d",a[i]);

 getch();
}
