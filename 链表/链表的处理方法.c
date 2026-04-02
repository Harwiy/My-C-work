#include<stdio.h>
#include<stdlib.h>

//定义节点结构体 
typedef struct Node{
	int value;
	struct Node *next;
}Node;

//按需要创建新节点
Node *createNode(int value)
{
	Node *newNode =(Node *)malloc(sizeof(Node));
	if(!newNode){
		printf("Memory allocation failed!");
		exit(1);
	}
	newNode->value=value;
	newNode->next=NULL;
	return newNode;
 } 

//将新节点连接到链表上
void appendNode(Node **head,int value)//如果有可能改变已知的指针，则需要二级指针 
{
	Node *newNode =createNode(value);
	if(*head==NULL) *head=newNode;
	else 
	{
		Node *p=*head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=newNode;
	}   	
 } 
 
//打印链表
void printList(Node *head)
{
	Node *p=head;
	while(p!=NULL)
	{
		printf("%d ",p->value);
		p=p->next;
	}
	printf("\n");
 } 

					
//复制出连接顺序相同的链表 
Node *copySameOrderList(Node *head)
{
	if(head==NULL) return NULL;
	Node *newhead=createNode(head->value);
	Node *current=head->next;
	Node *newcurrent=newhead;
	while(current!=NULL)
	{
		newcurrent->next=createNode(current->value);
		newcurrent=newcurrent->next;
		current=current->next;
		
	}
	return newhead;
}
																		
//复制出连接顺序相反的链表
Node *copyReverseOrderList(Node *head)
{
	if(head==NULL) return NULL;
	Node *newhead =NULL;
	Node *current=head;
	while(current!=NULL)
	{
		Node *newNode =createNode(current->value);
		newNode->next=newhead;
		newhead=newNode; 
		current=current->next;
	}
	return newhead;
 } 
 
//复制出有序链表（从小到大） 
Node *copySortedList(Node *head)
{
	if(head==NULL) return NULL;
	Node *newhead=createNode(head->value);
	Node *current=head->next;
	while(current!=NULL)
	{
		Node *newcurrent=createNode(current->value);
		Node *u=newhead,*v=NULL;
		while(u!=NULL&&newcurrent->value > u->value)
		{
			v=u;
			u=u->next;
		}
		if(u==newhead) newhead=newcurrent;
		else v->next=newcurrent;
		newcurrent->next=u;
		current=current->next;
	}
	return newhead;
 } 
 
//找到最小元素并删除
void deleteMinElement(Node **head)//可能最小元素在首元，所以首指针可能改变，需要二级指针 
{
	if(*head==NULL)  return;//void函数中返回空值则提前结束
	Node *minNode=*head;
	Node *minpreNode=NULL;
	Node *current=*head;
	Node *preNode=NULL;
	while(current!=NULL)
	{
		if(current->value < minNode->value)
		{
			minpreNode=preNode;
			minNode=current; 
		}
		preNode=current;
		current=current->next;
	 } 
	  if(minpreNode==NULL)
	    *head=minNode->next;
	  else 
	  	minpreNode->next=minNode->next;
	       minNode->next=NULL;
	  	   free(minNode);
 } 
 
//合并两个有序链表为一个新的有序链表
Node *mergeTwoLists(Node *l1,Node *l2)
{
	Node dummy;//设置辅助表元便于操作
	dummy.next=NULL;
	Node *current=&dummy;
	while(l1!=NULL&&l2!=NULL)
	{
		if(l1->value<=l2->value)
		{
			current->next=l1;
			l1=l1->next;
		}
		else 
		{
			current->next=l2;
			l2=l2->next;
		}
		current=current->next; 
	 } 
	if(l1!=NULL)
	 	current->next=l1;
	 else 
	 current->next=l2;
	 return dummy.next;
 } 
 
//从三个有序整数链表中找出第一个相同的数
int findFirstCommon(Node *l1,Node *l2,Node *l3)
{
	Node *p1=l1,*p2=l2,*p3=l3;//上面也可以这么设置工作指针 
	while(p1!=NULL&&p2!=NULL&&p3!=NULL)
	{
		if(p1->value==p2->value&&p2->value==p2->value)
		return p1->value;
		if(p1->value<=p2->value&&p1->value<=p3->value)
		p1=p1->next;
		else if(p2->value<=p1->value&&p2->value<=p3->value)
		p2=p2->next;
		else 
		p3=p3->next;
	}
	return -1;
	

}

int main() 
{
    Node* list = NULL;
    appendNode(&list, 9);
    appendNode(&list, 2);
    appendNode(&list, 5);
    appendNode(&list, 4);
    appendNode(&list, 3);

    printf("Original List: ");
    printList(list);

    Node* sameOrderCopy = copySameOrderList(list);
    printf("Same Order Copy: ");
    printList(sameOrderCopy);

    Node* reverseOrderCopy = copyReverseOrderList(list);
    printf("Reverse Order Copy: ");
    printList(reverseOrderCopy);

    Node* sortedCopy = copySortedList(list);
    printf("Sorted Copy: ");
    printList(sortedCopy);
    
    deleteMinElement(&list);
    printf("List after deleting the minimum element: ");
    printList(list);
printf("\n\n\n");
// 创建第一个有序链表：1 -> 3 -> 5
    Node *k1 = createNode(1);
    k1->next = createNode(3);
    k1->next->next = createNode(5);

    // 创建第二个有序链表：2 -> 4 -> 6
    Node  *k2 = createNode(2);
    k2->next = createNode(4);
    k2->next->next = createNode(6);

    // 合并两个有序链表
    Node* mergedList = mergeTwoLists(k1, k2);

    // 打印合并后的链表
    printList(mergedList);
    printf("\n\n\n");
 // 创建第一个有序链表：1 -> 4 -> 5 -> 7
    struct Node *l1 = createNode(1);
    l1->next = createNode(4);
    l1->next->next = createNode(5);
    l1->next->next->next = createNode(7);

    // 创建第二个有序链表：2 -> 4 -> 6 -> 8
    struct Node *l2 = createNode(2);
    l2->next = createNode(4);
    l2->next->next = createNode(6);
    l2->next->next->next = createNode(8);

    // 创建第三个有序链表：3 -> 4 -> 5 -> 9
    struct Node *l3 = createNode(3);
    l3->next = createNode(5);
    l3->next->next = createNode(4);
    l3->next->next->next = createNode(9);

    // 查找第一个相同的数
    int result = findFirstCommon(l1, l2, l3);
    if (result != -1) {
        printf("The first common integer is: %d\n", result);
    } else {
        printf("No common integer found.\n");
    }
    return 0;
}
