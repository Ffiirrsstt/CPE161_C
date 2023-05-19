#include<stdio.h>
#include<conio.h>
int	power(int a,int b){
	int k,ans=1;
	for(k=1;k<=b;k++)
	{
		ans*=a;
	}	
	return ans;
	}
main(){
	int a,b,ans;
	printf("numer = ");
	scanf("%d",&a);
	printf("Power = ");
	scanf("%d",&b);
	ans=power(a,b);
	printf("%d",ans);
	getch();
	return 0;
}
