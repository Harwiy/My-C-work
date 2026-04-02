#include<stdio.h>


int main()
{
int n,reverse=0;
scanf("%d",&n);
int t=n;
while(t)
{
reverse=reverse*10+t%10;
t/=10;	
}
if(reverse==n) printf("是回文序列");
else printf("不是回文序列");
return 0;
 } 
