#include<stdio.h>
main()
{
	int i,n;
	int s=0;
	
	printf("\n enter limit=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
			printf(" %d + ",i);
			s=s+i;
	}
	
	printf("\nSum = %d",s);
}
