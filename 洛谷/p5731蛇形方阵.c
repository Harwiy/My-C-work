#include<stdio.h>
int main()
{
	
	int a[10][10]={0},n,i=1,j=0,flag=1;
	scanf("%d",&n);
	while(flag<=n*n) 
	{
		while(j<n&&!a[i][j+1]) a[i][++j]=flag++;
		while(i<n&&!a[i+1][j]) a[++i][j]=flag++;
		while(j>1&&!a[i][j-1]) a[i][--j]=flag++;
		while(i>1&&!a[i-1][j]) a[--i][j]=flag++;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	
	
		return 0;
}



