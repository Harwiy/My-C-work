
#include<stdio.h>
void convert(int n,int k)
{
	char a[100];
	char b[]={'A','B','C','D','E','F'};
	int i=0;
    int temp=n;
	while(temp)
	{
		a[i++]=temp%k;
		temp/=k;
	 } 
	 printf("十进制%d转换为%d进制: ",n,k);
	
	 for(--i;i>=0;i--)
	 {
	 	if(a[i]<10) 
	 	printf("%2d",a[i]);
	 	else 
	 	printf("%2c",b[a[i]-10]);
	 }
	 printf("\n");
}
int main()
{
	
	convert(15,2);
	convert(15,8);
	convert(15,16);
	return 0;
}
