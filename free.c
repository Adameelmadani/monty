#include "monty.h"

/**
  * free_dlist - free char **
  * @elements: char **
  */
void free_dlist(char **elements)
{
	if (elements)
		free(elements);
}

/**
  * free_list - free char *
  * @list: char *
  */
void free_list(char *list)
{
	if (list)
		free(list);
}
