int gcd(int a,int b)
{
	while(b)
	{
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
 } 
 
//输出法雷
void Folder(int n)
{
	int denominator=2,numerator=1;
	printf("0/1, ");
	for(;denominator<=n;denominator++)
	{
		for(numerator=1;numerator<denominator;numerator++)//此处注意分子需要重新赋值 
		{
			if(gcd(denominator,numerator)==1)
			printf("%d/%d, ",numerator,denominator);
		}
	}
	printf("1/1\n");
 } 

int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	Folder(n);
	return 0;
	
}
