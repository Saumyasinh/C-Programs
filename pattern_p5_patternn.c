#include<stdio.h>
main()
{
	int i,j,n;
	
	printf(" enter number =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(j=n;j>=i;j--)
		{
			printf("%d",j);
		}
	}
}
