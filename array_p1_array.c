#include<stdio.h>
main()
{
	int a[100],i,total=0,limit;
	int c=0,s=0,c2=0,s2=0;
	
	
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
			if(a[i]>0)
			{
	     		printf("\n %d is positive",a[i]);
	     		c2++;
	     		s2=s2+a[i];
	     	}
	     	else
	     	{
	     		printf("\n %d is negative",a[i]);
	     		c++;
	     		s=s+a[i];
			 }
		}
			printf("\n positive count=%d Sum=%d",c2,s2);
	        printf("\n negative count=%d Sum=%d",c,s);
}
