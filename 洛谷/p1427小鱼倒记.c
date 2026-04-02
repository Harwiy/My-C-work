#include<stdio.h>

int main()
{
	int a[101],i=0,j;
	while(1)
	{
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		i++;
	}
	for(j=i-1;j>=0;j--)
	printf("%d ",a[j]);
	return 0;
	
}
