#include "monty.h"

/**
 * push - pushes element on top of list
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	int top = -1;

	if (!stack)
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	stack_t *new = (stack_t*) malloc(sizeof(stack_t));
	(*new)->data = data;
	new->next = top;
	top = top + 1;
	top = new;
}
