#include<stdio.h>
#include<stdlib.h>

//Definition for singly-linked list.
 struct ListNode {
     int val;
     struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {
	struct ListNode *p = head;
	struct ListNode *prev = p;
	while (p != NULL)
	{
		if (p->val == val)
			if (p == head)
				head = head->next;
			else
			{
				prev->next = p->next;
			}
		prev = p;
		p++;

	}
}
