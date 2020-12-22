#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: double pointer to stack
 * @line_number: line number
 * Return: void
 */

void pop(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next != NULL) /* continue until end of stack */
	{
		*stack = (*stack)->next; /*set stack position to next node/element*/
		global.data = (*stack)->n; /* set the data = to n */
		free((*stack)->prev); /*free element/node that was on top position*/
		(*stack)->prev = NULL; /* now that top is popped set it to NULL */
	}
	else /* the stack is empty to begin with */
	{
		free(*stack);
		*stack = NULL;
	}
}

/**
 * push - puts value on top of stack
 * @stack: double pointer to stack
 * @line_number: line number
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	if (stack == NULL)
	{
		printf("L%d: unknown stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: Malloc Failed\n");
		free_things(stack, line_number);
		exit(EXIT_FAILURE);
	}
	new->n = global.data;
	new->prev = NULL;
	new->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new;
		*stack = new;
}

/**
 * pall - prints all the values on the stack, starting from the top of stack
 * @stack: double pointer to stack
 * @line_number: line number
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *printstack;

	if (stack == NULL)
	{
		printf("L%d: unknown stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	printstack = *stack;

	while (printstack != NULL)
	{
		printf("%d\n", printstack->n);
		printstack = printstack->next;
	}
}

/**
 * nop - does nothing
 * @stack: double pointer to stack
 * @line_number: line number
 * Return: void
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	while (getchar() != '\n')
		;
}

/**
 * pint - prints the value at the top of the stack
 * @stack: double pointer
 * @line_number: unsigned int
 * Return: void
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", (*stack)->n);
}
