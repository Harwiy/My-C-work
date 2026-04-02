 #include<stdio.h>
#define N 100
void main()
{
	char s1[N+N],s2[N],*p,*q;
	printf("请输入第一个字符串：");
	gets(s1);
	printf("请输入第二个字符串：");
	gets(s2);
	for(p=s1;*p!='\0';p++);
	for(q=s2;*p++=*q++;);//赋值判断一起进行，赋完值立即判断 
	printf("连接后的字符串：%s\n",s1);
	 
}
