#include<stdio.h>
int max2(int a,int b)
{
		if(a>b)
		{
			return a;
		}
		else
		{
			return b;
		}
}
int add(int a,int b)
{
		return a+b;
}
int cube(int a)
{
		return a*a*a;
}

main()
{
		int a,b,c;
		
		printf("\n Enter value of a =>");
		scanf("%d",&a);
			
		printf("\n Enter value of b =>");
		scanf("%d",&b);
		
		c=max2(a,b);
		printf("\nMax = %d",c);
		
		c=add(a,b);
		printf("\nAdd = %d",c);
	
		c=cube(a);
		printf("\nCube = %d",c);
}	
