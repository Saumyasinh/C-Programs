#include<stdio.h>
main()
{
	int  i,n,j,k=1;
	
	printf(" enter number =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",k++);
		}
		printf("\n");
	}
}
