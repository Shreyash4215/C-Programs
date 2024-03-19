#include<stdio.h>

main()
{
 int a,b,ch;

  printf("\n\t Enter two numbers : ");
  scanf("%d %d",&a,&b);

  while(1)
  {
      printf("\n\n\t *** Menu ***");
      printf("\n\t 1. Addition");
      printf("\n\t 2. Subtraction");
      printf("\n\t 3. Multiplication");
      printf("\n\t 4. Division");
      printf("\n\t 5. Exit");
      printf("\n\n\t Enter your Choice : ");
      scanf("%d",&ch);
      
      if(ch==5)
        break;
    
      switch(ch)
      {
    	case 1:
    			printf("\n\t Addition is %d",a+b);
    			break;
    	case 2:
    			printf("\n\t Subtraction is %d",a-b);
    			break;
    	case 3:
    			printf("\n\t Multiplication is %d",a*b);
    			break;
    	case 4:
    			printf("\n\t Division is %d",a/b);
    			break;
    	default:
    			printf("\n\t This is NOT a valid Choice");
      }
    }
    

}
