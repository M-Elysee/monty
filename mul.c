#include "monty.h"
/**
* mul_func - multiplies the top two elements of the stack.
* @hd: stack head
* @i: line_number
* Return: no return
*/
void mul_func(stack_t **hd, unsigned int i)
{
	stack_t *head;
	int l = 0, mul;

	head = *hd;
	while (head)
	{
		head = head->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", i);
		fclose(holder.fl);
		free(holder.ptr);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	head = *hd;
	mul = head->next->n * head->n;
	head->next->n = mul;
	*hd = head->next;
	free(head);
}
