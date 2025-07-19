#include<stdio.h>
#include<string.h>
main()
{
	char name[100],ch,c;
	int x,i;
	
		printf("\n Enter Name=>");
		gets(name);
		x=strlen(name);
		for(i=0;i<x;i++)
		{
			ch = name[i];
		
			if(ch=='a'  ||ch=='e'  ||ch=='i'  ||ch=='o'  ||ch=='u' ||ch=='A'  ||ch=='E'  ||ch=='I' ||  ch=='O'  ||ch=='U' )
			{
				c++;
			}
		}
		printf("\n vowel =%d",c);
}
