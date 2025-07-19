#include<stdio.h>
main()
{
	int i,n,j;
	
	printf("\n enter number =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=n;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

