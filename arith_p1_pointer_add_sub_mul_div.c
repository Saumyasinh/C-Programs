#include<stdio.h>
main()
{
	int a,b;
	a=20;
	b=2;
	int *ptra , *ptrb ;
	
	
	ptra= &a;
	ptrb= &b;
	
	printf("\n Add = %d",*ptra + *ptrb);
	
	printf("\n Sub = %d",*ptra - *ptrb);
	
	printf("\n Mul = %d",*ptra * *ptrb);
	
	printf("\n Div = %d",*ptra / *ptrb);
}
