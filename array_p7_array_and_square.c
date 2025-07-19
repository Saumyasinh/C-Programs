#include<stdio.h>
main()
{
	
	int a[100],i,total=0,limit;
	
	        printf("Enter limit >=");
	     	scanf("%d",&limit);
	     
	    	 for(i=0;i<limit;i++)
			{
		 		printf("Enter value a[%d]=",i);
	     		scanf("%d",&a[i]);
			}
			for(i=0;i<limit;i++)
			{
				printf("\n %d --- %d", a[i] , a[i]*a[i]);
			}
}
