#include "monty.h"

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
	token = strtok(line, "\n"); /*may need single quotes ' '*/
	token = strtok(line, " "); /*may need single quotes ' '*/
	while (token)
	{
		token = strtok(NULL, " "); /*may need single quotes ' '*/
	}
	if (strcmp(line, "push") == 0)
	{
		push.ops; /* was push(ops); but ops did not highlight*/
		free(line);
	}
	printf("%s", line);
	free(line);
	fclose(file);
	exit(EXIT_SUCCESS);
	return (0);
}

/**
* operarations - contains a struct with operations
* @str: string to be returned
* Return: str
*/

int operations(char **str)
{
	int i;
	int (*f)(instruction_s);

	instruction_t ops[] = {
		{"push", push},
		/*{"pall", pall},*/
		/*{"pint", pint},*/
		/*{"pop", pop},*/
		/*{"swap", swap},*/
		/*{"add", add},*/
		/*{"nop", nop},*/
		{"\0", NULL}
	};
	while (ops[i].opcode)
	{
		f = ops[i].f;
	}
	return (0);
}
