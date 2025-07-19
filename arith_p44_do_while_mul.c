#include<stdio.h>
main()
{
	int i,n,m;
	
	printf("\n enter the value");
	scanf("%d",&n);

    do
    {
		printf("%d x ",i);
		m=m*i;
		i++;
	}
	while(i<=n);

    printf("\n mul=%d",m);
}
