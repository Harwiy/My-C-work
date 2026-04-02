#include<stdio.h>
void main()
{ int k,m,j;
k=15;
for(m=2;m<=k;m++)
{for(j=2;j*j<=m;j++)//上一次循环的j值满足结束条件才会自增 
		if(m%j==0) break;
	
	if(m%j!=0) //m=3时，这个地方j=2，因为2*2大于3，不自增 
	
	printf("%4d",m);
	

}
printf("\n");
}//无break 循环结束的时候i加一 有 break i不加一，立即结束 
 
