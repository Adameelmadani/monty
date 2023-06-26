#include "monty.h"

/**
  * swap - swap two top elements
  * @stack: stack
  * @line_number: line number
  */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;
	int i = 0;

	while (node)
	{
		node = node->next;
		i++;
		if (i == 2)
			break;
	}
	if (i != 2)
		print_err("swap", "swap", line_number);
	node = *stack;
	*stack = (*stack)->next;
	/* Now swap*/
	node->next = (*stack)->next;
	node->prev = *stack;
	(*stack)->next = node;
	(*stack)->prev = NULL;
	if (node->next != NULL)
	{
		(node->next)->prev = node;
	}
}
