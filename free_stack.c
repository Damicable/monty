#include "monty.h"

/**
 * free_stack - This function frees a doubly linked list
 * @head: A head pointer to the stack
 *
 * Return: void
 */

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
 * f_stack - This is a function that prints the top
 * @head:  The head of stack
 * @counter: The line count
 *
 * Return: nothing
 */

void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
