#include "search_algos.h"

/**
 * print_array - ...
 * @array: ...
 * @lo: ...
 * @hi: ...
 * Return: 0.
 */
static void print_array(int *array, size_t lo, size_t hi)
{
	printf("Searching in array: ");
	while (lo <= hi)
	{
		if (lo < hi)
		{
			printf("%d, ", array[lo++]);
		}
		else
		{
			printf("%d\n", array[lo++]);
		}
	}
}

/**
 * _binary_search - ...
 * @array: ....
 * @lo: ...
 * @hi: ...
 * @value:...
 * Return: 0.
 */
static int _binary_search(int *array, size_t lo, size_t hi, int value)
{
	size_t mid = (lo + hi) / 2;

	if (lo > hi)
	{
		return (-1);
	}

	print_array(array, lo, hi);
	if (array[mid] < value)
	{
		return (_binary_search(array, mid + 1, hi, value));
	}
	if (array[mid] > value)
	{
		return (_binary_search(array, lo, mid - 1, value));
	}
	return (mid);
}

/**
 * binary_search - ...
 * @array: ...
 * @size: ...
 * @value: ...
 * Return: 0.
 */
int binary_search(int *array, size_t size, int value)
{
	return (array && size ? _binary_search(array, 0, size - 1, value) : -1);
}
