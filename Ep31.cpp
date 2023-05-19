#include<stdio.h>
#include<conio.h>
main(){
	int a,b,k,ans=1;
	printf("numer = ");
	scanf("%d",&a);
	printf("Power = ");
	scanf("%d",&b);
	for(k=1;k<=b;k++)
	{
		ans*=a;
	}	
	printf("%d",ans);
	getch();
	return 0;
}
