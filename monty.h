#ifndef MONTY_H
#define MONTY_H

#define BUFFER_SIZE 1024

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include <sys/types.h>
#include <ctype.h>

/**
 * struct glob - global variable struct
 * @data: data
 * Description: Global variable data
 */

typedef struct glob
{
	int data;
} global_t;

extern global_t global;
global_t global;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int main(int argc, char **argv);
void pop(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void swap(void);
void add(void);
void nop(stack_t **stack, unsigned int line_number);
void _getfunc(char *str, stack_t **stack, unsigned int line_number);
void free_things(stack_t **stack, unsigned int line_number);
void tokenizer(char *line, stack_t **stack, unsigned int line_number);
int digifier(char *tok);

#endif
