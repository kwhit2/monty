README.md for 0x19. C - Stacks, Queues - LIFO, FIFO "monty"\

Monty Language Interpreter\

In this project the general information we will cover is as follows:\
-What do LIFO and FIFO mean\
-What is a stack, and when to use it\
-What is a queue, and when to use it\
-What are the common implementations of stacks and queues\
-What are the most common use cases of stacks and queues\
-What is the proper way to use global variables\

Requirements:\
-Ubuntu 14.04 LTS\
-GCC Version 4.8.4  using the flags -Wall -Werror -Wextra and -pedantic\

Installation:\
1- Clone the monty repository https://github.com/kwhit2/monty.git\
2- Compile the program with: gcc -Wall -Werror -Wextra -pedantic *.c -o monty\
3- Run program as follows\
-Usage: monty <file.m>\
-Example = ./monty ./bytecodes/001.m\

Opcode Functions:\
void pop(void); = removes the top element of the stack\
void push(void); = pushes an element onto the stack\
void pall(void); = prints all the values on the stack, starting from the top/
int pint(void); = prints the value at the top of the stack\
void swap(void); = swap the top two elements of the stack\
void add(void); = adds the top two elements of the stack\
void nop(void); = does nothing\

Other Files/Functions:\
monty.h = Header File\
mainmont.c = Main File\
operations.c = Contains Opcode functions\
_operations.c = Contains Opcode functions\
tokenizer.c = Tokenizer\

Authors: Lauren Dobratz and Kyle Whitten
