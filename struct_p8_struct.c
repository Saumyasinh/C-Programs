#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	int salary;	
};
main()
{
		struct emp e[100];
		int i,n;
		
		printf("\nEnter limit =>");
		scanf("%d",&n);

		for(i=0;i<n;i++)
		{
			printf("\nEnter e1's eno =>");
			scanf("%d",&e[i].eno);
		
			fflush(stdin);
			printf("\nEnter e1's ename =>");
			gets(e[i].ename);
			
			printf("\nEnter e1's salary =>");
			scanf("%d",&e[i].salary);
		}
		
		printf("\nEmpno\tEname\tSalary");
		printf("\n========================");
		for(i=0;i<n;i++)
		{	
		printf("\n%d\t%s\t%d",e[i].eno,e[i].ename,e[i].salary);
		}
		printf("\n========================");
}

