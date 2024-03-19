#include<stdio.h>
#include<conio.h>

// Switch Case

main()
{
 int n;

  printf("\n\t Enter the number : ");
  scanf("%d",&n);

  switch(n)
  {
	case 1:
			printf("\n\t ONE");
			break;
	case 2:
			printf("\n\t TWO");
			break;
	case 3:
			printf("\n\n\t THREE");
			break;
	case 4:
			printf("\n\n\t FOUR");
			break;
	case 5:
			printf("\n\n\t FIVE");
			break;
	default:
			printf("\n\n\t GREATHER TAHN FIVE");
  }
 getch();
}
