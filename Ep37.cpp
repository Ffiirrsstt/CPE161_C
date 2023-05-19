#include<stdio.h>
#include<conio.h>
main()
{
	float num[10],max=-999;
	int i=0;
	while(i<10)
	{
		printf("Enter number : ");
		scanf("%f",&num[i]);
		if(num[i]>max)
			max=num[i];
		i++;
	}
	printf("\n\n******Result*****\n\n");
	printf("Result = %f\n",max);
	getch();
	return 0;
}
