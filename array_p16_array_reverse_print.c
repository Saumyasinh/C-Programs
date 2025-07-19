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
			for(i=limit-1;i>=0;i--)
			{
			   	    printf("\n %d",a[i]);
			}
}
