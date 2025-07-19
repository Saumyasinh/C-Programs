#include<stdio.h>
void areaoftriangle(int h,int b)
{
		printf("\narea of triangle=%d",h*b*0.5);  
}

main()
{
	int h,b,area;
	
		printf("\n Enter value of h =>");
		scanf("%d",&h);
	
		printf("\n Enter value of b =>");
		scanf("%d",&b);
    	
	areaoftriangle(h,b); 
}

