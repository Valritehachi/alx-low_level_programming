#include "search_algos.h"

/**
 * print_array - print array
 * @array: array.
 * @lo: lo
 * @hi: hi
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
 * _advanced_binary - advanced binary.
 * @array: array.
 * @lo: ...
 * @hi: ...
 * @value: value
 * Return: 0.
 */
static int _advanced_binary(int *array, size_t lo, size_t hi, int value)
{
	size_t mid = (lo + hi) / 2;

	if (lo > hi)
	{
		return (-1);
	}

	print_array(array, lo, hi);
	if (array[mid] < value)
	{
		return (_advanced_binary(array, mid + 1, hi, value));
	}
	if (array[mid] > value)
	{
		return (_advanced_binary(array, lo, mid, value));
	}
	if (array[mid - 1] == value)
	{
		return (_advanced_binary(array, lo, mid, value));
	}
	return (mid);
}

/**
 * advanced_binary - advanced binary.
 * @array: array
 * @size: ....
 * @value: ....
 * Return: 0.
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (array && size ? _advanced_binary(array, 0, size - 1, value) : -1);
}
