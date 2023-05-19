#include<stdio.h>
#include<conio.h>
main(){
	int x,y,ans;
	char op;
	printf("Enter x : ");
	scanf("%d",&x);
	printf("Enter y : ");
	scanf("%d",&y);
	printf("Enter operater : ");
	op=getch();
	printf("%c\n",op);
	if(op=='+')
		ans=x+y;
	else if(op=='-')
		ans=x-y;
	else if(op=='*')
		ans=x*y;
	else if(op=='/')
		ans=x/y;
	else if(op=='%')
		ans=x%y;
	else
		printf("Please Enter + or - or * or / or % \n");
	printf("ans = %d",ans);
	getch();
	return 0;
}
