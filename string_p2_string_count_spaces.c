#include<stdio.h>
#include<string.h>
main()
{
	char name[100],ch;
	int x,i,s=0;
	
		printf("\n Enter name =>");
		gets(name);
	
		x=strlen(name);
	
		for(i=0;i<x;i++)
		{
			ch=name[i];
			if(ch==' ')
			{
				s++;
			}
		}
		printf("\n%d",s);
}

