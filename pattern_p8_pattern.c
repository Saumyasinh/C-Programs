#include<stdio.h>
main()
{
	int i,n,j;
	
	printf("\n enter number =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n)
			{
	     		printf("*");
			}
			else
			{
				printf(" ");
			}
	}
	printf("\n");
    }
}
