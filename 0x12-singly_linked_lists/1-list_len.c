#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns elements
 * @h: pointer
 * Return: a
 */
size_t list_len(const list_t *h)
{
size_t a = 0;

while (h)
{
a++;
h = h->next;
}
return (a);
}
