#include<stdio.h>

int main()
{
	
double fibo[50];
int n,i;
scanf("%d",&n);
fibo[1]=1;fibo[2]=1;
for(i=3;i<=n;i++)

{
	
	fibo[i]=fibo[i-1]+fibo[i-2];
}
printf("%.2lf",fibo[n]);
return 0;
}
