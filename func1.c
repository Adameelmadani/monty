#include "monty.h"
#define DELIM " \n"

/**
  * separate_line - separate lines
  * @line: line
  * Return: char **
  */
char **separate_line(char *line)
{
	char **elements = malloc(sizeof(char *) * 1024);
	int i = 0;

	if (!elements)
		print_err("monty", "monty", 0);
	elements[i] = strtok(line, DELIM);
	while (elements[i])
	{
		i++;
		elements[i] = strtok(NULL, DELIM);
	}
	elements[i + 1] = NULL;
	return (elements);
}

/**
  * is_int - is it an integer
  * @number: number
  * @l: l
  * Return: integer number
  */
int is_int(char *number, unsigned int l)
{
	int i = 0;

	while (number[i] != '\0')
	{
		if (i == 0 && number[i] == '-')
		{
			i++;
			continue;
		}
		if (number[i] < 48 || number[i] > 57)
			print_err("push", "push", l);
		i++;
	}
	i = atoi(number);
	if (i == 0 && strcmp(number, "0") != 0)
		print_err("push", "push", l);
	return (i);
}
