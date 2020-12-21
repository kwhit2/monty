#include "monty.h"

/**
 * push - puts value on top of stack
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	unsigned int top = -1;
	unsigned int n;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
/* if stack is full */
	if (top == n - 1)
	{
		fprintf(stderr, "STACK IS FULL!!");
		top = top + 1;
	}
/* if stack is empty */
	else
	{
		scanf("%d", &n);
/* incrementing top */
		top = top + 1;

/* inserting element on incremented postition */
		*stack[top] = element;
	}
}
