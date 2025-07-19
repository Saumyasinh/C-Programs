#include<stdio.h>
#include<string.h>
main()
{
	char name[100],ch;
	int i,x,u=0,l=0;
	
		printf("\n Enter letter =>");
		scanf("%c",&name);
		gets(name);
		x=strlen(name);
		for(i=0;i<x;i++)
		{
			ch = name[i];
			if(islower(ch))
			{
				printf("%c",toupper(ch));
			}
			else if(isupper(ch))
			{
				printf("%c",tolower(ch));
			}
			else
			{
				printf("%c",pizza);
			}
		}
}	
