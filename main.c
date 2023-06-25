#include "monty.h"
#define LINE_SIZE 1024

stack_t *temp;

/**
  * main - main function
  * @argv: arg vector
  * @argc: arg counter
  * Return: EXIT_STATUS
  */
int main(int argc, char *argv[])
{
	FILE *file;
	char *line;
	char **elements;
	int l = 1;

	if (argc != 2)
		print_err("monty", "monty", 0);
	file = fopen(argv[1], "r");
	if (!file)
		print_err("open", argv[1], 0);
	do {
		line = malloc(sizeof(char) * LINE_SIZE);
		if (!line)
			print_err("malloc", "malloc", 0);
		fgets(line, LINE_SIZE, file);
		if (feof(file))
			break;
		elements = separate_line(line);
		use_func(elements, l);
		free_dlist(elements);
		free_list(line);
		l++;
	} while (1);
	free_stack();
	free_list(line);
	fclose(file);
	return (0);
}
