#include<stdio.h>
#include<string.h>
main()
{
	char name[100],ch;
	int i,x; 
	
		printf("\n Enter letter =>");
		scanf("%c",&name);
		gets(name);
		x=strlen(name);
		for(i=0;i<x;i++)
		{
			ch = name[i];
		    if(ch=='a'  ||ch=='e'  ||ch=='i'  ||ch=='o'  ||ch=='u' ||ch=='A'  ||ch=='E'  ||ch=='I' ||  ch=='O'  ||ch=='U' )
			{
				//printf
			}
			else
			{
				printf("%c",ch);
			}
		}
}
