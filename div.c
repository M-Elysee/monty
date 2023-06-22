#include "monty.h"
/**
* div_func - divides the top two elements of the stack.
* @hd: stack head
* @i: line_number
* Return: no return
*/
void div_func(stack_t **hd, unsigned int i)
{
	stack_t *head;
	int l = 0, div;

	head = *hd;
	while (head)
	{
		head = head->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", i);
		fclose(holder.fl);
		free(holder.ptr);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	head = *hd;
	if (head->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", i);
		fclose(holder.fl);
		free(holder.ptr);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	div = head->next->n / head->n;
	head->next->n = div;
	*hd = head->next;
	free(head);
}
