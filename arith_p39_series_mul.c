#include<stdio.h>
main()
{
	int i,n;
	int m=1;
	
	printf("\n enter limit=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
			printf(" %d * ",i);
			m=m*i;
	}
	
	printf("\nMul = %d",m);
}
