#include<stdio.h>
main()
{
	int i,n,c=0,s=0;
	
	printf("\n enter value=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%7==0)
		{
			printf("\n%d");
			c++;
			s=s+i;
		}
	}
	printf("\n count =%d sum=%d",c,s);
}

