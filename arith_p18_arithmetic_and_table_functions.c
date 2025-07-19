#include<stdio.h>
void add()
{
		int a,b;
		
		printf("\n Enter value of a =>");
		scanf("%d",&a);
			
		printf("\n Enter value of b =>");
		scanf("%d",&b);
		
		printf("\nadd=%d",a+b);
}

void table()
{
		int n,i;
	
		printf("\n Enter number");
		scanf("%d",&n);
		
		for(i=1;i<=10;i++)
		{
			printf("\n %d * %d = %d",n,i,n*i);
		}
}

void posneg()
{
	int number;
	
    printf("\nEnter the number");
	scanf("%d",&number);

	if(number>0)
	{
		printf("\npositive");
    }
    else
	{
    	printf("\nnegative");
	}
}

void oddeven()
{
	int n,i;
	
		printf("\n Enter number");
		scanf("%d",&n);
		
		if(i%2==0)
		{
			printf("%d is even",n);
		}
		else
		{
			printf("%d is odd",n);
		}
}

void cube()
{
		int a,cube;
	
		printf("\n Enter value of a =>");
	
		printf("\ncube=%d",a*a*a);
}

void areaoftraingle()
{
		int h,b,area;
	
		printf("\n Enter value of h =>");
		scanf("%d",&h);
	
		printf("\n Enter value of b =>");
		scanf("%d",&b);
    	
		printf("\narea of triangle=%d",h*b*0.5);    	
}

main()
{
	add();
	table();
	posneg();
	oddeven();
	cube();
	areaoftraingle();	
}
