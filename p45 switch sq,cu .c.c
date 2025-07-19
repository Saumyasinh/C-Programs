#include<stdio.h>
main()
{
	int a,op;
	
	printf("\n enter 1 for square");
	printf("\n enter 2 for cube");
	printf("\n enter op=>");
	scanf("%d",&op);
	
	switch (op)
	{
		case 1:
			printf("\n enter value=>");
			scanf("%d",&a);
			printf("\n square =%d",a*a);
			break;
			
		case 2:
		   printf("\n enter value=>");
		   scanf("%d",&a);
		   printf("\n cube =%d",a*a*a);
		   break;
		   
		default:
		   printf("\n wrong op");
		   	
	}
}   
