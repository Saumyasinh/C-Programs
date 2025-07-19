#include<stdio.h>
main()
{
	int a[100];
	int i,limit;
	int *ptr;
	
	printf("\n enter limit =>");
	scanf("%d",&limit);
	
	for(i=0;i<limit;i++)
	{
		printf("\n enter no =>");
		scanf("%d",&a[i]);	
	}
	ptr=a;
	for(i=0;i<limit;i++)
	{
		printf("\n %d",*ptr);
		ptr++;	
	}
}
