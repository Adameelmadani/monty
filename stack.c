#include "monty.h"

int data;

/**
  * push - push
  * @stack: stack
  * @line_number: line_number
  */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		print_err("malloc", "malloc", line_number);
	if (*stack == NULL)
	{
		new_node->n = data;
		new_node->next = NULL;
		new_node->prev = NULL;
		*stack = new_node;
	} else
	{
		(*stack)->prev = new_node;
		new_node->n = data;
		new_node->next = *stack;
		new_node->prev = NULL;
		*stack = new_node;
	}
}

/**
  * pall - pall
  * @stack: stack
  * @line_number: line_number
  */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;

	line_number++;
	while (*stack)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->next;
	}
	*stack = node;
}

/**
  * pint - pint
  * @stack: stack
  * @line_number: line number
  */
void pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL)
		print_err("pint", "pint", line_number);
	printf("%d\n", (*stack)->n);
}

/**
  * pop - pop
  * @stack: stack
  * @line_number: l
  */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	if ((*stack) == NULL)
		print_err("pop", "pop", line_number);
	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
	} else
	{
		node = (*stack)->next;
		node->prev = NULL;
		free(*stack);
		*stack = node;
	}
}

/**
  * use_func - use_func
  * @elements: elements
  * @l: l
  */
void use_func(char **elements, unsigned int l)
{
	instruction_t instr_list[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop}
	};
	int i = 0, n = 0, a = 0;

	if (!elements)
		return;
	if (!elements[0])
		return;
	for (i = 0; i < 7; i++)
	{
		if (strcmp(elements[0], instr_list[i].opcode) == 0)
		{
			if (strcmp(elements[0], "push") == 0)
			{
				if (!elements[1])
					print_err("push", "push", l);
				n = is_int(elements[1], l);
				data = n;
				instr_list[i].f(&temp, l);
				a = -1;
			} else
			{
				data = n;
				instr_list[i].f(&temp, l);
				a = -1;
			}
		}
	}
	if (a == 0)
		print_err("unknown", elements[0], l);
}
