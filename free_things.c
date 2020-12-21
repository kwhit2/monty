#include "monty.h"

/**
 * free_things - frees things
 * @stack:
 * @line_number:
 * Return: void
 */

void free_things(stack_t **stack, unsigned int line_number)
{
    if (stack == NULL)
        return;
    while (*stack != NULL)
        pop(stack, line_number);
}