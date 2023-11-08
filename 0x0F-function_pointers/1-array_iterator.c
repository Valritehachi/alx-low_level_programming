#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: name of the person
 * @action: pointer
 * @size: size
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;

if (array && action)
{
a = 0;
while (a < size)
{
action(array[a]);
a++;
}
}
}
