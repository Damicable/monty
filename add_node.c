#include "monty.h"

/**
 * addnode - This is a function that adds node to the head stack.
 * @head: This is the head of the stack.
 * @n: A new value.
 *
 * Return: 0
 */

void addnode(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp)
		temp->previous = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->previous = NULL;
	*head = new_node;
}
