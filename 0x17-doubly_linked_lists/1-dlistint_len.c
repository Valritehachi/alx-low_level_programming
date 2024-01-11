#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - doubly linked list
 * @h: integer
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	if (h == NULL)
	{
		return (0);
	}
	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
