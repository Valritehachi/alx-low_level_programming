#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory
 * @nmemb:  number of elements
 * @size: The size elements
 *
 * Return: p
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int a = 0;
unsigned int b = 0;
char *p;

if (nmemb == 0 || size == 0)
return (NULL);

b = nmemb * size;
p = malloc(b);

if (p == NULL)
return (NULL);

while (a < b)
{
p[a] = 0;
a++;
}

return (p);
}
