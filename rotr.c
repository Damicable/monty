#include "monty.h"

/**
 * f_rotr - This is a function that rotates the stack to the bottom.
 * @head: The head of the stack.
 * @counter: The line count
 *
 * Return: void
 */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->previous->next = NULL;
	copy->previous = NULL;
	(*head)->previous = copy;
	(*head) = copy;
}
