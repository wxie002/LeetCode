// Definition for singly-linked list.
#include <stdio.h > 
#include<stdlib.h>
#define _CRT_SECURE_NO_DEPRECATE
struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	struct ListNode* p = head;
	int nodeNum = 0;
	//if list has only one node
	if (p->next == NULL)
		return NULL;
	//scan through list, get the node number
	while (p != NULL)
	{
		p = p->next;
		nodeNum++;
	}
	//if removed node is head
	if (n == nodeNum)
		return head->next;
	//if removed node is the last node

	p = head;
	for (int i = 0; i< nodeNum - n - 1; i++)
		p = p->next;
	p->next = (p->next)->next;
	return head;
}

void main()
{
	int n, v;
	struct ListNode *head = NULL;
	struct ListNode *p;
	//create head node
	printf("enter list volume and element of list\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		p = (struct ListNode *)malloc(sizeof(struct ListNode));
		scanf_s("%d", &v);
		p->val = v;
		p->next = head;
		head = p;
	}
	//print list
	p = head;
	while (p != NULL)
	{
		printf("%d-->", p->val);
		p = p->next;
	}
	printf("\n which node from the end of list do you want to remove£¿\n");
	scanf_s("%d", &n);
	removeNthFromEnd(head, n);
	//print list after modification
	p = head;
	while (p != NULL)
	{
		printf("%d-->", p->val);
		p = p->next;
	}
	system("Pause");
}