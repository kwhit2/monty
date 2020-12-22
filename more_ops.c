#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: double pointer to stack
 * @line_number: line number
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
	int addtop2;

	if (stack == NULL || *stack || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_things(stack, line_number);
		exit(EXIT_FAILURE);
	}
	addtop2 = global.data;
	pop(stack, line_number);
	addtop2 += global.data;
	pop(stack, line_number);
	global.data = addtop2;
	push(stack, line_number);
}
