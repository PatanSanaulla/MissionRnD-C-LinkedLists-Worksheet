/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *p;
	p = NULL;
	
	if (K > 1 && head!=NULL){
		int count = 1;
		p = (struct node*)malloc(sizeof(struct node*));
		p = head;
		while (count < K-1)
		{
			p = p->next;
			count++;
		}
		if (p->next != NULL)
		{
			p->next = ((p->next)->next)->next;
		}
		return head;
	}
	else{ return NULL; }
}