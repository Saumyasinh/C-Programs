#include<stdio.h>
main()
{
	int i,n;
	
	printf("\n enter value");
	scanf("%d",&n);
	
	do
	{
		printf("\n %d * %d = %d",n,i,i*n);
		i++;
	}
	while(i<=n);
}
