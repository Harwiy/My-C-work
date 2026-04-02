#include<bits/stdc++.h>
using namespace std;


bool ispalindrome(int n)
{
	
	int s=0,k=n;
	while(k)
	{
		s = s*10+k%10;
		k/=10;				
	}
	if(s==n) return true;
	return false;
}
bool isprime(int n)
{	for(int i=3;i<=sqrt(n);i+=2)
	{
		
		if(n%i==0) return false;
	}
	return true;
		
}
int main()
{
	
	int a,b;
	cin>>a>>b;
	if(a%2==0) a++;
	if(b>=10000000) b=10000000;
	for(int i = a; i <= b; i+=2)
	{
		if(ispalindrome(i) && isprime(i)) 
		{
			cout<<i<<endl;
			
				}		
	}
	return 0;
}
