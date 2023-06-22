#include "monty.h"

/**
 * f_pop - function that prints the top of the stack
 * @head: double head pointer to the stack
 * @counter: line count
 *
 * Return: nothing
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}

/**
 * f_pint - This is a function that prints the top of the stack
 * @head: A double head pointer to the stack
 * @counter: The line count
 *
 * Return: 0
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

/**
 * f_nop - This function does nothing.
 * @head: A double head pointer to the stack
 * @counter: A line count
 *
 * Return: nothing
 */

void f_nop(stack_t **head, unsigned int counter)
{
	(void) counter;
	(void) head;
}
