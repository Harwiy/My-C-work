#include<stdio.h> 
char *delchar(char *str)
{
	char *pa,*pb,*pc;
	for(pa=str,pb=str;*pa;pa++)
	{
		*pb=*pa;
		for(pc=str;*pc!=*pb;pc++);
		if(pc==pb) pb++;
		
	}
	*pb='\0';
	return str;
}
int main()
{
	char s1[]="aabbccaas";
	delchar(s1);
	printf("%s",delchar(s1));
	return 0;
}
