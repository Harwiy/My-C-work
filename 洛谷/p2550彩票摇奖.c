#include<stdio.h>
int main()
{
	int n,b[34]={0},a[7],c[8]={0};
	scanf("%d",&n);
	int i,j,flag;
	for(i=0;i<7;i++)
	{		
		scanf("%d",&flag);
		b[flag]++;
	}
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=0;j<7;j++)
		{
		scanf("%d",&a[j]);
		if(b[a[j]]>0)
		count ++;
		
		}
		c[7-count]++;
		
	}
	for(i=0;i<7;i++)
	printf("%d ",c[i]);
	return 0;
	
	
}
