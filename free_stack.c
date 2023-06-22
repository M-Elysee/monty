#include "monty.h"
/**
* free_stack - provided with a head pointer it frees a double linked list
* @hd: points to the head of a double linked list
*/
void free_stack(stack_t *hd)
{
	stack_t *h = hd;

	while (hd)
	{
		h = hd->next;
		free(hd);
		hd = h;
	}
}
