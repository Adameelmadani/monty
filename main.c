#include "monty.h"
#define LINE_SIZE 1024

stack_t **temp;

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
	int i, l = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	do {
		line = malloc(sizeof(char) * LINE_SIZE);
		if (!line)
		{
			fprintf(stderr, "USAGE: monty file\n");
			exit(EXIT_FAILURE);
		}
		i = 0;
		fgets(line, LINE_SIZE, file);
		if (feof(file))
			break;
		elements = separate_line(line);
		use_func(elements, l);
		free_dlist(elements);
		free_list(line);
		l++;
	} while (1);
	free_list(line);
	fclose(file);
	return (0);
}
