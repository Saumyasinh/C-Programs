#include<stdio.h>
main()
{
	int a,b;
	char op;
	
	printf("\nEnter a for addition");
	printf("\nEnter b for subtraction");
	printf("\nEnter c for multiplication");
	printf("\nEnter d for division");
	printf("\nEnter op =>");
	scanf("%c",&op);
	
	if(op=='a')
	{
	printf("\nEnter value a =>");
	scanf("%d",&a);
	printf("\nEnter value b =>");
	scanf("%d",&b);
	printf("\naddition=%d",a+b);
	}
	else if(op=='b')
	{
	printf("\nEnter value of a =>");
	scanf("%d",&a);
	printf("\nEnter value of b =>");
	scanf("%d",&b);
	printf("\nsubtraction=%d",a-b);
	}
	else if(op=='c')
	{
	printf("\nEnter value of  a =>");
	scanf("%d",&a);
	printf("\nEnter value of b =>");
	scanf("%d",&b);
	printf("\nmultiplication=%d",a*b);
	}
	else if(op=='d')
	{
	printf("\nEnter value of a =>");
	scanf("%d",&a)
	printf("\nEnter value of b =>");		
	scanf("%d",&b);
	printf("\ndivision=%d",a/b);
	}
	else
	{
	printf("\nWrong opt");
	}
	
}
