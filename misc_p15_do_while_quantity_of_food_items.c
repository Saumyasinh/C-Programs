#include<stdio.h>
main()
{
	int pizza,sandwich,dosa,burger;
    int pizzabill, sandwichbill, dosabill, burgerbill;
    int op;
    do
    {
       	 printf("\nenter 1 for pizza(500)");
	     printf("\nenter 2 for sandwich(300)");
	     printf("\nenter 3 for dosa(200)");
	     printf("\nenter 4 for burger(100)");
	     printf("\nenter 5 for exit");
	     printf("\nenter op=>");
	     scanf("%d",&op);
    
	     if (op==1)
         {
         printf("\nenter quantity of pizza(500)");
         scanf("%d",&pizza);
         pizzabill=pizza*500;
         printf("\npizzabill=%d",pizzabill);
	     }
	     else if (op==2)
	     {
         printf("\nenter quantity of sandwich(300)");
         scanf("%d",&sandwich);
         sandwichbill=sandwich*300;
         printf("\nsandwichbill=%d",sandwichbill);
         }
         else if(op==3)
         {
         printf("\nenter quantity of dosa(200)");
         scanf("%d",&dosa);
         dosabill=dosa*200;
         printf("\ndosabill=%d",dosabill);
	     }
	     else if (op==4)
	     {
         printf("\nenter quantity of burger(100)");
         scanf("%d",&burger);
         burgerbill=burger*100;
         printf("\nburgerbill=%d",burgerbill);
	     }
	     else if (op==5)
	     {
         printf("\n totalbill=%d",pizzabill+sandwichbill+dosabill+burgerbill);
	     printf("\n bye");
         }   
         }while(op!=5);
    
}

