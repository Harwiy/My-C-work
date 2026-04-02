
// 注意变量的初始化 
#include<stdio.h>
int main ()
{
	int n,k,i,count1=0,count2=0;
	double avg1=0,avg2=0;
	scanf("%d%d",&n,&k);
	 for(i=1;i<=n;i++)
	 { 
	 if(i%k==0) 
	 { avg1+=i;
	 count1++;
	 }
	 else 
	 { avg2+=i;
	 count2++;
	 }
	 }
	avg1/=count1;
	avg2/=count2;
	printf("%.1f %.1f",avg1,avg2);
	return 0;
	
	
}

