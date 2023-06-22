#include "monty.h"
/**
* push_func - add node to the stack
* @hd: stack head
* @i: line_number
* Return: no return
*/
void push_func(stack_t **hd, unsigned int i)
{
	int arg, j = 0, flag = 0;

	if (holder.argument)
	{
		if (holder.argument[0] == '-')
			j++;
		for (; holder.argument[j] != '\0'; j++)
		{
			if (holder.argument[j] > 57 || holder.argument[j] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", i);
			fclose(holder.fl);
			free(holder.ptr);
			free_stack(*hd);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", i);
		fclose(holder.fl);
		free(holder.ptr);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	arg = atoi(holder.argument);
	if (holder.flag == 0)
		addnode_func(hd, arg);
	else
		addqueue_func(hd, arg);
}
