#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int c1=0,c2=0;	
	
	f1=fopen("h:\\abc.txt","r");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(isupper(ch))
		{
			c1++;
		}
		else if(islower(ch))
		{
			c2++;
        }
    }
		fclose(f1);
		
		printf("\nCount = %d",c1);
		printf("\nCount = %d",c2);
	}
