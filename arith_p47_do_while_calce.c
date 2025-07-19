#include<stdio.h>
main()
{
	int a,b;
	char op;
    do
	{
	     printf("\nEnter i for addition");
	     printf("\nEnter s for subtraction");
	     printf("\nEnter m for multiplication");
	     printf("\nEnter d for division");
	     printf("\nEnter z for exit");
	     printf("\nEnter op =>");
	     scanf("%c",&op);
	
	     if(op=='i')
	     {
	     printf("\nEnter value a =>");
		 scanf("%d",&a);
		 printf("\nEnter value b =>");
		 scanf("%d",&b);
		 printf("\naddition=%d",a+b);
	     }
	     else if(op=='s')
	     {
		 printf("\nEnter value of a =>");
		 scanf("%d",&a);
		 printf("\nEnter value of b =>");
		 scanf("%d",&b);
 		 printf("\nsubtraction=%d",a-b);
	     }
	     else if(op=='m')
	     {
		 printf("\nEnter value of  a =>");
		 scanf("%d",&a);
		 printf("\nEnter value of b =>");
		 scanf("%d",&b);
		 printf("\nmultiplication=%d",a*b);
	     }
	     else if(op=='d')
	     {
		 printf("\nEnter value of a =>");
		 scanf("%d",&a);
		 printf("\nEnter value of b =>");
		 scanf("%d",&b);
		 printf("\ndivision=%d",a/b);
	     }
	     else if(op=='z')
	     {
	     	printf("\n bye");
		 }
	     else
	     {
		 printf("\nWrong opt");
	     }
	    }while(op!='z');
}
