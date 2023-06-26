#include "monty.h"

/**
  * print_err - print errors
  * @str: str
  * @argv: argv
  * @l: l
  */
void print_err(char *str, char *argv, unsigned int l)
{
	if (strcmp(str, "monty") == 0)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	} else if (strcmp(str, "open") == 0)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv);
		exit(EXIT_FAILURE);
	} else if (strcmp(str, "malloc") == 0)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	} else if (strcmp(str, "push") == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", l);
		exit(EXIT_FAILURE);
	} else if (strcmp(str, "unknown") == 0)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", l, argv);
		exit(EXIT_FAILURE);
	} else if (strcmp(str, "pint") == 0)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", l);
		exit(EXIT_FAILURE);
	} else if (strcmp(str, "pop") == 0)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", l);
		exit(EXIT_FAILURE);
	} else if (strcmp(str, "swap") == 0)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", l);
		exit(EXIT_FAILURE);
	}
}
