#include<stdio.h>
void InsertSort(int a[],int n)
{ int i,j;
int temp;
for(i=1;i<n;i++)
{
	if(a[i]<a[i-1]) 
	{
	temp=a[i];
	for(j=i-1;a[j]>temp;j--)
	a[j+1]=a[j];
	a[j+1]=temp;
	}
}

 } 
void main()
{
int array[5]={8,9,28,11,23};
InsertSort(array, 5);
int i;
for(i = 0; i <5; i++)
{
printf("%d ",array[i]);
}
printf("\n");
 
}
