 #include<stdio.h>
 #define max2(A,B) ((A)>(B)?(A):(B))
 #define max3(A,B,C) max2(max2((A),(B)),(C))
int main()
{
	
	
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	printf("%d",max3(x,y,z));
	return 0;
}

