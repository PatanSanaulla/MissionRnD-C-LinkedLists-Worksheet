/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *p, *first;
	p = NULL;
	first = NULL;
	if (N < 0){ N = 0-N; }
	int digit;
	if (N == 0){
		first = (struct node*)malloc(sizeof(struct node*));
		first->num = 0;
		first->next = NULL;
	}
	else{
		while (N > 0)
		{
			digit = N % 10;
			N = N / 10;
			if (first == NULL){
				first = (struct node*)malloc(sizeof(struct node*));
				first->num = digit;
				first->next = NULL;
			}
			else{
				p = (struct node*)malloc(sizeof(struct node*));
				p->next = first;
				p->num = digit;
				first = p;
			}

		}
	}
	return first;
}