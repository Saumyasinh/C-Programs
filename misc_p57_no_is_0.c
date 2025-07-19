#include<stdio.h>
main()
{
	int a;
	
	printf("\nEnter value of a ");
	scanf("%d",&a);
	
	a==0 ? printf("no is 0") : a>0 ? printf("no is +") : printf("no is -");
	
}
