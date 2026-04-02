#include<stdio.h>
#include<string.h>

void encode(const char *plaintext,int key,char *cyphertext)
{
	int n=strlen(plaintext);
	int filledpos[n];
	memset(filledpos,0,sizeof(filledpos));
	int i=0,count=0,current=0;
	while(i<n)
	{
		if(filledpos[current]==0)
		{
			count++;
			if(count==key) 
			{
				cyphertext[current]=plaintext[i];
				filledpos[current]=1;
				count=0;
				i++;
			}
			
		}
		current=(current+1)%n;
	}
}

int main()
{
	char plaintext[100];
    int key;
    printf("请输入原文字符串: ");
    scanf("%s", plaintext);
    printf("请输入加密钥匙key: ");
    scanf("%d", &key);
	
    int n = strlen(plaintext); 
	char ciphertext[n+1]; // 密文字符串长度与原文相同，要多加个结束符 
    memset(ciphertext, ' ', n); // 初始化密文字符串为空格
    ciphertext[n] = '\0'; // 确保字符串以空字符结尾
    
     encode(plaintext, key, ciphertext);

    printf("密文字符串: %s\n", ciphertext);

    return 0;
}
