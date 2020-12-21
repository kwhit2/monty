#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * Return: void
 */
/*
void add(void)
{

}
*/

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
 * nop - does nothing
 * Return: void
 */

void nop(stack_t **stack, unsigned int line_number)
{
printf("Please God\n");
(void)stack;
(void)line_number;
}
