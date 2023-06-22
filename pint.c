#include "monty.h"
/**
* pint_func - prints the top
* @hd: stack head
* @i: line_number
* Return: no return
*/
void pint_func(stack_t **hd, unsigned int i)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", i);
		fclose(holder.fl);
		free(holder.ptr);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
