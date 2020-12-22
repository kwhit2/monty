#include "monty.h"

/**
 * tokenizer - tokenizing arguments
 * @str: line
 * Return: number of tokens which is count
 */

void tokenizer(char *line, stack_t **stack, unsigned int line_number)
{
	char *tok;
	char *toks;

	tok = strtok(line, " "); /*ex: tok = push*/
	if (*tok == ' ' || *tok == '\n' || tok == NULL || *tok == '#')
	return;
	if (strcmp(tok, "push") == 0)
	{
		toks = tok;
		tok = strtok(NULL, " ");
		if (!digifier(tok))
		{
			printf("L%d: usage: push integer\n", line_number);
			free_things(stack, line_number);
			exit(EXIT_FAILURE);
		}
		global.data = atoi(tok);
		_getfunc(toks, stack, line_number);
	}
	else
	_getfunc(tok, stack, line_number);
}

/**
 * digifier - checking it tok is a digit
 * @tok: tokenizer item to be determined if it is a digit
 * Return: true or false
 */

int digifier(char *tok)
{
	if (tok == NULL)
	return (0);
	if (*tok == '-') /* if a negative number increment once */
	tok++;
	while (*tok != '\0') /* getting entire number ex: push 755 vs push 3 */
	{
		if (!isdigit(*tok))
			return (0); /* if not a number return false */
		tok++; /* increment through input to check if digit */
	}
	tok++; /* increment through while loop if is digit */
	return (1); /* for true if is digit */
}
