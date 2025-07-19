#include<stdio.h>
main()
{
	char ch;
	
	printf("\n enter letter =>");
	scanf("%c",&ch);
	
	if(isupper(ch))
	{
	printf("\n%c",tolower(ch));
	}
	else if (islower(ch))
	{
	printf("\n%c",toupper(ch));
	}
	else
	{
    printf("\nother");
	}
}

