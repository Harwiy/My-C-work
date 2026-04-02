//输出倒三角空心图案 
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("输入正整数n作为三角形的行数:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*n-1;j++)
		{
			if(i==0||j==i||j==2*n-i-2)
			printf("* ");
			else printf("  "); 
		}
		 printf("\n");
	 } 
	 return 0;
	 

 } 
