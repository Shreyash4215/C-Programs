#include<stdio.h>

main()
{
 int a[20],i,j,n,temp,cnt=0,flag=0;

 printf("\n\t How many numbers you want? : ");
 scanf("%d",&n);

 printf("\n\t Enter %d Numbers : ",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);

 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   if(a[i] == a[j])
    cnt++;

  for(j=0;j<i;j++)
   if(a[i]==a[j])
   flag=1;

  if(flag==0)
   printf("\n\t %d is Found at %d times",a[i],cnt);

  flag=0;
  cnt=0;
 }
}
