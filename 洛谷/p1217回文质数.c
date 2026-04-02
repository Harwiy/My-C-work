#include<stdio.h>
#include<math.h> 
int isPalindrome(int n)
{
	int temp=n,reverse=0;
	while(temp)
	{
		reverse=reverse*10+temp%10;
		temp/=10;
	}
	if(n==reverse) return 1;
	return 0;
 } 

int isPrime(int n)
{
	int i;
  	if(n==1) return 0;
  	if(n==2) return 1;
  	if(n%2==0) return 0;
	for(i=3;i*i<=n;i+=2)
	if(n%i==0) return 0;
	return 1;
}

int main()
{
	int a,b,s=0;
	scanf("%d%d",&a,&b);
	int i;
	if(a%2==0) a+=1;
	int count=0,d=b;
	//判断b的位数 
while(d)
{
    d/=10;
    count++;
}
if(count%2==0) b=pow(10,count-1);//调整b 
	for(i=a;i<=b;i+=2)
	{
		if(isPrime(i)&&isPalindrome(i))
		{
			s++;
			printf("%d\n",i);
		}
	}
	printf("\n%d",s);
	return 0;
}
