#include<stdio.h>

main()
{
	FILE *f1,*f2;
	char ch;
	f1=fopen("h:\\abc.txt","r");
	f2=fopen("h:\\pqr.txt","w");
	
	while(ch!=EOF)
	{
   		 ch=getc(f1);
   		 
 		if(isupper(ch))
		{
			putc(tolower(ch),f2);
		}
		else if (islower(ch))
		{
			putc(toupper(ch),f2);
		}
	}
		fclose(f1);
		fclose(f2);
	
		printf("\nCopied");
}
