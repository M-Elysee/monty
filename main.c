#include "monty.h"
holder_t holder = {NULL, NULL, NULL, 0};
/**
* main - is the main entry of our program
* @argc: is the number of argument passed to our funtion
* @argv: array of pointers to command line arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *ptr;
	FILE *fl;
	ssize_t rd_line = 1;
	unsigned int i = 0;
	size_t size = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fl = fopen(argv[1], "r");
	holder.fl = fl;
	if (!fl)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	do {
		ptr = NULL;
		rd_line = getline(&ptr, &size, fl);
		holder.ptr = ptr;
		i++;
		if (rd_line > 0)
			implement(ptr, &stack, i, fl);
		free(ptr);
	} while (rd_line > 0);
	free_stack(stack);
	fclose(fl);
	return (0);
}
