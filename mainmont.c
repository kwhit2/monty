#include "monty.h"
#define _DELIM " \t\r\n\a"

/**
* main - main monty function
* @argc: argument count
* @argv: the argument being passed
* Return: exit success
*/

int main(int argc, char **argv)
{
	FILE *file;
	char *line = NULL, *token;
	/*int bufsize = BUFFER_SIZE;*/
	size_t len = 0;
	stack_t *stack = NULL;
	unsigned int linecount = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&line, &len, file) != -1)/*betty didn't like the if*/
	{
		if (*line != '\n')
		{
			token = strtok(line, "\n");
/*			printf("%s\n", token); */
			tokenizer(token, &stack, linecount);
		}
		linecount++;
		/*printf("%s\n", line);*/
	}
	fclose(file);
	free(line);
	if (stack != NULL)
	free_things(&stack, linecount);
	return (EXIT_SUCCESS);
}

/**
* _getfunc - contains a struct with operations
* @str: string
* @stack: stack from stack_t
* @line_number: line number
* Return: str
*/

void _getfunc(char *str, stack_t **stack, unsigned int line_number)
{
	int i;

	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		/*{"swap", swap},*/
		{"add", add},
		{"nop", nop},
		{"\0", NULL}
	};
	for (i = 0; ops[i].opcode != NULL; i++)
	{
	if (strcmp(str, ops[i].opcode) == 0)
	{
		ops[i].f(stack, line_number);
		return;
	}
	}
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, str);
		free_things(stack, line_number);
		exit(EXIT_FAILURE);
}
