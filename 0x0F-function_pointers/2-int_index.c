#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: the integer to check
 * @cmp: cmp
 * @size: size
 * Return: 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a = 0;

if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (a < size)
{
if (cmp(array[a]))
return (a);

a++;
}
}
}

return (-1);
}
