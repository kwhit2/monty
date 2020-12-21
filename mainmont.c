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
	size_t read;
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
	/**
	*if (file == -1 || file == '\n')
	*{
	*fprintf("L<line_number>%d: unknown instruction <opcode>%s\n", line_number, argv[0])
	*}
	*if ()
	*/
	while (read = getline(&line, &len, file) == -1)/*betty didn't like the if*/
	{
		fprintf(stderr, "Error reading file\n");
		printf("Reading Error\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, _DELIM);
	while (token != NULL)
	{
		token = strtok(NULL, _DELIM);
	}
	_getfunc(line, &stack, linecount);
	free(line);
	fclose(file);
	exit(EXIT_SUCCESS);
	return (0);
}

/**
* _getfunc - contains a struct with operations
* @str: string
* @stack: stack from stack_t
* @line_number: line number
* Return: str
*/

stack_t *_getfunc(char *str, stack_t **stack, unsigned int line_number)
{
	int i;

	instruction_t ops[] = {
		/*{"push", push},*/
		/*{"pall", pall},*/
		/*{"pint", pint},*/
		/*{"pop", pop},*/
		/*{"swap", swap},*/
		/*{"add", add},*/
		{"nop", nop},
		{"\0", NULL}
	};
	for (i = 0; ops[i].opcode != NULL; i++)
	{
	if (*(ops[i]).opcode == *str)
	{
		(ops[i].f(stack, line_number));
	}
	if (!ops[i].opcode)
	{
		fprintf(stderr, "L<line_number>%d: unknown instruction <opcode>%s\n", line_number, str);
		exit(EXIT_FAILURE);
	}
	}
	return (0);
}
