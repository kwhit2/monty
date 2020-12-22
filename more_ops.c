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

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
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

/**
 * swap -  swaps the top two elements of the stack
 * @stack: double pointer to stack
 * @line_number: line number
 * Return: void
 */

void swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_things(stack, line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
