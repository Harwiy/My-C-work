#include<stdio.h>
void bubble_sort(int a[],int l,int r)
{
	int i,j;
	for(i=l;i<r;i++)
	{
		for(j=l;j<r-(i-l);j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
 } 
 

int main() {
    int n,i;
    scanf("%d", &n);
    
    int a[n];
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int q;
    scanf("%d", &q);
    
    while (q--) {
        int l, r;
        scanf("%d %d", &l, &r);
    
        bubble_sort(a, l - 1, r - 1);
    }
    
    for (  i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
