#include<stdio.h>
main()
{
	int  i,n,j,k;
	
	printf(" enter number =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		k=n;
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k--;
		}
		printf("\n");
	}
}
