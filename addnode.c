#include "monty.h"
/**
* addnode_func - add node to the head stack
* @hd: head of the stack
* @n: new_value
* Return: no return
*/
void addnode_func(stack_t **hd, int n)
{

	stack_t *new, *node;

	node = *hd;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (node)
		node->prev = new;
	new->n = n;
	new->next = *hd;
	new->prev = NULL;
	*hd = new;
}
