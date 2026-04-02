#include<stdio.h>
#define N 100

void insComma(char *p1,char *p2)
{
	char *p;
	for(p=p1;*p;p++)
	{
		*p2++=*p;
		*p2++=',';
		*p2++=' ';
		
	}
	*(p2-2)='\0';
	
	
}
void main()
{
	char s1[N],s2[N*3];
	gets(s1);
	insComma(s1,s2);
	puts(s2);
}
