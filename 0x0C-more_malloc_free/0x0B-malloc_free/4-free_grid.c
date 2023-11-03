#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a grid
 * @grid: grid to be freed
 * @height: height grid
 */

void free_grid(int **grid, int height)
{
int j;

for (j = 0; j < height; j++)
{
free(grid[j]);
}
free(grid);
}

