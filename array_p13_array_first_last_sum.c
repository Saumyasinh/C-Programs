#include<stdio.h>
main()
{
	int a[100],total=0,limit,i,add[100];
	
		printf("\n Enter limit >=");
		scanf("%d",&limit);
		
		for(i=0;i<limit;i++)
		{
			printf("Enter value a[%d]=",i);
			scanf("%d",&a[i]);
		}
		printf("\nAdd = %d",a[0] + a[limit-1]);
}

	
