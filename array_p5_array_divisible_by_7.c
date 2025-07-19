#include<stdio.h>
main()
{
	int a[100],i,total=0,limit;
	int c=0,s=0;
	
	
	     printf("Enter limit >=");
	     scanf("%d",&limit);
	
		for(i=0;i<limit;i++)
		{
		 	printf("Enter value a[%d]=",i);
	     	scanf("%d",&a[i]);
		}
		printf("\nValues");
		for(i=0;i<limit;i++)
		{
			if(a[i]%7==0)
			{
	     		printf("\n %d",a[i]);
	     		c++;
	     		s=s+a[i];
	     	}
        }
	     	printf("\n count =%d sum=%d",c,s);
}
