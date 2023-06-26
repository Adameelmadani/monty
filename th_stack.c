#include "monty.h"

/**
  * dive - div two top elements
  * @stack: stack
  * @line_number: line number
  */
void dive(stack_t **stack, unsigned int line_number)
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
		print_err("div", "div", line_number);
	i = (*stack)->n;
	if (i == 0)
		print_err("div zero", "div zero", line_number);
	pop(stack, line_number);
	(*stack)->n = (*stack)->n / i;
}

/**
  * mod - mod two top elements
  * @stack: stack
  * @line_number: line number
  */
void mod(stack_t **stack, unsigned int line_number)
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
		print_err("mod", "mod", line_number);
	i = (*stack)->n;
	if (i == 0)
		print_err("div zero", "div zero", line_number);
	pop(stack, line_number);
	(*stack)->n = (*stack)->n % i;
}
