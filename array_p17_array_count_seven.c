#include<stdio.h>
main()
{
	
	int a[7],i,c=0,limit;
	
	
			printf("Enter limit >=");
	     	scanf("%d",&limit);
	     
	    	 for(i=0;i<limit;i++)
			{
		 		printf("Enter value a[%d]=",i);
	     		scanf("%d",&a[i]);
			}
			for(i=0;i<limit;i++)
			{
				if(a[i]==7)
				c++;
			}
			printf("\ncount = %d",c);
}
