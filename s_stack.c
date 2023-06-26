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

/**
  * add - add two top elements
  * @stack: stack
  * @line_number: line number
  */
void add(stack_t **stack, unsigned int line_number)
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
		print_err("add", "add", line_number);
	i = (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = (*stack)->n + i;
}

/**
  * nop - nop
  * @stack: stack
  * @line_number: line number
  */
void nop(__attribute__((unused))stack_t **stack,
		__attribute__((unused))unsigned int line_number)
{
}

/**
  * sub - sub two top elements
  * @stack: stack
  * @line_number: line number
  */
void sub(stack_t **stack, unsigned int line_number)
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
		print_err("sub", "sub", line_number);
	i = (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = (*stack)->n - i;
}

/**
  * mul - mul two top elements
  * @stack: stack
  * @line_number: line number
  */
void mul(stack_t **stack, unsigned int line_number)
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
		print_err("mul", "mul", line_number);
	i = (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = (*stack)->n * i;
}
