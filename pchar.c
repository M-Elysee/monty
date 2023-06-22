#include "monty.h"
/**
* pchar_func - prints the char at the top of the stack,
* @hd: stack head
* @i: line_number
* Return: no return
*/
void pchar_func(stack_t **hd, unsigned int i)
{
	stack_t *head;

	head = *hd;
	if (!head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", i);
		fclose(holder.fl);
		free(holder.ptr);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	if (head->n > 127 || head->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", i);
		fclose(holder.fl);
		free(holder.ptr);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", head->n);
}
