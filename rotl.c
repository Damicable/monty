#include "monty.h"

/**
 * f_rotl- This is the function that rotates the stack to the top
 * @head: The head of the stack
 * @counter: A line count
 *
 * Return: void
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *new;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	new = (*head)->next;
	new->previous = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->previous = tmp;
	(*head) = new;
}
