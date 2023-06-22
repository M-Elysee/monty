#include "monty.h"
/**
* mod_func - computes the remainder of the second top element
* on the top element of the stack
* @hd: stack head
* @i: line_number
* Return: no return
*/
void mod_func(stack_t **hd, unsigned int i)
{
	stack_t *head;
	int l = 0, mod;

	head = *hd;
	while (head)
	{
		head = head->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", i);
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
	mod = head->next->n % head->n;
	head->next->n = mod;
	*hd = head->next;
	free(head);
}
