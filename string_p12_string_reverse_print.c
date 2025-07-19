#include<stdio.h>
#include<string.h>
main()
{ 
	char name[100],ch;
	int i,x;
	
		printf("\n Enter name =>");
		gets(name);
		x=strlen(name);
		for(i=x-1;i>=0;i--)
		{
			ch = name[i];
			printf("%c",ch);
		}
}
