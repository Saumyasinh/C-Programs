#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter no1 and no2 =>");
	scanf("%d%d",&a,&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\n %d",a);
	printf("\n %d",b);
}
