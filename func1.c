#include "monty.h"
#define DELIM " \n"

char **separate_line(char *line)
{
	char *elements[100];
	char **p = elements;
	int i = 0;

	elements[i] = strtok(line, DELIM);
	while (elements[i])
	{
		i++;
		elements[i] = strtok(NULL, DELIM);
	}
	return (p);
}
