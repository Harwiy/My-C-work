#include<stdio.h>
#include<math.h>
int main()
{

int n,i,j,k,a[1001][3],sum[1001]={0};
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
		sum[i]+=a[i][j];
	}
}
int count=0;
for(i=1;i<n;i++)
{ 
	for(j=i+1;j<=n;j++)
	{
	   
		if(fabs(sum[i]-sum[j])>10) continue;
		for(k=0;k<3;k++)
		{
			if(fabs(a[i][k]-a[j][k])>5) break;
			
		}
		if(k==3) count++;
		
	}
}
printf("%d",count);
return 0;

}


