#include<stdio.h>
main()
{
	
	int a[100],b[100],i,total=0,limit;
	int add[100];
	
	
			printf("Enter limit >=");
	     	scanf("%d",&limit);
	     
	    	 for(i=0;i<limit;i++)
			{
		 		printf("Enter value a[%d]=",i);
	     		scanf("%d",&a[i]);
			}
			 for(i=0;i<limit;i++)
			{
		 		printf("Enter value b[%d]=",i);
	     		scanf("%d",&b[i]);
			}
			printf("\nValues");

			for(i=0;i<limit;i++)
			{
				add[i]=a[i]+b[i];
				printf("\n %d",add[i]);
			}
}			
