#include<stdio.h>
struct stu
{
	int sno;
	char sname[20];
	int engm,hindim;	
};
main()
{
		struct stu s[100];
		int i,n,x,p=0,f=0;
		
		printf("\nEnter limit =>");
		scanf("%d",&n);

		for(i=0;i<n;i++)
		{
			printf("\nEnter s1's sno =>");
			scanf("%d",&s[i].sno);
		
			fflush(stdin);
			printf("\nEnter s1's sname =>");
			gets(s[i].sname);
			
			printf("\nEnter s1's engm =>");
			scanf("%d",&s[i].engm);
			
			printf("\nEnter s1's hindim =>");
			scanf("%d",&s[i].hindim);
		}
		
		printf("\n enter rollno =>");
		scanf("%d",&x);
		
		if(s[i].sno==x)
		{
			printf("\nSno\tSname\tEngm\tHindim\tMarks\tPass\tFail");
			printf("\n==============================================");
			
			printf("\n%d\t%s\t%d\t%d\t%d\tPass\tNoofpass",s[i].sno,s[i].sname,s[i].engm,s[i].hindim,s[i].engm+s[i].hindim);
			printf("\n==============================================");
		}
}
