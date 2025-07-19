#include<stdio.h>
main()
{
	int a,b;
	int op;
	
	printf("\nEnter 1 for addition");
	printf("\nEnter 2 for subtraction");
	printf("\nEnter 3 for multiplication");
	printf("\nEnter 4 for division");
	printf("\nEnter op =>");
	scanf("%d",&op);
	
	if(op==1)
	{
		printf("\nEnter value a =>");
		scanf("%d",&a);
		printf("\nEnter value b =>");
		scanf("%d",&b);
		printf("\naddition=%d",a+b);
	}
	else if(op==2)
	{
		printf("\nEnter value of a =>");
		scanf("%d",&a);
		printf("\nEnter value of b =>");
		scanf("%d",&b);
		printf("\nsubtraction=%d",a-b);
	}
	else if(op==3)
	{
		printf("\nEnter value of  a =>");
		scanf("%d",&a);
		printf("\nEnter value of b =>");
		scanf("%d",&b);
		printf("\nmultiplication=%d",a*b);
	}
	else if(op==4)
	{
		printf("\nEnter value of a =>");
		scanf("%d",&a);
		printf("\nEnter value of b =>");
		scanf("%d",&b);
		printf("\ndivision=%d",a/b);
	}
	else
	{
		printf("\nWrong opt");
	}
	
}
