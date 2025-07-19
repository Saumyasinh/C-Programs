#include<stdio.h>
int add(int a,int b,int c,int d,int e)
{
	return a+b+c+d+e;
}
main()
{
		int a,b,c,d,e;
		
		printf("\n Enter value of a =>");
		scanf("%d",&a);
		
		printf("\n Enter value of b =>");
		scanf("%d",&b);
		
		printf("\n Enter value of c =>");
		scanf("%d",&c);
		
		printf("\n Enter value of d =>");
		scanf("%d",&d);
		
		printf("\n Enter value of e =>");
		scanf("%d",&e);
		
		c=add(a,b,c,d,e);
		printf("\n add =%d",c);
}
