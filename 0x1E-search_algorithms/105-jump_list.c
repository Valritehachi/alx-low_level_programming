#include "search_algos.h"
#include <math.h>

#define PRINT_CHECKED(idx, item) \
	printf("Value checked at index [%lu] = [%d]\n", (idx), (item))

#define PRINT_BOUNDED(low, high) \
	printf("Value found between indexes [%lu] and [%lu]\n", (low), (high))

/**
 * jump_list - jump list.
 * @list: list.
 * @size: size.
 * @value: value.
 * Return: 0.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tail = list;
	size_t jump = sqrt(size);

	if (list && size)
	{
		while (tail->next && value > tail->n)
		{
			list = tail;
			size = jump;
			while (size-- && tail->next)
				tail = tail->next;
			PRINT_CHECKED(tail->index, tail->n);
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
