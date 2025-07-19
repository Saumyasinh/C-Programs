#include<stdio.h>
main()
{
	
	int a[100],i,total=0,limit,op;

	     printf("Enter limit >=");
	     scanf("%d",&limit);
	     
	     for(i=0;i<limit;i++)
		{
		 	printf("Enter value a[%d]=",i);
	     	scanf("%d",&a[i]);
		}
		printf("\nValues");
		
		printf("\n enter 1 for odd even");
		printf("\n enter 2 for positive negative");
		printf("\n enter op =>");
		scanf("%d",&op);
		
		if(op==1)
		{
			for(i=0;i<limit;i++)
			{
				if(a[i]%2==0)
				{
	     			printf("\n %d is even",a[i]);
	     		}
	     		else
	     		{
	     			printf("\n %d is odd",a[i]);
	    		}
			}
		}
		else if(op==2)
		{
			for(i=0;i<limit;i++)
			{
				printf("\n %d ",a[i]*-1);
	    	}
		}
		else
		{
			printf("\n wrong op");
		}
}
		
