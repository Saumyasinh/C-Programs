#include<stdio.h>
main()
{
	int i,n,j,k;
	
	printf("\n enter number =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		k=1;
		for(j=n;j>=i;j--)
		{
			if(i%2==0)
			{
				printf("%d",k);
				k++;
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
