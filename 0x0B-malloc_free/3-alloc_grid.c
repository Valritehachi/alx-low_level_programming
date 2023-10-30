#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: y
 */

int **alloc_grid(int width, int height)
{
int a, b, c, d;
int **y;

if (width <= 0 || height <= 0)
return (NULL);

y = malloc(sizeof(int *) * height);

if (y == NULL)
{
free(y);
return (NULL);
}

for (a = 0; a < height; a++)
{
y[a] = malloc(sizeof(int) * width);
if (y[a] == NULL)
{
for (b = a; b >= 0; b--)
{
free(y[b]);
}
free(y);
return (NULL);
}
}

for (c = 0; c < height; c++)
{
for (d = 0; d < width; d++)
{
y[c][d] = 0;
}
}
return (y);
}
