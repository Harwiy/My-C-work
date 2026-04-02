#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]);
	int b[10001]={0};
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]<a[i]) b[i]++;
		}
	}
		for(i=0;i<n;i++)
		printf("%d ",b[i]);
		return 0;	
	
}

