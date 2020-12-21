#include "monty.h"

/**
 * push - puts value on top of stack
 * Return: void
 */

void push(void)
{
	int element = 0;
	int top = -1;
	int **stack = NULL;

	if (!element)
	{
		perror("L<line_number>: usage: push integer\n");
		exit(EXIT_FAILURE);
	}
/* if stack is full */
	if (top == element - 1)
	{
		fprintf(stderr, "STACK IS FULL!!");
	}
/* if stack is empty */
	else
	{
/* incrementing top */
		top = top + 1;
		scanf("%d", &element);
/* inserting element on incremented postition */
		stack[top] = element;
	}
}

/**
 * pop - removes the top element of the stack
 * Return: void
 */

void pop(stack_t **stack, unsigned int line_number)
{
    if (stack == NULL || *stack == NULL)
    {
        printf("L%d: can't pop an empty stack\n", line_number);
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
 * pall - prints all the values on the stack, starting from
 * the top of the stack
 * Return: void
 */

void pall(void)
{
	int top = -1;
	int n = 0;
	int **stack = NULL;

	if (top == n - 1)
	{
		fprintf(stderr, "%d", **stack);
	}
}

/**
 * pint -  prints the value at the top of the stack, followed by a new line.
 * Return: void
 */

int pint(void)
{
	int top = -1, element = 0, **stack = NULL;
/* if stack is full */
	if (top == element - 1)
	{
		return (*stack[top]);
	}
	else
	{
		fprintf(stderr, "L<line_number>: can't pint, stack empty\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * swap - swap top two elements of the stack
 * Return: void
 */
void swap(void)
{
	int top = -1, element = 0, **stack = NULL;
	int x, y;
	int temp = x;

	x = y;
	y = temp;
}
