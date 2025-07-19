#include<stdio.h>
main()
{
	int a,b;
	int add,sub,mul,div;
	char op;
	
	printf("\n enter a for add");
	printf("\n enter s for sub");
	printf("\n enter m for mul");
	printf("\n enter d for div");
	printf("\n enter op=>");
	scanf("%c",&op);
	
	switch(op)
	{
	    case 'a':
	    	printf("\nEnter value a =>");
		    scanf("%d",&a);
		    printf("\nEnter value b =>");
		    scanf("%d",&b);
		    printf("\nadd=%d",a+b);
		    break;
		    
	    case 's':
	    	printf("\nEnter value a =>");
		    scanf("%d",&a);
		    printf("\nEnter value b =>");
		    scanf("%d",&b);
		    printf("\nsub=%d",a-b);
		    break;
		    
		case 'm':
		    printf("\nEnter value a =>");
		    scanf("%d",&a);
		    printf("\nEnter value b =>");
		    scanf("%d",&b);
		    printf("\nmul=%d",a*b);  
			break;
			
		case 'd':
		    printf("\nEnter value a =>");
		    scanf("%d",&a);
		    printf("\nEnter value b =>");
		    scanf("%d",&b);
		    printf("\ndiv=%d",a/b);
			break;
			
		default:
		printf("\n wrong op");
    }
	    	
}
