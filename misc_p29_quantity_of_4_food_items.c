#include<stdio.h>
main()
{
	int pizza,sandwich,dosa,burger;
	int op,pizzabill, sandwichbill, dosabill, burgerbill;
	
	
	printf("\nenter 1 for pizza(500)");
	printf("\nenter 2 for sandwich(300)");
	printf("\nenter 3 for dosa(200)");
	printf("\nenter 4 for burger(250)");
	printf("\nenter 5 for all");
	printf("\nenter op=>");
	scanf("%d",&op);
    
	if (op==1)
    {
    printf("\nenter quantity for pizza(500)");
    scanf("%d",&pizza);
    printf("\npizzabill=%d",pizza*500);
	}
	else if (op==2)
	{
    printf("\nenter quantity forsandwich(300)");
    scanf("%d",&sandwich);
    printf("\nsandwichbill=%d",sandwich*300);
    }
    else if(op==3)
    {
    printf("\nenter quantity fordosa(300)");
    scanf("%d",&dosa);
    printf("\ndosabill=%d",dosa*300);
	}
	else if (op==4)
	{
    printf("\nenter quantity for pizza(500)");
    scanf("%d",&burger);
    printf("\nburgerbill=%d",burger*250);
	}
	else if (op==5)
	{
	printf("\nenter quantity for pizza(500)");
    scanf("%d",&pizza);
    pizzabill=pizza*500;
    
    printf("\nenter quantity for sandwich(300)");
    scanf("%d",&sandwich);
    sandwichbill=sandwich*300;
    
    printf("\nenter quantity for dosa(200)");
    scanf("%d",&dosa);
    dosabill=dosa*200;
    
    printf("\nenter quantity for burger (250)");
    scanf("%d",&burger);
    burgerbill=burger*250;
    
	printf("\n totalbill=%d",pizzabill+sandwichbill+dosabill+burgerbill);
    }

  else
    {
    printf("\n wrong op");
    }
}
	
