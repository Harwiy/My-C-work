#include<bits/stdc++.h>
using namespace std;


bool isprime(int n)
 {
 	int i;
 	for(i=2;i<=sqrt(n);i++)
 	{
 		if(n%i==0) return false;
	 }
	 return true;
 	
 }
int main()
{
	int a[10001],n,s=0,i,j=0,count =0;
	
	
	scanf("%d",&n);
	
	for(i=2;;i++)
	{
	 if(isprime(i)) 
	 {
	 	s+=i;
	 	a[j]=i;
	 	j++;
	 	count++;
	 }
	 if(s>n) break;
	}
	for(i=0;i<count-1;i++ )
	{
		printf("%d",a[i]);
		printf("\n");
		
	}
	printf("%d",count-1);
	return 0;
	
}
