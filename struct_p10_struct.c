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
		int i,limit,p;
		
		printf("\nEnter limit =>");
		scanf("%d",&limit);

		for(i=0;i<limit;i++)
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
		for(i=0;i<limit;i++)
		{
			if(s[i].engm+s[i].hindim>50)
		{	
		printf("\n%d\t%s\t%d\t%d\t%d\tPass\tNoofpass",s[i].sno,s[i].sname,s[i].engm,s[i].hindim);
		}
		printf("\n=============================================");
		printf("\n total pass students=> %d",p);
        }
}
