#include<stdio.h>
main()
{
	int i,n,j;
	
	printf("\n enter number =>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i%2==0)
			{
				printf("1");
		    }
		    else
		    {
		    	printf("0");
			}
		}
		printf("\n");
    }
}
