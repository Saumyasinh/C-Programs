#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	int salary;	
};
main()
{
		struct emp e1,e2,e3;
		
		printf("\nEnter e1's eno =>");
		scanf("%d",&e1.eno);
		
		printf("\nEnter e1's ename =>");
		gets(e1.ename);
		
		printf("\nEnter e1's salary =>");
		scanf("%d",&e1.salary);
		 
		printf("\nEnter e2's eno =>");
		scanf("%d",&e2.eno);
		
		printf("\nEnter e2's ename =>");
		gets(e2.ename);
		
		printf("\nEnter e2's salary =>");
		scanf("%d",&e2.salary);
		
		printf("\nEnter e3's eno =>");
		scanf("%d",&e3.eno);
		
		printf("\nEnter e3's ename =>");
		gets(e3.ename);
		
		printf("\nEnter e3's salary =>");
		scanf("%d",&e3.salary);
		
		printf("\nE1's no = %d  ename = %s salary = %d",e1.eno,e1.ename,e1.salary);
		printf("\nE2's no = %d  ename = %s salary = %d",e2.eno,e2.ename,e2.salary);
		printf("\nE3's no = %d  ename = %s salary = %d",e3.eno,e3.ename,e3.salary);
}
