#include<stdio.h>
main()
{
	int a;
	char op;
	do
	{
		 printf("\n enter s for square");
		 printf("\n enter c for cube");
		 printf("\n enter x for exit");
		 printf("\n enter op =>");
		 scanf("%d",&op);
		
		 if(op=='s')
		 {
		     printf("\n enter value=>");
		     scanf("%d",&a);
		     printf("\n square =%d",a*a);
		 }
		 else if(op=='c')
		 {
		 	 printf("\n enter value=>");
		 	 scanf("%d",&a);
		 	 printf("\n cube =%d",a*a*a);
         }
	}
}
