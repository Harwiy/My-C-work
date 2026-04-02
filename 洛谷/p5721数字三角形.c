#include<stdio.h>
int main()
{
	
	int n,i,j,a=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
			{   
			if(a<10) printf("0%d",a);
			else printf("%d",a);
			a++;
				
			}
		printf("\n");
	}
	return 0;
}
