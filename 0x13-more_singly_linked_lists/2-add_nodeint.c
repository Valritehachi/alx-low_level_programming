#include "lists.h"

/**
 * add_nodeint - adds new node
 * @n: Integer value
 * @head: Pointer
 * Return: head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *node;

node = malloc(sizeof(listint_t));

if (node == NULL)
return (NULL);

node->n = n;
node->next = *head;

*head = node;

return (*head);
}
