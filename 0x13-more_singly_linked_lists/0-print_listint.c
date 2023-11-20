#include "lists.h"

/**
 * print_listint - Prints all elements
 * @h: Pointer
 * Return: nnodes.
 */

size_t print_listint(const listint_t *h)
{
size_t nnodes = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nnodes++;
}

return (nnodes);
}
