#include "monty.h"
/**
* add_func - adds the top two elements of the stack.
* @hd: stack head
* @i: line_number
* Return: no return
*/
void add_func(stack_t **hd, unsigned int i)
{
	stack_t *head;
	int l = 0, sum;

	head = *hd;
	while (head)
	{
		head = head->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", i);
		fclose(holder.fl);
		free(holder.ptr);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	head = *hd;
	sum = head->n + head->next->n;
	head->next->n = sum;
	*hd = head->next;
	free(head);
}
