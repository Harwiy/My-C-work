#include <stdio.h>
#include <stdlib.h>
#include<string.h> 

// 定义链表节点结构体
typedef struct Node {
    int value;
    struct Node* next_sorted; // 指向按从小到大顺序排列的下一个节点
    struct Node* next_input;  // 指向输入顺序的下一个节点
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->value = value;
    newNode->next_sorted = NULL;
    newNode->next_input = NULL;
    return newNode;
}

//确定输入顺序
void inputOrder(Node **head,int value)
{
	Node *newNode=createNode(value);
	if(*head==NULL)
	*head=newNode;
	else
	{
		Node *temp=*head;
		while(temp->next_input!=NULL)
		temp=temp->next_input;
		temp->next_input=newNode;
		
	}
	
 } 

//大小顺序（从小到大） 
void sortedOrder(Node **head,Node *newNode)//节点前面已经创建好，这里可以直接引用 
{
	//什么情况下新节点连在最前面？
	if(*head==NULL || (*head)->value >= newNode->value) 
	{
		newNode->next_sorted=*head;
		*head=newNode; 
	}
	else 
	{
		Node *current=*head;
		while(current->next_sorted!=NULL && newNode->value > current->next_sorted->value)
		{
			current=current->next_sorted;
		}
		
		newNode->next_sorted=current->next_sorted;
		current->next_sorted=newNode;
	}
}

//选择打印链表
void printList(Node *h,char *order)
{
	printf("%s顺序链表：",order);
	Node *temp=h;
	while(temp!=NULL)
	{
		printf("%d ->",temp->value);
		temp=(strcmp(order,"输入")==0) ? temp->next_input : temp->next_sorted;
	}
	printf("NULL\n");
 } 
 
int main() 
{
    Node* inputHead = NULL;
    Node* sortedHead = NULL;

    // 插入一些数据
    inputOrder(&inputHead, 5);
    inputOrder(&inputHead, 3);
    inputOrder(&inputHead, 8);
    inputOrder(&inputHead, 1);
    inputOrder(&inputHead, 7);

    // 将输入顺序链表的数据插入到排序顺序链表中
    Node* temp = inputHead;
    while (temp != NULL) {
        sortedOrder(&sortedHead, createNode(temp->value));
        temp = temp->next_input;
    }

    // 打印链表
    printList(inputHead, "输入");
    printList(sortedHead, "排序");

    return 0;
}


