#include<stdio.h>
int main()
{
	int k,i,s,de,temp;
	scanf("%d",&k);
	for(i=1;;i++)
	{ 
	
	    temp=i-1;
			de=k-(i-1)*i/2;
		if(k<(i+1)*i/2) 	break;
		
		
	}
	s=0;
	for(i=1;i<=temp;i++)
	{
		s=s+i*i;
		
	}
	s+=de*(temp+1);
	printf("%d",s);
	return 0; 
	
	
	
 } 
