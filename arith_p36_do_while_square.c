#include<stdio.h>
main()
{
	int i,n;
	
	printf("\n enter value");
	scanf("%d",&n);
	
	do
	{
		printf("\n %d-%d",i,i*i);
		i++;
	}
	while(i<=n);
}
