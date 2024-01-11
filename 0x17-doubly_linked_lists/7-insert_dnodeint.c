#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * alloc_node - doubly linked list
 * @next: integer
 * @prev: integer
 * @n: integer
 * Return: 0
 */
dlistint_t *alloc_node(int n, dlistint_t *next, dlistint_t *prev)
{
	dlistint_t *node;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = next;
	if (next != NULL)
	{
		next->prev = node;
	}
	node->prev = prev;
	if (prev != NULL)
	{
		prev->next = node;
	}
	return (node);
}
/**
 * insert_dnodeint_at_index - doubly linked list
 * @h: integer
 * @idx: integer
 * @n: integer
 * Return: 0
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	unsigned int count;

	if (h == NULL)
	{
		return (NULL);
	}
	node = NULL;
	if (idx == 0)
	{
		node = alloc_node(n, *h, NULL);

		*h = node;
	}
	else
	{
		dlistint_t *temp = *h;

		count = 0;
		while (temp->next != NULL)
		{
			if (idx == count)
			{
				node = alloc_node(n, temp, temp->prev);
				return (node);
			}
			count++;
			temp = temp->next;
		}
	}
	return (node);
}
