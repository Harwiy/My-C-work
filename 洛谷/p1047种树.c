#include<stdio.h>
int main()
{
	int l,m,i,sum=0,u,v;
	scanf("%d %d",&l,&m);
	int a[l+1];
	for(i=0;i<=l;i++)
	a[i]=i;
	while(m--)
	{
		scanf("%d %d",&u,&v);
		for(i=u;i<=v;i++)
		a[i]=-1;
	}
	for(i=0;i<=l;i++)
	{
		if(a[i]>=0) sum++;
	}
	printf("%d",sum);
	return 0;
	
}


