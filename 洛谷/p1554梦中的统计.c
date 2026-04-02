#include<stdio.h>
int main()
{

int m,n,i,a[10]={0};
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)
{
	int flag=i;
	while(flag)
	{
		int temp=flag%10;
		a[temp]++;
		flag/=10;
	}
 } 
 for(i=0;i<10;i++)
 printf("%d ",a[i]);
 
 return 0;

}




