#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * Return: void
 */

void pint(stack_t **stack, unsigned int line_number)
{
	int top = -1;

	if (stack == 0)
	{
		top = stack[top];
		fprintf(stdin, top);
	}
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

}
