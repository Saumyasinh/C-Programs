#include<stdio.h>
main()
{
	char ch;
	
	printf("\n enter letter=>");
	scanf("%c",&ch);
	
	if (isupper(ch))
	{
	printf("\n Yes its upper");
	}
	else if(islower(ch))
	{
	printf("\n Yes its lower");
	}
	else
	{
	printf("\n other");
    }
}

