#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int c=0;	
	f1=fopen("h:\\abc.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		
		if(ch==' ')
		{
			//printf
		}
		else
		{
			printf("%c",ch);
		}
	}
	
	fclose(f1);
	
}
