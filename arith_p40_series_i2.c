#include<stdio.h>
main()
{
	int n,i,s=0;
	
	printf("\n enter limit=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
			printf(" %d + ",i*i);
			s=s+i*i;
	}
	
	printf("\nSum = %d",s);
}
