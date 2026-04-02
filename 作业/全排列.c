#include<stdio.h>


void swap(int arr[],int p,int q)
{
	int i;
	int temp=arr[q];
	for(i=q;i>=p+1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[p]=temp;
}
void swapback(int arr[],int p,int q)
{
	
	int i,temp=arr[p];
	for(i=p;i<=q-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[q]=temp;
}
void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	printf("\n");
}

void perm(int arr[],int p,int q){
	int i;
	if(p==q)
	{
		printArray(arr,q+1);
		
		
	}
	else {
		for(i=p;i<=q;i++){
		swap(arr,p,i);
		perm(arr,p+1,q);
		swapback(arr,p,i);
	}
	}
}

int main()
{
	int a[]={1,2,3};
	perm(a,0,2);
	return 0;
}
