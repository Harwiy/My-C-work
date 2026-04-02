#include<stdio.h>
int main()
{
	
	int m,n;
	scanf("%d%d",&m,&n);
	int a[n];
	int i,j,temp;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	{
		temp=a[0];
		for(j=0;j<n-1;j++)
		{
			a[j]=a[j+1];
		}
		a[j]=temp;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
