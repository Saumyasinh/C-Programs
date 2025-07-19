#include<stdio.h>
main()
{
	int b,p,i,ans=1;
	
	printf("\n enter value of b");
	scanf("%d",&b);
	
	printf("\n enter value of p");
	scanf("%d",&p);
	
	for(i=1;i<=p;i++)
	{
		ans=ans*b;
	}
	printf("\n%d",ans);
}
