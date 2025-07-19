#include<stdio.h>
main()
{
	int a,b,op;
	int add,sub,mul,div;
	
	printf("\n enter 1 for add");
	printf("\n enter 2 for sub");
	printf("\n enter 3 for mul");
	printf("\n enter 4 for div");
	printf("\n enter op=>");
	scanf("%d",&op);
	
	switch(op)
	{
	    case 1:
	    	printf("\nEnter value a =>");
		    scanf("%d",&a);
		    printf("\nEnter value b =>");
		    scanf("%d",&b);
		    printf("\nadd=%d",a+b);
		    break;
		    
	    case 2:
	    	printf("\nEnter value a =>");
		    scanf("%d",&a);
		    printf("\nEnter value b =>");
		    scanf("%d",&b);
		    printf("\nsub=%d",a-b);
		    break;
		    
		case 3:
		    printf("\nEnter value a =>");
		    scanf("%d",&a);
		    printf("\nEnter value b =>");
		    scanf("%d",&b);
		    printf("\nmul=%d",a*b);  
			break;
			
		case 4:
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
