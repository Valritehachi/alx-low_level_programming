#include "lists.h"

/**
 * pop_listint - Deletes head node
 * @head: Pointer
 * Return: head data.
 */

int pop_listint(listint_t **head)
{

int head_data;
listint_t *temp;

if (head == NULL || *head == NULL)
return (0);

temp = *head;

head_data = temp->n;

*head = temp->next;
free(temp);

return (head_data);
}
