#include<stdio.h>
main()
{
	int n,i,s=0;
	
	printf("\n enter limit=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf(" %d + ",i*i);
			s=s+i*i;
	    }
        else
    {
    	printf(" %d +",i*i*i);
    	s=s+i*i*i;
	}
}
	printf("\nSum = %d",s);
}
