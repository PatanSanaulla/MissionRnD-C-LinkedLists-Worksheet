/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	struct node *p, *first, *temp, *start;
	p = NULL;
	temp = NULL;
	p = (struct node*)malloc(sizeof(struct node*));
	start = (struct node*)malloc(sizeof(struct node*));
	start = head;
	while (start != NULL)
	{
		p = head;
		while (p->next != NULL){
			if (p->data > (p->next)->data)
			{
				//temp = (struct node*)malloc(sizeof(struct node*));
				//temp = p;
				//temp = p->next;
				int tem = p->data;
				p->data = (p->next)->data;
				(p->next)->data = tem;

			}
			p = p->next;
		}
		start = start->next;
	}
 
}