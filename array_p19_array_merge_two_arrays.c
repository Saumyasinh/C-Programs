#include<stdio.h>
main()
{
	
	int a[100],i,limit,k=0,b[100],c[100];
	
	        printf("Enter limit >=");
	     	scanf("%d",&limit);
	     
	    	 for(i=0;i<limit;i++)
			{
		 		printf("Enter value of a[%d]=",i);
	     		scanf("%d",&a[i]);
			}
			for(i=0;i<limit;i++)
			{
		 		printf("Enter value of b[%d]=",i);
	     		scanf("%d",&b[i]);
			}
	        printf("\n values transfered =>");
			for(i=0;i<limit;i++)
			{
				c[k]=a[i];
				k++;
		    }
		    for(i=0;i<limit;i++)
			{
				c[k]=b[i];
				k++;
		    }
			for(i=0;i<k;i++)
			{
				printf("\n %d",c[i]);
			}
}
