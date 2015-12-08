/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};

int convert_sll_2digit_to_int(struct node *head){
	if (head != NULL){
		struct node *p;
		p = (struct node*)malloc(sizeof(struct node*));
		p = head;
		int value=0;
		do{
			value = (value* 10)+p->digit1;
			value = (value * 10) + p->digit2;
			p = p->next;
		}while (p != NULL);
		return value;
	}

	else{
		return 0;
	}
}
