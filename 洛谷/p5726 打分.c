#include<stdio.h>
int main()
{
	
	int n,a[1001],i,max,min;
	float s=0;
	scanf("%d%d",&n,&a[0]);
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		s+=a[i]; 
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
		
	}
	s=s-max-min+a[0];
	s= s/(n-2);

printf("%.2f",s);
return 0;
 } 
