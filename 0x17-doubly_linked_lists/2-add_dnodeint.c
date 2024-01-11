#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - doubly linked list
 * @n: integer
 * @head: integer
 * Return: 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
	}
	else
	{
		node->n = n;
		node->next = *head;
		node->prev = NULL;
		(*head)->prev = node;
	}
	*head = node;
	return (node);
}
