#include<stdio.h>
main()
{

	int pizza,sizzler,panipuri,quantity,total;
	
	printf("enter quantity of pizza(300)=>");
	scanf("%d",&pizza);
	
	printf("enter quantity of sizzler(250)=>");
	scanf("%d",&sizzler);
	
	printf("enter quantity of panipuri(50)=>");
	scanf("%d",&panipuri);
	
	total=pizza*300+sizzler*250+panipuri*50;
	
	printf("\npizza bill=%d",pizza);
	printf("\nsizzler bill=%d",sizzler);
	printf("\npanipuri bill=%d",panipuri);
	printf("\ntotal bill=%d",total);
}
	
	
	


