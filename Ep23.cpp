#include<stdio.h>
#include<conio.h>
main()
{
	char letter;
	int n;
	for(n=1;n<=10;n++)
	{	
		for (letter='a';letter<='z';letter++)
		{
			printf("%c ",letter);
		}
		printf("\n");
	}
	getch();
	return 0;
}
