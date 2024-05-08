#include "search_algos.h"
#include <math.h>

#define PRINT_CHECKED(idx, item) \
	printf("Value checked at index [%lu] = [%d]\n", (idx), (item))

#define PRINT_BOUNDED(low, high) \
	printf("Value found between indexes [%lu] and [%lu]\n", (low), (high))

/**
 * linear_skip - linear skip
 * @list: list.
 * @value: value.
 * Return: 0.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tail = list;

	if (list)
	{
		while (tail->express && value > tail->n)
		{
			list = tail;
			tail = tail->express;
			PRINT_CHECKED(tail->index, tail->n);
		}
		if (value > tail->n)
		{
			list = tail;
			while (tail->next)
				tail = tail->next;
		}
		PRINT_BOUNDED(list->index, tail->index);
		tail = tail->next;
		while (list != tail)
		{
			PRINT_CHECKED(list->index, list->n);
			if (list->n == value)
			{
				return (list);
			}
			list = list->next;
		}
	}
	return (NULL);
}
