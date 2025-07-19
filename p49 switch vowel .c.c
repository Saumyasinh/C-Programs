#include<stdio.h>
main()
{
	char ch;
	
	printf("\n enter letter=>");
	scanf("%c",&ch);
	
	switch(ch)
	{ 
    case 'a':
    case 'e':
    case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		
		printf("\n%c is a vowel",ch);
		scanf("%c",&ch);
    	break;
    	
		default:
    	printf("\n wrong op");	
    	
        
    

    }
}
