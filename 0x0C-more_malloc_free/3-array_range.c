#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create array of integers.
 * @min: min value
 * @max: max value
 * Return: i
 */

int *array_range(int min, int max)
{
int *i;
int y = 0;

if (min > max)
return (NULL);

i = malloc((sizeof(int) * (max - min)) + sizeof(int));

if (i == NULL)
return (NULL);

while (min <= max)
{
i[y] = min;
y++;
min++;
}
return (i);
}
