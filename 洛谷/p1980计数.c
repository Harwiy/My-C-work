#include<stdio.h>
int main()
{
	
	int n;
	int x,i,count=0;
	scanf("%d%d",&n,&x);
	for(i=1;i<=n;i++)
	{      int a=i; 
	   while(a>0)//此处为什么不能用i作为循环条件：在for循环每一次循环里i为常数，故将i赋值给a变量 
		{ 
			if(a%10==x) 
			
				count++;
		a/=10; 
		
			 
		}
		
	 } printf("%d",count);
	 return 0;
}
