#include<stdio.h>
#define N 10
int main()
{
	int a[N]={0};
	int n,i,j,m,len=0;
	scanf("%d",&n);
	i=0;
	while(n)
	{
		a[i++]=n%10;
		n/=10;
		len++;
	}
	
	for(i=0;i<len;i++)
	{
		m=a[i];
		for(++a[i];a[i]<10;++a[i])
		{
			n=0;
			for(j=len-1;j>=0;j--)
			{
				n=n*10+a[j];
				
			}
			printf("%4d",n);
		}
		a[i]=m;
		printf("\n");
		
	}
	return 0;
	
}
