#include<stdio.h>
main()
{
	int n,i;
	
	printf("\n enter the value ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("\n%d is even",i );
		}
		else
		{
			printf("\n%d is odd",i );
		}
    }
    
}
