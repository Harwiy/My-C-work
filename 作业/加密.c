#include<stdio.h>
#define N 1000
char str1[]="ZYXWVUTSRQPONMLKJIHGFEDCBA",str2[]="zyxwvutsrqponmlkjihgfedcba";
void encode(char *ip,char *op)
{
	char ch;
	while(ch=*ip++)
		if(ch>'A'&&ch<'Z') 
		*op++=str1[ch-'A'];
		else if(ch>'a'&&ch<'z')
		*op++=str2[ch-'a'];
		else 
		*op++=ch; 
		*op='\0';
	
	
}
void main()
{
	char in[N],out[N];
	printf("输入一个字符串: ");
	gets(in);
	encode(in,out);
	printf("加密后的字符串： %s",out);	
	
	
}
