#include "monty.h"

void free_dlist(char **elements)
{
	int i = 0;

	if (elements)
	{
		while (elements[i])
			free(elements[i++]);
		free(elements);
	}
}

void free_list(char *list)
{
	if (list)
		free(list);
}
