#include<stdio.h>
main()
{
        int a[100],i,limit,k=0,b[100];
	
	        printf("Enter limit >=");
	     	scanf("%d",&limit);
	     
	    	 for(i=0;i<limit;i++)
			{
		 		printf("Enter value of a[%d]=",i);
	     		scanf("%d",&a[i]);
		    }
	        printf("\n values transfered =>");
	        
			for(i=0;i<limit;i++)
			{
				if(a[i]%7==0)
				{
					b[k]=a[i];
					k++;
			    }
			}
			for(i=0;i<k;i++)
			{	
                printf("\n %d",b[i]);
			}
}
