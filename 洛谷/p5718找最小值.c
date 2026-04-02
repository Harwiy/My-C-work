//算法    最小值通过后面每一项和第一项作比较得到 
#include<stdio.h>
int main()
{
int i,n,a[10001];
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[1];
	for(i=2;i<=n;i++)
	{
			if(a[i]<min)  min=a[i];
			}
			printf("%d",min);
			return 0; 
}
	
	
	

