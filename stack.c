#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (*stack == NULL)
	{
		new_node->n = line_number;
		new_node->next = NULL;
		new_node->prev = NULL;
		*stack = new_node;
	} else
	{
		new_node->n = line_number;
		new_node->next = *stack;
		new_node->prev = NULL;
		*stack = new_node;
	}
}

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t node = *stack;

	line_number++;
	while (*stack)
	{
		printf("%d\n",(*stack)->n);
		*stack = (*stack)->next;
	}
	*stack = node;
}

void use_func(char **elements, int l)
{
	instruction_t instr_list[] = {
		{"push", push},
		{"pall", pall},
	}
	int i = 0;
	int n = 0;

	if (!elements)
		return;
	if (!elements[0])
		return;
	for (i = 0; i < 2; i++)
	{
		if (strcmp(elements[0], instr_list[i]) == 0)
		{
			if (strcmp(elements[0], "push") == 0)
			{
				if (!elements[1])
				{
					printf("L%d: usage: push integer\n", l);
					exit(EXIT_FAILURE);
				}
				n = atoi(elements[1]);
				if (n == 0 && strcmp(elements[1], "0") != 0)
				{
					printf("L%d: usage: push integer\n", l);
					exit(EXIT_FAILURE);
				}
				instr_list[i].f(temp, n);
			}else
				instr_list[i].f(temp, n);
		}
	}
}
