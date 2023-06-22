#include "monty.h"
/**
* pall_func - prints the stack
* @hd: stack head
* @i: no used
* Return: no return
*/
void pall_func(stack_t **hd, unsigned int i)
{
	stack_t *head = *hd;
	(void)i;

	if (head == NULL)
		return;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
