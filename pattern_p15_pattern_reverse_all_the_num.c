#include<stdio.h>
main()
{
	int i,n,j,k=1;
	
	printf("\n enter number =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d",k++);
		}
		printf("\n");
	}
}
