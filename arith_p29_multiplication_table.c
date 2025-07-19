#include<stdio.h>
main()
{
	int i,n;
	
	printf("\n enter number");
	scanf("%d",&n);
	
	for(i=1 ; i<=10 ; i++)
	{
		printf("\n %d * %d = %d", n, i, n*i);
	}
}
