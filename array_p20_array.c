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
		printf("\nValues");
		for(i=0;i<limit;i++)
		{
			if(a[i]%2==0)
			{
	     		printf("\n %d is even",a[i]);
	     	}
	     	else
	     	{
	     		printf("\n%d is odd",a[i]);
			 }
		}
		
}
