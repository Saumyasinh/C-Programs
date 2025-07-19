#include<stdio.h>
void add(int a,int b)
{
		printf("\nadd=%d",a+b);
}
void sub(int a,int b)
{
	printf("\nsub=%d",a-b);
}
void mul(int a,int b)
{
		printf("\nmul=%d",a*b);
}
void div(int a,int b)
{
		printf("\ndiv=%d",a/b);
}

main()
{
		int a,b;
		
		printf("\n Enter value of a =>");
		scanf("%d",&a);
			
		printf("\n Enter value of b =>");
		scanf("%d",&b);
		
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}		
