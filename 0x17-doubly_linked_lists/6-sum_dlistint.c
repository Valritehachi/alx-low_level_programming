#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - doubly linked list
 * @head: integer
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
