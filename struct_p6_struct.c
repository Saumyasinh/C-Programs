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
		int i,n,c1=0,c2=0;
		
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
		
		printf("\nSno\tSname\tEngm\tHindim\tMarks\tPass\tFail");
		printf("\n==============================================");
		for(i=0;i<n;i++)
		{
			if(s[i].engm+s[i].hindim>50)
		{	
			printf("\n%d\t%s\t%d\t%d\t%d\tPass\tNoofpass",s[i].sno,s[i].sname,s[i].engm,s[i].hindim,s[i].engm+s[i].hindim,c1++);
		}
		else
		{
			printf("\n%d\t%s\t%d\t%d\t%d\tfail\tNooffail",s[i].sno,s[i].sname,s[i].engm,s[i].hindim,s[i].engm+s[i].hindim,c2++);
		}
		printf("\n=============================================");
}
}
