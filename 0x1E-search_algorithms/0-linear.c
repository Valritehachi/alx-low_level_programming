#include "search_algos.h"

#define VALUE_CHECKED(array, index) \
	printf("Value checked array[%lu] = [%d]\n", index, array[index])

/**
 * linear_search - ...
 * @array: ...
 * @size: ...
 * @value: ...
 * Return: 0.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; ++i)
		{
			VALUE_CHECKED(array, i);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
