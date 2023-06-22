#include "monty.h"
/**
* pstr_func - prints the string starting at the top of the stack
* @hd: stack head
* @i: line_number
* Return: no return
*/
void pstr_func(stack_t **hd, unsigned int i)
{
	stack_t *head;
	(void)i;

	head = *hd;
	while (head)
	{
		if (head->n > 127 || head->n <= 0)
		{
			break;
		}
		printf("%c", head->n);
		head = head->next;
	}
	printf("\n");
}
