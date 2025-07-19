#include<stdio.h>
main()
{
	int a[100],i,total=0,limit;
	int c=0,s=0,c2=0,s2=0;
	
		printf("\n Enter limit >=");
		scanf("%d",&limit);
		
		for(i=0;i<limit;i++)
		{
			printf("Enter value a[%d]=",i);
			scanf("%d",&a[i]);
		}
		printf("\n values");
		for(i=0;i<limit;i++)
		{
			if(a[i]%2==0)
		    {
		    	printf("\n %d is even",a[i]);
		    	c2++;
		    	s2=s2+a[i];
			}
			else
			{
				printf("\n %d is odd",a[i]);
		    	c++;
		    	s=s+a[i];
			}
}
		printf("\n odd count =%d sum =%d",c,s);
		printf("\n even count =%d sum =%d",c2,s2);
}
