#include "monty.h"
/**
*sub_func- sustration
*@hd: stack head
*@i: line_number
*Return: no return
*/
void sub_func(stack_t **hd, unsigned int i)
{
	stack_t *h;
	int sub, n;

	h = *hd;
	for (n = 0; h != NULL; n++)
		h = h->next;
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", i);
		fclose(holder.fl);
		free(holder.ptr);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	sub = h->next->n - h->n;
	h->next->n = sub;
	*hd = h->next;
	free(h);
}
