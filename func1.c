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
