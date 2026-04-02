#include<stdio.h>
int main()
{
	int k,i,temp;
	float s=0;
	scanf("%d",&k);
	for(i=1;;i++)
	{
		s+=1.0/i;
		if(s>k) 
		{ temp=i;
		break;
		}
		
	}
	printf("%d",temp);
	return 0;
	
}
