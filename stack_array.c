#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#if 0
#define STACK_LENGTH	5
#define EMPTY			(-1)
#define STACK_EMPTY		INT_MIN

typedef struct _stack {
	int array[STACK_LENGTH];
	int top;
} stack;

bool push(stack *mystack, int value) {
	if (mystack->top >= STACK_LENGTH - 1) return false;
	mystack->array[++(mystack->top)] = value;
	return true;
}

int pop(stack* mystack)
{
	if (mystack->top == EMPTY) return STACK_EMPTY;
	return mystack->array[(mystack->top)--];
}

int main()
{
	stack s1, s2, s3;
	s1.top = s2.top = s3.top = EMPTY;
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
#endif
