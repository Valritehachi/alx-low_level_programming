#include "main.h"
#include <stdlib.h>

/**
 * _strdup - prints buffer in hexa
 * @str: the address of memory to print
 *
 * Return: buffer.
 */
char *_strdup(char *str)
{
char *buffer;
	unsigned int i, size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0;
	while (str[size] != 0)
	{
		size++;
	}

	buffer = malloc(sizeof(char) * (size + 1));
	if  (buffer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		buffer[i] = str[i];
	}
	buffer[i] = 0;
	return (buffer);
}
