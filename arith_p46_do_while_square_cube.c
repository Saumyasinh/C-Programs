#include<stdio.h>
main()
{
	int a,op;
	do
	{
			printf("\n enter 1 for square");
			printf("\n enter 2 for cube");
			printf("\n enter 3 for exit");
			printf("\n enter op=>");
			scanf("%d",&op);
			
			if(op==1)
			{
				printf("\n enter value=>");
				scanf("%d",&a);
				printf("\n square=%d",a*a);
			}
			else if(op==2)
			{
				printf("\n enter value=>");
				scanf("%d",&a);
				printf("\n cube=%d",a*a*a);
			}
			else if(op==3)
			{
				printf("\nbye");
			}
			else
			{
				printf("\n wrong op");
			}
	}while(op!=3);

}
