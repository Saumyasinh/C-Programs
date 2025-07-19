#include<stdio.h>
main()
{

	int p,r,h;
	int simpleinterest;
	
	printf("\nEnter principle value =>");
	scanf("%d",&p);
	
	printf("\nEnter rate =>");
	scanf("%d",&r);
	
	printf("\nEnter height =>");
	scanf("%d",&h);
	
	simpleinterest=p*r*h/100;
	
	printf("\nsimple interest=%d",simpleinterest);
}



