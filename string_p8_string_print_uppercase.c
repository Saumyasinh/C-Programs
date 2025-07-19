#include<stdio.h>
#include<string.h>
main()
{
	char name[100],ch;
	int x,i;
	
			printf("\n enter the letter =>");
			scanf("%c",&name);
			gets(name);
			x=strlen(name);
			for(i=0;i<x;i++)
			{
		   		ch = name[i];
				if(isupper(ch))
				{
					printf("%c",ch);
				}
			}
}
