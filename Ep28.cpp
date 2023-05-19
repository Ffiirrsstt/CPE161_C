#include<stdio.h>
#include<conio.h>
main(){
	int i,k,ans=1;
	printf("last factorial = ");
	scanf("%d",&i);
	while(i>=1){
		ans*=i;
		i--;
	}	
	printf("%d",ans);
	getch();
	return 0;
}
