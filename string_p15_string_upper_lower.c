#include<stdio.h>
#include<string.h>
main()
{
	char name1[100];
	
		printf("\n Enter name1 =>");
		gets(name1);
		printf("\n %s",name1);
		printf("\n %s",strupr(name1));
		printf("\n %s",strlwr(name1));
}
