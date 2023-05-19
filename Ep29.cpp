#include<stdio.h>
#include<conio.h>
main(){
	int i,k,ans=1;
	printf("last factorial = ");
	scanf("%d",&i);
	for(k=i;k>0;k--)
	{
		ans*=k;
	}	
	printf("%d",ans);
	getch();
	return 0;
}
