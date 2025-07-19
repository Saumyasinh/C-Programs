#include<stdio.h>
main()
{
	int i,n;
	
	printf("\n enter the value");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("\n %d - even no.",i);
		}
		else 
		{
			printf("\n %d - odd no.",i);
		}
		i++;
	}
}
