#include<stdio.h>
void max2(int a,int b)
{
		if(a>b)
		{
			printf("%d is max",a);
		}
		if(a<b)
		{
			printf("%d is max",b);
		}
}
void add(int a,int b)
{
		printf("\nadd=%d",a+b);
}
void cube(int a)
{
		printf("\ncube=%d",a*a*a);
}

main()
{
		int a,b;
		
		printf("\n Enter value of a =>");
		scanf("%d",&a);
			
		printf("\n Enter value of b =>");
		scanf("%d",&b);
		
	max2(a,b);
	add(a,b);
	cube(a);
}
