#include "lists.h"

/**
 * free_listp2 - Frees a list
 * @head: Pointer
 * Return: 0.
 */

void free_listp2(listp_t **head)
{

listp_t *temp, *currnt;
if (head != NULL)
{
currnt = *head;
while ((temp = currnt) != NULL)
{
currnt = currnt->next;
free(temp);
}
*head = NULL;
}
}

/**
 * free_listint_safe - Frees list
 * @h: Pointer
 * Return: nnodes.
 */

size_t free_listint_safe(listint_t **h)
{

size_t nnodes = 0;
listp_t *hptr, *new, *add;
listint_t *currnt;

hptr = NULL;

while (*h != NULL)
{
new = malloc(sizeof(listp_t));

if (new == NULL)
exit(98);

new->p = (void *)*h;
new->next = hptr;
hptr = new;

add = hptr;

while (add->next != NULL)
{
add = add->next;
if (*h == add->p)
{
*h = NULL;
free_listp2(&hptr);
return (nnodes);
}
}

currnt = *h;
*h = (*h)->next;
free(currnt);
nnodes++;
}

*h = NULL;
free_listp2(&hptr);
return (nnodes);
}
