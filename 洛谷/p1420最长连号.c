#include<stdio.h>
int main()
{
	
	int n,a[10001],i,s=1,maxn=1;

		scanf("%d%d",&n,a[0]);
		for(i=1;i<n;i++)
		{
			scanf("%d",a[i]);
			if(a[i]==a[i-1]+1)
			{
				s++;
				
			}
			else s=1;
			if(s>maxn) maxn=s;
		}	
			printf("%d",maxn);
			return 0;
}
