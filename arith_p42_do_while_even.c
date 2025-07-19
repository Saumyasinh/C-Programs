#include<stdio.h>
main()
{
	int i,n;
	
	printf("\n enter value");
	scanf("%d",&n);
	
	do
	{
		printf("\n%d",i*2);
		i++;
	}
	while(i<=n);
}
