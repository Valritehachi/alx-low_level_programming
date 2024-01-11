#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_node_at_index - doubly linked list
 * @head: integer
 * @index: integer
 * Return: 0
 */
int delete_node_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count;

	count = 0;
	node = *head;
	while (node->next != NULL)
	{
		if (count == index)
		{
			if (node->prev != NULL)
			{
				node->prev->next = node->next;
			}
			if (node->next != NULL)
			{
				node->next->prev = node->prev;
			}
			free(node);
			return (1);
		}
		count++;
		node = node->next;
	}
	return (-1);
}

/**
 * delete_dnodeint_at_index - doubly linked list
 * @head: integer
 * @index: integer
 * Return: 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		node = *head;
		if (node->next == NULL)
		{
			*head = NULL;
		}
		else
		{
			*head = node->next;
			node->next->prev = NULL;
		}
		if (node != NULL)
		{
			free(node);
			return (1);
		}
	}
	else
	{
		return (delete_node_at_index(head, index));
	}
	return (-1);
}
