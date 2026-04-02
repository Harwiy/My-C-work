#include<stdio.h>
#define N 100
int main()
{
	
	int a[]={6,5,8,7,5,6,4,3},b[N];
	int n=8;
	int *pa,*pb,*pc;
	for(pa=a,pb=b;pa<a+n;pa++)
	{
		*pb=*pa;
		for(pc=b;*pc!=*pb;pc++);
		if(pc==pb) pb++;
		
	}
	for(pa=a;pa<a+n;pa++)
	printf("%4d",*pa);
		printf("\n");
	for(pc=b;pc<pb;pc++)
	printf("%4d",*pc);
	return 0;
	
}
