#include<stdio.h>
char *Up(char *str)
{
	char *q=str;
	while(*q++)
	{
		if(*q>'a'&&*q<'z')
		*q-=32;
		
	
	}
	return str;
}

int main()
{
	char s1[]="hjqwbAhxu";
	printf("%s",Up(s1));
	return 0;
}
