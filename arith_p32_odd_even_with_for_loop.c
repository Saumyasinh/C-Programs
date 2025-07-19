#include<stdio.h>
main()
{
	int i,n;
	
	printf("\n enter number");
	scanf("%d",&n);
	
	printf("\n print even numbers");
	
	for (i=1 ; i<=n ; i++)
	{
		if(i%2==0)
		{
			printf("\n %d",i);
		}
	}
	
        printf("\n print odd numbers");
	
	for (i=1 ; i<=n ; i++)
	{
		if(i%2==1)
		{
			printf("\n %d",i);
		}
	}
}
	
    
