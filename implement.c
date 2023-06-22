#include "monty.h"
/**
* implement - executes the opcode
* @stack: head linked list - stack
* @i: line_counter
* @fl: poiner to monty file
* @ptr: line content
* Return: no return
*/
int implement(char *ptr, stack_t **stack, unsigned int i, FILE *fl)
{
	instruction_t op_array[] = {
		{"push", push_func}, {"pall", pall_func}, {"pint", pint_func},
		{"pop", pop_func}, {"swap", swap_func}, {"add", add_func},
		{"nop", nop_func}, {"sub", sub_func}, {"div", div_func},
		{"mul", mul_func}, {"mod", mod_func}, {"pchar", pchar_func},
		{"pstr", pstr_func}, {"queue", queue_func}, {"stack", stack_func},
		{NULL, NULL}
	};
	unsigned int j = 0;
	char *op_ptr;

	op_ptr = strtok(ptr, " \n\t");
	if (op_ptr && op_ptr[0] == '#')
		return (0);
	holder.argument = strtok(NULL, " \n\t");
	while (op_array[j].opcode && op_ptr)
	{
		if (strcmp(op_ptr, op_array[j].opcode) == 0)
		{	op_array[j].f(stack, i);
			return (0);
		}
		j++;
	}
	if (op_ptr && op_array[j].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", i, op_ptr);
		fclose(fl);
		free(ptr);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
