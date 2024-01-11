#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - doubly linked list
 * @h: integer
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	if (h == NULL)
	{
		return (0);
	}
	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
