#include<stdio.h>
void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
main()
{
	int a,b,c;
	
	printf("\n enter a =>");
	scanf("%d",&a);

	printf("\n enter b =>");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	printf("\na = %d b = %d",a,b);
}
