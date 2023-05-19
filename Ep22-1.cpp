#include<stdio.h>
#include<conio.h>
main()
{
	int n=1,l;
	for (l=1;l<=100;l++)
	{
		if((l==9)||(l==19)||(l==29)||(l==97))
			continue;
		printf("%d ",l);
	}
	getch();
	return 0;
}
