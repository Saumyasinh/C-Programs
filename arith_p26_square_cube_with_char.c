#include<stdio.h>
main()
{
	int a;
	char op;
	
	printf("\n enter s for square");
	printf("\n enter c for cube");
	printf("\n enter op=>");
	scanf("%c",&op);
	
	switch (op)
	{
		case 's':
			printf("\n enter value=>");
			scanf("%d",&a);
			printf("\n square =%d",a*a);
			break;
			
		case 'c':
		   printf("\n enter value=>");
		   scanf("%d",&a);
		   printf("\n cube =%d",a*a*a);
		   break;
		   
		default:
		   printf("\n wrong op");
		   	
	}
}   
