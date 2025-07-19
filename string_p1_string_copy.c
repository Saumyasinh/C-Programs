#include<stdio.h>
#include<string.h>
main()
{
	char name1[100],name2[100];
	
		printf("\n Enter name1 =>");
		gets(name1);
	
		printf("\n Enter name2 =>");
		gets(name2);
	
		printf("\n %s",name1);
		printf("\n %s",name2);
	
		strcpy(name1,name2);
	
		printf("\n %s",name1);
		printf("\n %s",name2);
}
