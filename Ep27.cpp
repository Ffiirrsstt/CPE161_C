#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	float a,b,c;
	printf("A =");
	scanf("%f",&a);
	printf("B =");
	scanf("%f",&b);
	c = sqrt(a*a+b*b);
	printf("%f",c);
	getch();
	return 0;
}
