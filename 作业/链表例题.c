#include<stdio.h>
#include<stdlib.h> 
struct intNode
{
	int value;
	struct intNode *next; 
};

//无序查找,返回与key值相同表元的指针 
struct intNode *intSLink(struct intNode *h,int key) 
{
	struct intNode *v=h;
	while((v!=NULL)&&(v->value)!=key) v=v->next;
	return v;
}

//从小到大顺序查找
struct intNode *searchSOLLink(struct intNode *h,int key)
{
	struct intNode *v=h;
	while((v!=NULL)&&(v->value<key)) v=v->next;
	return v!=NULL&&v->value==key ? v:NULL; 
}
//为了便于在前驱表元后删添表元 
//无序链表的动态查找
struct intNode *searchDSLink(struct intNode *h,int key,struct intNode **pp)
{
	struct intNode *v=h,*u=NULL;
 	while((v!=NULL)&&(v->value)!=key)
 	{
 		u=v;
 		v=v->next;
 		
	 }
	 *pp=u;
	 return v;

 } 
 
//有序链表上的动态查找
struct intNode *searchDOLink(struct intNode *h,int key,struct intNode **pp)
{
	struct intNode *v=h,*u=NULL;
	while((v!=NULL)&&(v->value)<key)
	{
		u=v;
		v=v->next;
		
	}
	*pp=u;
	return v;
 } 
//无序动态 
struct intNode *sDelete(struct intNode **hpt,int key)
{
	struct intNode *u,*w;
	u=*hpt;
	while((u!=NULL)&&(u->value!=key)) 
	{
		w=u;u=u->next;
	}
	if(u!=NULL) 
	{
		if(u==*hpt)//删除u位置元素 
		*hpt=u->next;
		else 
		w->next=u->next;//以u为桥梁 
		u->next=NULL;//将u断开后面的表元 
	}
	return u; 
	 } 
//调用前面写的无序链表查找函数 
struct intNode *ssDelete(struct intNode **hpt,int key)
{
	struct intNode *u,*w;
	if((u=searchDSLink(*hpt,key,&w)==NULL)) return NULL;
	if(w==NULL) *hpt=u->next;
	else w->next=u->next;
	u->next=NULL;
	return u;
	
}

//有序动态
struct intNode *rDelete(struct intNode **hpt,int key)
{
	struct intNode *u,*w;
	if((u=searchDOLLink(*hpt,key,&w)==NULL)||u->value!=key) return NULL;
	if(w==NULL) *hpt=u->next;
	else w->next=u->next;
	u->next=NULL;
	return u;
 } 


//有序链表插入元素
int rInsert(struct intNode **hpt,int key)
{
	struct intNode *u,*w,*p;
	if((u=searchDOLLink(*hpt,key,&w)==NULL)||u->value!=key) 
	{
		p=(struct intNode *)malloc(sizeof(struct intNode));
		p->value=key;
		p->next=u;
		if(w==NULL) *hpt=p;
		else w->next=p;
		return 1; 
	}
	return 0;
 } 

//按整数输入顺序，建立单向链表 
struct intNode *creatlist()
{
	struct intNode *h,*tail,*p;
	int n;
	h=tail=NULL;
	while(scanf("%d,&n")>0)
	{
		p=(struct intNode *)malloc(sizeof(struct intNode));
		p->value=n;
		p->next=NULL;
		if(h==NULL) h=tail=p;
		else tail=tail->next=p;
	}
	return h;
}
//如果每个表元都接在表头前呢？
struct intNode *creatlist()
{
	struct intNode *h,*p;
	int n;
	h=NULL;
	while(scanf("%d",&n)>0)
	{
		p=(struct intNode *)malloc(sizeof(struct intNode));
		p->value=n;
		p->next=h;
		h=p;
	}
	return h;
	
 } 
//输入整数并实现从小到大排列
//步骤：1.生成表元  2.寻找插入位置 3.实现插入（需要考虑插入 插在首表元之前的情况
struct intNode *cSortList()
{
	struct intNode *h=NULL,*u,*w=NULL,*p;
	int n;
	while(scanf("%d",&n)>0)
	{
		p=(struct intNode *)malloc(sizeof(struct intNode));
		p->value=n;
		u=h;
		while((u!=NULL)&&(n>=u->value))//考虑输入键值的情况 
		{
			if(n==u->value)
			break;
			w=u;
			u=u->next;
			 
		}
		if(u==h) h=p;//如果n最小，那可能插在最前面 
		else w->next=p;
		p->next=u;

	}
	return h; 
}
//有辅助表元的情况 （头指针指向的表元不存放数据） 
void reverse(struct intNode *h)
{
	struct intNode *p,v1,v2;
	v1=NULL;
	v2=h->next;
	while(v2!=NULL)
	{
		p=v2->next;
		v2->next=v1;
		v1=v2;
		v2=v1;
	 } 
	 h->next=v1;
	 
 } 
//不带辅助表元的情况，返回链表首指针 
struct intNode *reverseN(struct intNode *h) 
{
	struct intNode *v1,*v2,*p;
	v2=h;
	v1=NULL;
	while(v2!=NULL)
	{
		p=v2->next;
		v2->next=v1;
		v1=v2;
		v2=p; 
	}
	h=v1;
	return h;
}
 

 
//结构和联合都存在内存对齐的情况，结构是内存和，联合是最大类型的内存 
//函数的形参不能是联合类型，也不返回联合类型的值
//但可以是指向联合的指针，以及返回联合的指针 
//枚举常量不能再进行赋值
//枚举常量在内部被当作整数处理，依次为0，1，2，3... 
 num weekday {SUN=7,MON=1,TUE,WED,THU,FRI,SAT};
 //常量可以自己设定，这里TUE的值就是前面的加一
int main()
{
  
enum {Jan = 1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec} month;
int yearearn, monthearn;
for(yearearn=0,month=Jan;month<=Dec;month++){
printf ("Enter the monthly earning for ");
switch (month) {
case Jan : printf("January.\n"); break;
case Feb : printf("February.\n"); break;
case Mar : printf("March.\n"); break;
case Apr : printf("April.\n"); break; 
case May : printf("May.\n"); break;
case Jun : ptintf("June.\n"); break;
case Jul : printf("July.\n"); break;
case Aug : printf("August.\n"); break;
case Sep : printf("September.\n");break;
case Oct : printf("October.\n"); break;
case Nov : printf("November.\n"); break;
case Dec : printf("December.\n"); break;
}
scanf("%d", &monthearn); 
yearearn += monthearn;
printf("\n");
}
printf("The total earnings for the year are %d\n", yearearn);
}
 
//typedef int INTARRAY[22] 数组类型INTARRAY
//类型可提高可移植性质
 

