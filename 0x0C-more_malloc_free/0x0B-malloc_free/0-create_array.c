#include "main.h"
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: buffer.
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = malloc(sizeof(char) * size);
	if  (buffer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
