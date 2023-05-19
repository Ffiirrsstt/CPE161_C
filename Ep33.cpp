#include<stdio.h>
#include<conio.h>
main(){
	int k,ans=0;
	for(k=1;k<=10;k++)
	{
		ans+=k;
		printf("%d",k);
		if((k>=1)and(k<=9))
		printf("+");
	}	
	printf("=%d",ans);
	getch();
	return 0;
}
