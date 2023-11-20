#include "lists.h"

/**
 * add_nodeint_end - Adds new node
 * @n: Integer value
 * @head: Pointer
 * Return: head.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *temp;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
*head = new_node;
else
{
for (temp = *head; temp->next != NULL; temp = temp->next)
;
temp->next = new_node;
}

return (*head);
}
