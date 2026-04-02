#include<stdio.h>
int main()
{
	
	
	float s,d=2,x=0;
	int i,n;
	scanf("%f",&s);
	for(i=1;;i++)
	{ x+=d;
		d*=0.98;
		n=i;
		if(x>=s) break;
	}
	printf("%d",n);
	return 0;
}
