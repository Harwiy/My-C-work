#include<stdio.h>
int main()
{
	
int i,j,n,x,k;
scanf("%d",&n);
for(i=1;i<=100;i++)
{
	for(j=101;j>=1;j--)
	{
		if(i*7+21*j==n/52)
		{
			x=i;
			k=j;
		}
		
	}
	
}
printf("%d\n%d",x,k);
return 0;

}
