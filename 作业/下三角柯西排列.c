#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	int i,j,flag=1,d;
	for(d=1;d<=2*n-1;d++)
	{
		
		if(d<=n-1) /*×óÏÂÈý½Ç*/		  
		  	if(d%2) 
		  	for(i=n-d,j=0;i<n;j++,i++)		  	
		  		a[i][j]=flag++;
			else 
			for(i=n-1,j=d-1;i>=n-d;i--,j--)
			a[i][j]=flag++;  
		    
		else
		  
		  	if(d%2)
		  	 for(i=0,j=d-n;i<=2*n-1-d;i++,j++)
		  	  a[i][j]=flag++;
			else
			 for(i=2*n-1-d,j=n-1;i>=0;i--,j--)
			  a[i][j]=flag++;		  		
	}
	
	for(i=0;i<n;i++)	
	{
			for(j=0;j<n;j++)
		printf("%4d",a[i][j]);
	  printf("\n");	
    }
	return 0;
	
 } 
