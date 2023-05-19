#include<stdio.h>
#include<conio.h>
main()
{
	char c[4]={'A',66,'\0','a'};
	int j[4]={1,200,300,-1};
	char s[]={"ABCAafassasa"};
	int i=1;
	printf("Array Value\n\n");
	printf("c[%d]=%c or %d \t j[%d]=%d \t s[%d]=%c or %d\n"
	,i,c[i],c[i],i,j[i],i,s[i],s[i]);
	getch();
	return 0;
}
