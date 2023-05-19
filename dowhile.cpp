#include<stdio.h>
#include<conio.h>
main(){
	int start=100;
	do
	{
		printf("%d\t",start);
		start=100+start;
	}
	while (start<=1000);
	getch();
	return 0;
}
