#include<stdio.h>
struct stu
{
	int sno;
	char sname[20];
	int engmarks,hindimarks;	
};
main()
{
		struct stu s1,s2,s3;
		
		printf("\nEnter s1's sno =>");
		scanf("%d",&s1.sno);
		
		printf("\nEnter s1's sname =>");
		gets(s1.sname);
		
		printf("\nEnter s1's engmarks =>");
		scanf("%d",&s1.engmarks);
		
		printf("\nEnter s1's hindi m =>");
		scanf("%d",&s1.hindimarks);
		
		printf("\nEnter s2's sno =>");
		scanf("%d",&s2.sno);
		
		printf("\nEnter s2's sname =>");
		gets(s2.sname);
		
		printf("\nEnter s2's engmarks =>");
		scanf("%d",&s2.engmarks);
		
		printf("\nEnter s2's hindimarks =>");
		scanf("%d",&s2.hindimarks);
		
		printf("\nEnter s3's sno =>");
		scanf("%d",&s3.sno);
		
		printf("\nEnter s3's sname =>");
		gets(s3.sname);
		
		printf("\nEnter s3's engmarks =>");
		scanf("%d",&s3.engmarks);
		
		printf("\nEnter s3's hindimarks =>");
		scanf("%d",&s3.hindimarks);
		
        Printf("\nS1's no = %d  ename = %s  eng m = %d  hindi m = %d",s1.sno,s1.sname,s1.engmarks,s1.hindimarks);
		printf("\nS2's no = %d  ename = %s  eng m = %d  hindi m = %d",s2.sno,s2.sname,s2.engmarks,s2.hindimarks);
		printf("\nS3's no = %d  ename = %s  eng m = %d  hindi m = %d",s3.sno,s3.sname,s3.engmarks,s3.hindimarks);
}
