#include<stdio.h>
main()
{
	FILE *f1,*f2,*f3;
	char ch1,ch2;
	f1=fopen("h:\\abc.txt","r");
	f2=fopen("h:\\def.txt","r");
	f3=fopen("h:\\pqr.txt","w");
	while(ch1!=EOF)
	{
   		 ch1=getc(f1);
   		 putc(ch1,f3);
   	}
   	while(ch2!=EOF)
	{
   		 ch2=getc(f2);
   		 putc(ch2,f3);
   	}
   	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("\nmerged");
}
