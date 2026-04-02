#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define EPSILON 1.0e-5

typedef struct Node {
	int power;
	double coef;
	struct Node *link;
}Node;

//编写创建带辅助表元的次数从大到小排列的多项式
Node *createList() 
{
	Node *h,*p,*u,*w;
	int n;
	double coef;
	h=(Node *)malloc(sizeof(Node));
	h->link=NULL;//辅助表元指向空，其他不需要设定 
	while(scanf("%d",&n)>=0)
	{
		p=(Node *)malloc(sizeof(Node));
		p->power=n;
		scanf("%lf",&coef);
		p->coef=coef;
		u=h->link;
		w=h;
		while(u!=NULL)
		{
			w=u;
			u=u->link;
		 } 
		w->link=p;
		p->link=u; //设置辅助表元就不需要考虑是否是首元了 
	 } 
	 return h;
 } 
 
//编写多项式相加的函数
//l的次数和k的相等，则系数相加1.如果相加抵消，那么跳过
//l的次数高的话，则不变
//l的次数低的话，把k复制过来 
void addPoly(Node *l,Node *k)
{
	Node *lpt,*kpt,*p,*q;
	p=l;
	lpt=l->link;
	kpt=k->link;
	while(kpt!=NULL)
	{
		if(lpt==NULL)
		{
			q=(Node *)malloc(sizeof(Node));
			q->coef=kpt->coef;
			q->power=kpt->power;
			q->link=NULL;
			p->link=q;
			p=q;
			kpt=kpt->link;
			
		 } 
		 else if(lpt->power=kpt->power)
		 {
		 	lpt->coef+=kpt->coef;
		 	if(lpt->coef<=EPSILON)
		 	{
		 		p->link=lpt->link;
		 		lpt->link=NULL;
		 		free(lpt);
			 }
			 else 
			 	p=p->link;
			 lpt=p->link;//lpt已经被释放，故需要借助p来重新存储 
			 kpt=kpt->link;
		 }
		 else if(lpt->power>kpt->power)
		 {
		 	p=lpt;
		 	lpt=lpt->link;
		  } 
		  else 
		  {
		  	q=(Node *)malloc(sizeof(Node));
		  	q->coef=kpt->coef;
		  	q->power=kpt->power;
		  	q->link=lpt;
		  	p->link=q;
		  	p=q;
		  	kpt=kpt->link;
		  }
	}
 } 
 
int main()
{
	Node *h1,*h2,*p,*q;
	h1=createList();
	h2=createList();
	addPoly(h1,h2);
	q=h1;
	while(q)
	{
		printf("次数%d  系数%lf\n",q->power,q->coef);
		q=q->link;
	}
	q=h1;
	while(q)//删除链表h1 
	{
		p=q->link;
		free(q);
		q=p;
		
	}
	q=h2;
	while(q)//删除链表h2 
	{
		p=q->link;
		free(q);
		q=p;
		
	}
	
	return 0;
}


