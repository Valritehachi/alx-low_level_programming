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
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
