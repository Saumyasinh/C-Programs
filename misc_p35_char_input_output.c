#include<stdio.h>
main()
{
	int b,h,a;
	float r;
	char op;
	
	printf("\nEnter q for area of triangle");
	printf("\nEnter w for area of circle");
	printf("\nEnter e for max ");
	printf("\nEnter op =>");
	scanf("%c",&op);
	
	if(op=='q')
	{
	printf("\nEnter value a =>");
	scanf("%d",&b);
	printf("\nEnter value b =>");
	scanf("%d",&h);
	printf("\narea of triangle=%d",b*h);
	}
	else if(op=='w')
	{
	printf("\nEnter value of r =>");
	scanf("%f",&r);
	printf("\narea of circle=%.2f",r*r*3.14);
	}
	else if(op=='e')
	{
	printf("\nEnter value of  a =>");
	scanf("%d",&a);
	printf("\nEnter value of b =>");
	scanf("%d",&b);

	if(a>b)
	{	
	printf("\n%d is greater",a);
	}
	else if (a<b)
	{ 
	printf("\n%d is smaller",a);
	}
	else
	{
	printf("\n both equal"); 
	}
}
	else
	{
	printf("\n Wrong opt"); 	
	}
}


