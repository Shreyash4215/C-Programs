#include<stdio.h>
#include<conio.h>

 main()
{
 char n;

  printf("\n\t Enter the Character : ");
  scanf("%c",&n);

  switch(n)
  {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
			printf("\n\t %c is a VOWEL",n);
			break;
	default:
			printf("\n\t %c is a NOT VOWEL",n);
  }
 getch();
}
