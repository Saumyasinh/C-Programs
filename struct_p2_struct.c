#include<stdio.h>
struct stu
{
	int sno;
	char sname[20];
	int engmarks,hindimarks;	
};
main()
{
		struct stu s[100];
		int i,n;
		
		printf("\nEnter limit =>");
		scanf("%d",&n);

		for(i=0;i<n;i++)
		{
			printf("\nEnter s1's sno =>");
			scanf("%d",&s[i].sno);
		
			fflush(stdin);
			printf("\nEnter s1's sname =>");
			gets(s[i].sname);
			
			printf("\nEnter s1's engmarks =>");
			scanf("%d",&s[i].engmarks);
			
			printf("\nEnter s1's hindimarks =>");
			scanf("%d",&s[i].hindimarks);
		}
		
		printf("\nSno\tSname\tEngmarks\tHindimarks");
		printf("\n========================");
		for(i=0;i<n;i++)
		{	
		printf("\n%d\t%s\t%d\t%d",s[i].sno,s[i].sname,s[i].engmarks,s[i].hindimarks);
		}
		printf("\n========================");
}
