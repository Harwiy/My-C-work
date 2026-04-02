#include<stdio.h>
#define N 3
int s[N][5]={{5,70,80,90,70},
                 {7,40,80,50,60},
				 {8,50,70,40,50}};
void search(int (*p)[5],int n,int no)
{
	int (*pa)[5],*pp;
	for(pa=p;pa<p+n;pa++)
	{
		if(**pa==no) 
		{printf("%d 学生信息为：\n",no);
		for(pp=*pa+1;pp<=*pa+4;pp++)
		printf("%4d\t",*pp);	
		printf("\n");
		return ;

	}
	
	}
	printf("没有找到该学生\n");
}
int main()
{
	search(s,N,7);
	search(s,N,2);
	return 0;
}


