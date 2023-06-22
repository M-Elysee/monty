#include "monty.h"
/**
* swap_func - adds the top two elements of the stack.
* @hd: stack head
* @i: line_number
* Return: no return
*/
void swap_func(stack_t **hd, unsigned int i)
{
	stack_t *head;
	int l = 0, temp;

	head = *hd;
	while (head)
	{
		head = head->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", i);
		fclose(holder.fl);
		free(holder.ptr);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	head = *hd;
	temp = head->n;
	head->n = head->next->n;
	head->next->n = temp;
}
