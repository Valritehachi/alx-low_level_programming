#include "lists.h"

/**
 * free_listint2 - Frees linked lists
 * @head: Pointer
 * Return: 0.
 */

void free_listint2(listint_t **head)
{

listint_t *temp;
listint_t *curnt;

if (head != NULL && *head != NULL)
{
curnt = *head;
while ((temp = curnt) != NULL)
{
curnt = curnt->next;
free(temp);
}
*head = NULL;
}
}
