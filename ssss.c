#include<stdio.h>

void swap(int *pu,int *pv)
{
	int temp=*pu;
	*pu=*pv;
	*pv=temp;
}

void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	printf("\n");
}
void perm(int arr,int start,int end)
{
	int i;
	if(start==end)
	{
		printArray(arr,end+1);
	}
	else {
		for(i=start;i<=end;i++) {
		swap(&arr[start],&arr[i]);
		perm(arr,start+1,end);
		swap(&arr[start],&arr[i]);
	} 
	}
}

int main()
{
	int a[]={1,2,3};
	perm(a,0,2);
	
	return 0;
}
