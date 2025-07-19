#include<stdio.h>
main()
{
	int i,n,m;
	
	printf("\n enter the value");
	scanf("%d",&n);
	
	i=n;
	while(i>=1)
	{
		printf("%d x ",i);
		m=m*i;
		i--;
	}
	printf("\n mul=%d",m);
}

