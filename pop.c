#include "monty.h"
/**
* pop_func - prints the top
* @hd: stack head
* @i: line_number
* Return: no return
*/
void pop_func(stack_t **hd, unsigned int i)
{
	stack_t *head;

	if (*hd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", i);
		fclose(holder.fl);
		free(holder.ptr);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	head = *hd;
	*hd = head->next;
	free(head);
}
