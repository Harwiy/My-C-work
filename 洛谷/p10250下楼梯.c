#include<stdio.h>

//注意到最多一次走三个台阶，所以第j阶台阶可有上面三个台阶任意一个下来 
int main()
{
int n,i;
long long a[1001];
scanf("%d",&n);
a[0]=1;
a[1]=2;
a[2]=4;
for(i=3;i<n;i++)
{
	a[i]=a[i-1]+a[i-2]+a[i-3];
}
printf("%lld",a[n-1]);
return 0;

}
