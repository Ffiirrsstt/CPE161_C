#include<stdio.h>
#include<conio.h>
main()
{
	int n=1,l;
	for (l=1;l<=10;l++)
	{
		if(l==6)
			continue;
		printf("%d",l);
	}
	getch();
	return 0;
}
