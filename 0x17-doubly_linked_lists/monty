#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - doubly linked list
 * @n: integer
 * @head: integer
 * Return: 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		node->n  = n;
		node->next = NULL;
		node->prev = NULL;
		*head = node;
	}
	else
	{
		dlistint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		node->n = n;
		node->next = NULL;
		node->prev = temp;
		temp->next = node;
	}
	return (node);
}
