#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
* Description: opcode and its function
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct holder - holdes variables args,file and content of each line in a file
* @argument: value passed with the opcode
* @fl: points to the file
* @ptr: points to the content of a line
* @flag: change stack to queue and vice versa
* Description: carries values through the program
*/
typedef struct holder
{
	char *argument;
	FILE *fl;
	char *ptr;
	int flag;
} holder_t;
extern holder_t holder;

char *realloc_func(char *ptr_s, unsigned int old_s, unsigned int new_s);
ssize_t getstdin_func(char **lineptr_s, int fl);
char  *clean_line_func(char *ptr);
void push_func(stack_t **hd, unsigned int i);
void pall_func(stack_t **hd, unsigned int i);
void pint_func(stack_t **hd, unsigned int i);
int implement(char *ptr, stack_t **hd, unsigned int i, FILE *fl);
void free_stack(stack_t *hd);
void pop_func(stack_t **hd, unsigned int i);
void swap_func(stack_t **hd, unsigned int i);
void add_func(stack_t **hd, unsigned int i);
void nop_func(stack_t **hd, unsigned int i);
void sub_func(stack_t **hd, unsigned int i);
void div_func(stack_t **hd, unsigned int i);
void mul_func(stack_t **hd, unsigned int i);
void mod_func(stack_t **hd, unsigned int i);
void pchar_func(stack_t **hd, unsigned int i);
void pstr_func(stack_t **hd, unsigned int i);
void addnode_func(stack_t **hd, int n);
void addqueue_func(stack_t **hd, int n);
void queue_func(stack_t **hd, unsigned int i);
void stack_func(stack_t **hd, unsigned int i);
#endif
