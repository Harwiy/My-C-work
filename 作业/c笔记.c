#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
//求两数的最小公倍数 
int min_multiple(int x,int y)
{
	int i=1;
	while((x*i)%y!=0) i++;
	return(x*i);
}
int main()
{
	printf("%d",min_multiple(2,6));
	return 0;
}
//函数调用形式为  long fact()  or  long fact(int)
//函数中有多个return语句时，遇到第一个return函数立即返回 
//若无return语句，则函数遇到函数体最后的“}”返回到主函数
//return；为返回空值
 
 
//判断整数是否为素数
//回顾以往 
void main() 
{
	int n,i;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	if(n%i==0) break;
	if(i==n) printf("不是素数");
	else printf("是素数");
}


//如何用函数表达
int prime(int n)
{
	int i,m=1;
	for(i=2;i<n;i++)
	if(n%i==0) m=0;
	return m;
}

//优化程序
int isprime(long n)
{
	long k;
	if(n==2) return 1;
	if(n%2==0) return 0;
	for(k=3;k*k<=n;k+=2) 
	if(n%k==0) break;
	if(k*k>n) return 1;
	return 0;
	
 } 
//求两个数的最大公因子
int gcd(int a,int b)
{
	while(a-b)
	if(a>b) a-=b;
	else b-=a;
	return a;
 } 

int gcd(int a,int b)
{
	int r;
	while(1)
	{
		if(r=(a%b)==0) break;
		a=b;b=r;
	
	}
		return b;
}


//求整数所有的质因子
void main()
{
	int j,k;
	do
	{
		scanf("%d",&k);
	}while(k<2||k<10000);
	for(j=2;j<=k;j++)	
	if(!(k%j)&&prime(j)) printf("%5d",j);
	
 }
 
  
//值传递
void swap(int x,int y) 
{
	int temp;
	temp=x;x=y;y=temp;
}
void main()
{
	int a=7,b=11;
	swap(a,b);
	printf("%d %d",a,b); 
}
//结果 7 11 
//参数传递
void swap(int* x,int* y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
 }
 void main()
 {
 	int a=7,b=11;
 	swap(&a,&b);
 	printf("%d %d",a,b);
  } 
  //结果 11  7 


//函数的递归 
 //十进制转二进制
 void con(int n)
{
	if(n>=2) con(n/2);
	printf("%d",n%2);
	
} 
 
//阶乘
long fact (int n) 
 {
 	long f=1;
 	if(n==1) f=1;
 	else f=n*fact(n-1);
 	return f;
 }
 
 
 //fibonacci
 long fibo(int n)
 {
 	long f;
 	if(n==1) f=1;
	 else if(n==2) f=1;
	 else f=fibo(n-1)+fibo(n-2);
	 return f; 
 }
 
 //数组元素之和
int sum(int *a,int n){
	if(n==0) return 0;
	else return *a+sum(a+1,n-1); 
} 
 
//hanoi 塔问题
void hanoi(int n,char a,char b,char c)
{
	if(n==1) printf("%c-->%c\n",a,c);
	else 
	{
		hanoi(n-1,a,c,b);
		printf("%c-->%c\n",a,c);
		hanoi(n-1,b,a,c);
	}
 } 
 
 //次方函数
 int power(double x,int n)
 {
 	double result=1,factor=x;
 	while(n>0)
 	{
 		while(n%2==0) 
 		{
 			n/=2;
 			factor*=factor;
		 }
		 n--;result*=factor;
		 
	 }
 	
 	return result;
  } 
  
  int power(int x,int y)
  {
  	if(y==0) return 1;
  	return x*power(x,y-1);
  	
  }
 
 //倒序输出
 void reverse(int n)
 {
 	printf("%d",n%10);
 	if(n<10) return;
 	reverse(n/10);
  } 
 //寻找key值
 //直观解法
 for(i=0;i<n;i++)
 if(key==a[i]) break;
 //设置哨兵法
 key=a[n];
 for(i=0;key!=a[i];i++)
 //i<n找到 i>n未找到 
 //二分法
 int i=0,j=n-1;
 while(i<=j) 
 {
 	m=(i+j)/2;
 	if(key==a[m] ) break;
 	else if(key>a[m]) i=m+1;
 	else j=m-1;
 }
 //找到：i<=j 且a[m]=key;没找到:i>j 
 
 
 //冒泡排序
 for(i=0;i<n-1;i++) //n-1 ^1 共n-1次遍历 
	 for(j=0;j<n-1-i;j++)
 		if(a[j]>a[j+1]) 
		 {
		 	temp=a[j];
		 	a[j]=a[j+1];
		 	a[j+1]=temp;
		  } 
		  
//选择法排序
for(i=0;i<n-1;i++)
{
	int k=i;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[k])  k=j;
		if(i!=k)
		{
			int t=a[i];
			a[i]=a[k];
			a[k]=t;
		}		
	}
	
	for(i=0;i<n;i++)
	printf("%2d",a[i]);
	return 0;
 }		  
		  
 //缺点  如果某次遍历没有发生交换 说明已经排好了 
 //引入标志变量 
for(i=0;i<n-1;i++) 
	 {
	 	for(flag=0,j=0;j<n-1-i;j++)
 		if(a[j]>a[j+1]) 
		 {
		 	temp=a[j];
		 	a[j]=a[j+1];
		 	a[j+1]=temp;
		 	flag=1;
		  } 
		  if(flag==0) break;
	 }
//缺点 概率小
//如果某次遍历在某个位置上发生最后一次交换  那么后面都排好了 引入变量k->end来记录最后一次交换位置		  
end=n-1;
while(end>0)
{
	for(k=j=0;j<end;j++)  //k=0 有必要 若本来就是排好的那么立即结束防止死循环 
	if(a[j]>a[j+1])
	{
		int temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		k=j;
	}
	end=k;
}


//找出出现次数最多的数字
int a[n];max=1;
for(i=0;i<n-1;i++) 
   {
   	for(count=1,j=i+1;j<n;j++)
      if(a[j]==a[i]) count++;
      if(count>max)     
      {
      	max=count;
      	position=i;
	  }
   }
最多次是max 位置是a[position] 
//for循环后有时可跟空语句来检查i 
//集合M
 e3=e2=0;
 m[0]=j=1;
 while(j<n)
 {
 	if(m[e3]*3+1>=m[e2]*2+1)
 	{
 		m[j]=m[e2++]*2+1;
 		if(m[e3]*3+1==m[j]) e3++;
	 }
	 else m[j]=m[e3++]*3+1;
	 j++;
  } 

//循环数组 
//先给出第一行 利用i行和i-1行的关系
for(j=0;j<n;j++)
 a[0][j]=j+1;
 for(i=1;i<n;i++) 
 {
 	a[i][0]=a[i-1][n-1];
 	for(j=1;j<n;j++)
 	a[i][j]=a[i-1][j-1];
 }

//柯西排列
// n*n的二维数组，共有2n-1条斜线，将它们顺次编号为1至2*n-1  第奇数条斜线从左上往右下;第偶数条斜线从右下往左上
//对于下三角，第奇数条斜线从左上往右下，起始行号为n-d（d为斜线编号，下同），起始列号为0；第偶数条斜线从右下往左上，起始行号为n-1,起始列号为d-1


char a_str[] = {"I am happy!"}//大括号可省 
//字符数组中存储的字符序列本身并不要求最后要有字符’\0’。但当字符数组内存储的内容需要作为字符串时，就必须要有标志符 '\0' 
//当字符数组内存储的是字符串时，可用”%s”格式输出，若是普通的字符序列，则它不能用格式”%s”，而只能用格式"%c"
//字符串常量串接规则有两条?
// 在键入字符‘\’之后紧接键入回车键。如“I am a st\(回车换行符)
                                                //ring"
 //连续两个紧接的字符串常量相当于一个字符串常量。如
//"I am ""a string." 也是字符串常量 "I am a string"
//“%s” 格式输入字符串时，掠过前导的空白类字符，只能输入一串不含空白类字符的字符序列，
//遇空白类字符，或输入了格式指定的字符个数，就结束输入  若要输入一串包括空格符在内的一行字符，要用字符行输入函数gets()

//区分strcpy和strncpy   str1不能是字符串常量 
//strlwr 大写转小写 strupr 小写转大写 str不能是字符串常量  gets（）将回车符转化成\0结束符 
























































