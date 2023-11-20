#include "lists.h"

/**
 * free_listp - Frees a list.
 * @head: Pointer
 * Return: nnodes.
 */

void free_listp(listp_t **head)
{
listp_t *temp, *current;

if (head != NULL)
{

current = *head;
while ((temp = current) != NULL)
{

current = current->next;
free(temp);
}
*head = NULL;
}
}

/**
 * print_listint_safe - Prints linked list
 * @head: Pointer
 * Return: nnodes.
 */

size_t print_listint_safe(const listint_t *head)
{

size_t nnodes = 0;
listp_t *hptr, *new, *add;

hptr = NULL;

while (head != NULL)
{
new = malloc(sizeof(listp_t));

if (new == NULL)
exit(98);

new->p = (void *)head;
new->next = hptr;
hptr = new;

add = hptr;

while (add->next != NULL)
{
add = add->next;
if (head == add->p)
{

printf("-> [%p] %d\n", (void *)head, head->n);
free_listp(&hptr);
return (nnodes);
}
}

printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
nnodes++;
}

free_listp(&hptr);
return (nnodes);
}
