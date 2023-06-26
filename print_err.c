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
		fprintf(stderr, "USAGE: monty file\n");
	else if (strcmp(str, "open") == 0)
		fprintf(stderr, "Error: Can't open file %s\n", argv);
	else if (strcmp(str, "malloc") == 0)
		fprintf(stderr, "Error: malloc failed\n");
	else if (strcmp(str, "push") == 0)
		fprintf(stderr, "L%d: usage: push integer\n", l);
	else if (strcmp(str, "unknown") == 0)
		fprintf(stderr, "L%d: unknown instruction %s\n", l, argv);
	else if (strcmp(str, "pint") == 0)
		fprintf(stderr, "L%d: can't pint, stack empty\n", l);
	else if (strcmp(str, "pop") == 0)
		fprintf(stderr, "L%d: can't pop an empty stack\n", l);
	else if (strcmp(str, "swap") == 0)
		fprintf(stderr, "L%d: can't swap, stack too short\n", l);
	else if (strcmp(str, "add") == 0)
		fprintf(stderr, "L%d: can't add, stack too short\n", l);
	else if (strcmp(str, "sub") == 0)
		fprintf(stderr, "L%d: can't sub, stack too short\n", l);
	else if (strcmp(str, "mul") == 0)
		fprintf(stderr, "L%d: can't mul, stack too short\n", l);
	else if (strcmp(str, "div") == 0)
		fprintf(stderr, "L%d: can't div, stack too short\n", l);
	else if (strcmp(str, "div zero") == 0)
		fprintf(stderr, "L%d: division by zero\n", l);
	else if (strcmp(str, "mod") == 0)
		fprintf(stderr, "L%d: can't mod, stack too short\n", l);
	exit(EXIT_FAILURE);
}
