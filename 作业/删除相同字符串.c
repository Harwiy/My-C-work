#include<stdio.h>
#define N 1024

int main()
{
	 char str1[N],str2[N];
	 gets(str1);
	 gets(str2);
	 int i,j,m;
	 for(i=0;str2[i];i++)
	 	for(j=0;str1[j];)//此处不写j++ 否则会跳过一些元素 	 	
	 		if(str1[j]==str2[i]) 
	 		 	for(m=j;str1[m];m++)
	 			 str1[m]=str1[m+1]; 
	 	    else j++;
	 	
	 	puts(str1);
	 	return 0;
	 
}


指针方法
for(p=q=s;*p;p++)
	if(*p!=c) *q++=*p;
 *q='\0';
 
