#include<stdio.h>
main()
{
	int b,h,a;
	float r;
	int op;
	
	printf("\nEnter 1 for area of triangle");
	printf("\nEnter 2 for area of circle");
	printf("\nEnter 3 for max ");
	printf("\nEnter op =>");
	scanf("%d",&op);
	
	if(op==1)
	{
		printf("\nEnter value a =>");
		scanf("%d",&b);
		printf("\nEnter value b =>");
		scanf("%d",&h);
		printf("\narea of triangle=%d",b*h);
	}
	else if(op==2)
	{
		printf("\nEnter value of r =>");
		scanf("%f",&r);
		printf("\narea of circlr=%.2f",r*r*3.14);
	}
	else if(op==3)
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


