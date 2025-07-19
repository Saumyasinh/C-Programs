#include<stdio.h>
#include<string.h>
main()
{
	char name[100],ch;
	int x,i,u=0,l=0;
	
		printf("\n enter the letter =>");
		scanf("%c",&name);
		gets(name);
		x=strlen(name);
		for(i=0;i<x;i++)
		{
			ch = name[i];
			if(islower(ch))
			{
				printf("\n %c is lower",ch);
				l++;
			}
			else if(isupper(ch))
			{
				printf("\n %c is upper",ch);
				u++;
			}
	    }
		printf("\n upper=%d  lower=%d",u,l);
}
