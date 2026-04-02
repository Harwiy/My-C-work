#include<stdio.h>
#define Row 3
#define Col 4
int main()
{
	int i,j,a[Col*Row],*p[3];
	for(i=0;i<Row*Col;i++)
	a[i]=i+1;
	printf("数组元素如下：\n");
	for(i=0;i<Row*Col;i++)
	printf("%4d",a[i]);
	printf("\n");
	for(i=0;i<Row;i++)
	p[i]=&a[Col*i];
	printf("按矩阵排列结果为：\n");
	for(i=0;i<Row;i++)
	{
		for(j=0;j<Col;j++)
		printf("%4d",p[i][j]);
		printf("\n");
	}
	
	printf("将上述矩阵转置：\n");
	int ins[Col][Row];
	for(i=0;i<Row;i++)
	{
		for(j=0;j<Col;j++)
		ins[j][i]=p[i][j];
	}
	for(i=0;i<Col;i++)
	{
		for(j=0;j<Row;j++)
		printf("%4d",ins[i][j]);
		printf("\n");
	}
	return 0;
}
