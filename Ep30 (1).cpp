#include<stdio.h>
#include<conio.h>
int facfac(int i){
	int k,ans=1;
	for(k=i;k>0;k--)
	{
		ans*=k;
	}	
	return ans;
}
main(){
	int i,ans;
	printf("last factorial = ");
	scanf("%d",&i);
	ans=facfac(i);
	printf("%d",ans);
	getch();
	return 0;
}
