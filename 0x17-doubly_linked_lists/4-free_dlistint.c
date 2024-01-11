#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - doubly linked list
 * @head: integer
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	if (head == NULL)
	{
		return;
	}
	next_node = head->next;
	free(head);
	free_dlistint(next_node);
}
