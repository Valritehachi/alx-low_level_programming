#include "lists.h"

/**
 * reverse_listint - Reverses a list.
 * @head: Pointer
 * Return: head.
 */

listint_t *reverse_listint(listint_t **head)
{

listint_t *prev = NULL;
listint_t *current = NULL;

while (*head != NULL)
{
current = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = current;
}

*head = prev;

return (*head);

}
