#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

//#if 0
typedef struct _node {
	int val;
	struct _node* next;
} node;

typedef node* stack;

#define STACK_LENGTH	5
#define EMPTY			(-1)
#define STACK_EMPTY		INT_MIN

int mystack[STACK_LENGTH];
int top = EMPTY;

bool push(stack *mystack, int value) {
	node* newnode = malloc(sizeof(node));

	if (newnode == NULL) return false;
	newnode->val = value;
	newnode->next = *mystack;
	*mystack = newnode;
	return true;
}

int pop(stack* mystack)
{
	node* curr = *mystack;
	int result;

	if (curr == NULL) return STACK_EMPTY;
	result = curr->val;
	*mystack = (*mystack)->next;
	free(curr);
	return result;
}

int main()
{
	stack s1 = NULL, s2 = NULL, s3 = NULL;
	push(&s1, 56);
	push(&s2, 78);
	push(&s2, 13);
	push(&s2, 988);
	push(&s3, 13);

	int tmp;

	while ((tmp = pop(&s2)) != STACK_EMPTY) {
		printf("t = %d\n", tmp);
	}
	return 0;
}
//#endif
