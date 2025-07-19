#include<stdio.h>
main()
{
	int a;
	int op;
	
	printf("\nEnter 1 for square");
	printf("\nEnter 2 for cube");
	printf("\nEnter op =>");
	scanf("%d",&op);
	
	if(op==1)
	{
		printf("\nEnter value =>");
		scanf("%d",&a);
		printf("\nsquare=%d",a*a);
	}
	else if(op==2)
	{
		printf("\nEnter value =>");
		scanf("%d",&a);
		printf("\ncube=%d",a*a*a);
	}
	else
	{
		printf("\nWrong opt");
	}
	
}
