#include<stdio.h>
main()
{
	
	int a[100],i,limit,b[100];
	
	        printf("Enter limit >=");
	     	scanf("%d",&limit);
	     
	    	 for(i=0;i<limit;i++)
			{
		 		printf("Enter value of a[%d]=",i);
	     		scanf("%d",&a[i]);
			}
	        printf("\n values transfered =>");
			for(i=0;i<limit;i++)
			{
				b[i]=a[i];
		    }
			for(i=0;i<limit;i++)
			{
				printf("\n %d",b[i]);
			}
}
