#include<stdio.h>
char *parse(char *str)
{
	int s=0,isSpace;
	char *p=str,*q=str;
	while(*q)
	{
		isSpace=*q==' '||*q=='\t'||*q=='\n';
		if(!isSpace)
		{
			if(s==2) *p++=' ';
			s=1;*p++=*q;
		}
		else if(s==1) s=2;
		q++;
	}
	*p='\0';
	return str;
}
void main()
{
	char s[120]="   Welcome   to   c  World!";
	printf("原始字符串为：%s\n",s);
	printf("结果字符串为： %s\n",parse(s));
}
