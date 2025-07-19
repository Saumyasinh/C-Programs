#include<stdio.h>
main()
{
	int xerox,print,both;
	int xb,pb,quantity;
	int op;
	
	printf("\nenter 1 of xerox");
	printf("\nenter 2 of print");
	printf("\nenter 3 of both");
	printf("\nenter op=>");
	scanf("%d",&op);
	
	if(op==1)
	{
	printf("\n enter quantity of xerox=>");
	scanf("%d",&xerox);
	
		if(xerox>200)
		{
		printf("\n pay 10 rupees per page ");
		printf("\n xerox price=%d",xerox*10);
	    }
		else
		{
		printf("\n pay 15 rupees per page ");
		printf("\nxerox price=%d",xerox*15);
	    }
	}
    else if (op==2)
    {
    printf("\n enter quantity of print=>");
	scanf("%d",&print);
		if(print>50) 
		{
		printf("\n pay 5 rupees per page");
		printf("\n print price=%d",print*5);
		}
		else
		{
		printf("\n pay 2 rupees per page");
		printf("\n print price=%d",print*2);
	    }
	}
	else if (op==3)
	{
	    printf("\n enter quantity of xerox(50)=>");
		scanf("%d",&xerox);
		xb=xerox*50;
		printf("\n xerox bill=%d",xb);
		printf("\n enter quantity of print(10)=>");
		scanf("%d",&print);
		pb=print*10;
		printf("\n print bill=%d",pb);
		printf("\n total bill=%d",xb+pb);
	}
    else
    {
    	printf("\n wrong op");
	}
}
    
	
	
	
    
