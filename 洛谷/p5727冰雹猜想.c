#include<stdio.h>

int main()
{
	int n,i=0,j,b[1000];
	scanf("%d",&n);
	
	while(n>1)
	{
		b[i++]=n;
		if(n%2==0) n/=2;
		else n=n*3+1;
	}
	b[i]=1;
	
	for(j=i;j>=0;j--)
	printf("%d ",b[j]);
	
	return 0;
	
}
