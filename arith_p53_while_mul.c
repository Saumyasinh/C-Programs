#include<stdio.h>
main()
{
	int i,n,m;
	
	printf("\n enter the value");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		printf("%d x ",i);
		m=m*i;
		i++;
	}
	printf("\n mul=%d",m);
}

