#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	int x;
	
		printf("\n Enter name =>");
		gets(name);
	
		printf("\n Name = %s",name);
        x=strlen(name);
		printf("\n Length =%d",x);
}
