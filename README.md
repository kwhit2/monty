README.md for 0x19. C - Stacks, Queues - LIFO, FIFO "monty"\

Monty Language Interpreter\

In this project the general information we will cover is as follows:\
-What do LIFO and FIFO mean\
-What is a stack, and when to use it\
-What is a queue, and when to use it\
-What are the common implementations of stacks and queues\
-What are the most common use cases of stacks and queues\
-What is the proper way to use global variables

Requirements:\
-Ubuntu 14.04 LTS\
-GCC Version 4.8.4  using the flags -Wall -Werror -Wextra and -pedantic

Installation:\
1- Clone the monty repository https://github.com/kwhit2/monty.git\
2- Compile the program with: gcc -Wall -Werror -Wextra -pedantic *.c -o monty\
3- Run program as follows\
-Usage: monty <file.m>\
-Example = ./monty ./bytecodes/001.m

Opcode Functions:\
void pop(stack_t **stack, unsigned int line_number); = removes the top element of the stack\
void push(stack_t **stack, unsigned int line_number); = pushes an element onto the stack\
void pall(stack_t **stack, unsigned int line_number); = prints all the values on the stack, starting from the top/
void pint(stack_t **stack, unsigned int line_number); = prints the value at the top of the stack\
void swap(stack_t **stack, unsigned int line_number); = swap the top two elements of the stack\
void add(stack_t **stack, unsigned int line_number); = adds the top two elements of the stack\
void nop(stack_t **stack, unsigned int line_number); = does nothing\
void _getfunc(char *str, stack_t **stack, unsigned int line_number) = Opcode Struct\
void free_things(stack_t **stack, unsigned int line_number); = Frees things\
void tokenizer(char *line, stack_t **stack, unsigned int line_number); = Tokenizer\
int digifier(char *tok); = Check if digit

Other Files/Functions:\
monty.h = Header File\
mainmont.c = Main File\
_operations.c = Contains Opcode functions\
tokenizer.c = Tokenizer\
free_things.c = Frees things with reference to pop\
more_ops.c = More Opcode functions

Authors: Lauren Dobratz and Kyle Whitten
