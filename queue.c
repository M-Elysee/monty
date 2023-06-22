#include "monty.h"
/**
* queue_func - prints the top
* @hd: stack head
* @i: line_number
* Return: no return
*/
void queue_func(stack_t **hd, unsigned int i)
{
	(void)hd;
	(void)i;
	holder.flag = 1;
}
/**
* addqueue_func - add node to the tail stack
* @n: value passed with the opcode
* @hd: head of the stack
* Return: no return
*/
void addqueue_func(stack_t **hd, int n)
{
	stack_t *new, *node;

	node = *hd;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->n = n;
	new->next = NULL;
	if (node)
	{
		while (node->next)
			node = node->next;
	}
	if (!node)
	{
		*hd = new;
		new->prev = NULL;
	}
	else
	{
		node->next = new;
		new->prev = node;
	}
}
