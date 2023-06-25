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

/**
  * free_stack - free stack
  */
void free_stack(void)
{
	stack_t *node = temp;
	stack_t *s_temp = temp;

	while (temp)
	{
		s_temp = temp->next;
		free(temp);
		temp = s_temp;
	}
	temp = node;
}
